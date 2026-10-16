#include "igi/terrain_surface.hpp"

#include <algorithm>
#include <cmath>
#include <stdexcept>

namespace igi::assets {

std::array<TerrainSurface::Grid, 256> TerrainSurface::load_grids(const std::filesystem::path& path, bool heights) {
    const auto bytes = read_file(path);
    const BinaryView file(bytes);
    file.require_range(0, 256 * 12);
    std::array<Grid, 256> grids;
    std::size_t payload = 256 * 12;
    for (std::size_t grid_index = 0; grid_index < grids.size(); ++grid_index) {
        const std::size_t size = file.unsigned_integer(grid_index * 12 + 8);
        if (size == 0) { continue; }
        if (size > 4096 || (size & (size - 1)) != 0) { throw std::runtime_error("Invalid terrain grid size"); }
        const std::size_t length = heights ? (size + 1) * (size + 1) : (size * size + 7) / 8;
        const auto contents = file.slice(payload, length).bytes();
        grids[grid_index] = {size, FileBytes(contents.begin(), contents.end())};
        payload += length;
    }
    if (payload != file.size()) { throw std::runtime_error("Terrain grid payload lengths do not match the file"); }
    return grids;
}

TerrainSurface::TerrainSurface(const std::filesystem::path& mission_directory, const std::vector<ScriptCall>& tasks)
    : masks_(load_grids(resolve_path(mission_directory, "terrain/terrain.bit"), false)) {
    const auto terrain_directory = resolve_path(mission_directory, "terrain");
    for (const auto& entry : std::filesystem::directory_iterator(terrain_directory)) {
        if (normalize_name(entry.path().extension().string()) == ".hmp") {
            heights_ = load_grids(entry.path(), true);
        }
    }
    const auto script_bytes = read_file(resolve_path(terrain_directory, "terrain.qvm"));
    const QvmInitializer initializer{BinaryView(script_bytes)};
    for (const auto& call : initializer.calls()) {
        if (call.function == "CreateTerrainTileMap" && call.arguments.size() == 65) {
            const int identifier = static_cast<int>(call.arguments[0].number);
            if (identifier < 0 || identifier >= 8) { throw std::runtime_error("Terrain tile-map identifier is invalid"); }
            for (std::size_t tile_index = 0; tile_index < 64; ++tile_index) {
                const double tile = call.arguments[tile_index + 1].number;
                if (tile < 0 || tile > 255) { throw std::runtime_error("Terrain atlas tile is invalid"); }
                tile_maps_[identifier][tile_index] = static_cast<std::uint32_t>(tile);
            }
        } else if (call.function == "CreateTerrainMaterial" && call.arguments.size() == 226) {
            const int identifier = static_cast<int>(call.arguments[0].number);
            if (identifier < 0 || identifier >= 8) { throw std::runtime_error("Terrain material identifier is invalid"); }
            for (std::size_t band_index = 0; band_index < 32; ++band_index) {
                const auto offset = 2 + band_index * 7;
                const double scale = call.arguments[offset + 3].number * 0.5;
                const double tile_map = call.arguments[offset + 4].number;
                if (!std::isfinite(scale) || scale <= 0 || tile_map < 0 || tile_map >= 8) {
                    throw std::runtime_error("Terrain material band is invalid");
                }
                materials_[identifier][band_index] = {static_cast<float>(scale), static_cast<std::size_t>(tile_map)};
            }
        }
    }
    for (const auto& call : tasks) {
        if (call.function != "Task_New" || call.arguments.size() < 10) { continue; }
        const auto& arguments = call.arguments;
        const bool height_binding = arguments[1].text == "HeightMap";
        if (!height_binding && arguments[1].text != "TextureModifier") { continue; }
        const int level = static_cast<int>(arguments[6].number);
        const auto grid_index = static_cast<int>(arguments[height_binding ? 9 : 8].number);
        const int material = height_binding ? 0 : static_cast<int>(arguments[7].number);
        if (level < 0 || level > 25 || grid_index < 0 || grid_index >= 256 || material < 0 || material >= 8) {
            throw std::runtime_error("Terrain binding parameters are invalid");
        }
        const double width = std::ldexp(2147483648.0, -level);
        Binding binding{level, material, std::floor(arguments[3].number / width) * width,
            std::floor(arguments[4].number / width) * width, width, static_cast<std::size_t>(grid_index)};
        (height_binding ? height_bindings_ : material_bindings_).push_back(binding);
    }
    for (auto* bindings : {&material_bindings_, &height_bindings_}) {
        std::stable_sort(bindings->begin(), bindings->end(), [](const Binding& first, const Binding& second) {
            return first.level < second.level;
        });
    }
}

int TerrainSurface::material(double horizontal, double vertical) const {
    int material = 0;
    for (const auto& binding : material_bindings_) {
        const auto& grid = masks_[binding.grid_index];
        const double column = (horizontal - binding.minimum_x) / binding.width * static_cast<double>(grid.size);
        const double row = (vertical - binding.minimum_y) / binding.width * static_cast<double>(grid.size);
        if (grid.size == 0 || column < 0 || row < 0 || column >= grid.size || row >= grid.size) { continue; }
        const auto index = static_cast<std::size_t>(row) * grid.size + static_cast<std::size_t>(column);
        if ((grid.bytes[index / 8] & (1 << (index & 7))) != 0) { material = binding.material; }
    }
    return material;
}

double TerrainSurface::height(double horizontal, double vertical) const {
    double displacement = 0;
    for (const auto& binding : height_bindings_) {
        const auto& grid = heights_[binding.grid_index];
        const double column = (horizontal - binding.minimum_x) / binding.width * static_cast<double>(grid.size);
        const double row = (vertical - binding.minimum_y) / binding.width * static_cast<double>(grid.size);
        if (grid.size == 0 || column < 0 || row < 0 || column >= grid.size || row >= grid.size) { continue; }
        const auto left = static_cast<std::size_t>(column);
        const auto top = static_cast<std::size_t>(row);
        const double fraction_x = column - static_cast<double>(left);
        const double fraction_y = row - static_cast<double>(top);
        const auto sample = [&](std::size_t offset_x, std::size_t offset_y) {
            return static_cast<double>(static_cast<std::int8_t>(grid.bytes[(top + offset_y) * (grid.size + 1) + left + offset_x]));
        };
        const double lower = sample(0, 0) * (1 - fraction_x) + sample(1, 0) * fraction_x;
        const double upper = sample(0, 1) * (1 - fraction_x) + sample(1, 1) * fraction_x;
        displacement = (lower * (1 - fraction_y) + upper * fraction_y - 64.0) * 256.0;
    }
    return displacement;
}

TerrainProjection TerrainSurface::projection(int material, int depth, const std::array<double, 3>& centre) const {
    if (material < 0 || material >= 8 || depth < 0 || depth > 23) { throw std::runtime_error("Terrain projection parameters are invalid"); }
    const auto& band = materials_[material][depth];
    const int shift = 23 - depth;
    const auto step = [&](double coordinate) {
        return static_cast<std::int64_t>(band.scale * coordinate) >> shift;
    };
    const auto horizontal = step(centre[0]);
    const auto vertical = step(centre[1]);
    const auto height = step(centre[2]);
    const auto tile_offset = static_cast<std::size_t>(((vertical & 2047) >> 8) * 8 + ((horizontal & 2047) >> 8));
    return {tile_maps_[band.tile_map][tile_offset], ((horizontal & 255) + 1.0) / 256.0,
        ((vertical & 255) + 1.0) / 256.0, ((height & 255) + 1.0) / 256.0,
        band.scale * 0.5 / std::ldexp(1073741824.0, -depth)};
}

} // namespace igi::assets
