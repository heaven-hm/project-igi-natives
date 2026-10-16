#pragma once

#include "igi/qvm_initializer.hpp"

#include <array>

namespace igi::assets {

struct TerrainProjection final {
    std::uint32_t tile{};
    double origin_u{};
    double origin_v{};
    double origin_w{};
    double rate{};
};

class TerrainSurface final {
  public:
    TerrainSurface(const std::filesystem::path& mission_directory, const std::vector<ScriptCall>& tasks);
    [[nodiscard]] double height(double horizontal, double vertical) const;
    [[nodiscard]] int material(double horizontal, double vertical) const;
    [[nodiscard]] TerrainProjection projection(int material, int depth, const std::array<double, 3>& centre) const;

  private:
    struct Grid final { std::size_t size{}; FileBytes bytes; };
    struct Binding final {
        int level{};
        int material{};
        double minimum_x{};
        double minimum_y{};
        double width{};
        std::size_t grid_index{};
    };
    struct Band final { float scale{}; std::size_t tile_map{}; };
    [[nodiscard]] static std::array<Grid, 256> load_grids(const std::filesystem::path& path, bool heights);
    std::array<Grid, 256> masks_;
    std::array<Grid, 256> heights_;
    std::vector<Binding> material_bindings_;
    std::vector<Binding> height_bindings_;
    std::array<std::array<Band, 32>, 8> materials_{};
    std::array<std::array<std::uint32_t, 64>, 8> tile_maps_{};
};

} // namespace igi::assets
