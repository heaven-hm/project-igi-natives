#include "igi/asset_io.hpp"

#include <algorithm>
#include <bit>
#include <cctype>
#include <fstream>
#include <stdexcept>

namespace igi::assets {

std::string normalize_name(std::string_view name) {
    std::string normalized(name);
    std::transform(normalized.begin(), normalized.end(), normalized.begin(), [](unsigned char character) {
        return character == '\\' ? '/' : static_cast<char>(std::tolower(character));
    });
    return normalized;
}

std::filesystem::path resolve_path(const std::filesystem::path& root, std::string_view relative_name) {
    std::filesystem::path result = root;
    const std::filesystem::path relative_path{std::string(relative_name)};
    if (relative_path.is_absolute()) {
        throw std::runtime_error("Asset path must be relative: " + relative_path.string());
    }
    for (const auto& component : relative_path) {
        if (component == "..") {
            throw std::runtime_error("Asset path leaves its root: " + relative_path.string());
        }
        if (std::filesystem::exists(result / component)) {
            result /= component;
            continue;
        }
        bool found_component = false;
        for (const auto& entry : std::filesystem::directory_iterator(result)) {
            if (normalize_name(entry.path().filename().string()) == normalize_name(component.string())) {
                result = entry.path();
                found_component = true;
                break;
            }
        }
        if (!found_component) {
            throw std::runtime_error("Missing asset: " + (result / component).string());
        }
    }
    return result;
}

FileBytes read_file(const std::filesystem::path& path) {
    std::ifstream input(path, std::ios::binary | std::ios::ate);
    if (!input) {
        throw std::runtime_error("Cannot open asset: " + path.string());
    }
    const auto file_length = input.tellg();
    if (file_length < 0 || file_length > 512 * 1024 * 1024) {
        throw std::runtime_error("Asset size is invalid: " + path.string());
    }
    FileBytes bytes(static_cast<std::size_t>(file_length));
    input.seekg(0);
    if (!input.read(reinterpret_cast<char*>(bytes.data()), file_length)) {
        throw std::runtime_error("Incomplete asset read: " + path.string());
    }
    return bytes;
}

void BinaryView::require_range(std::size_t offset, std::size_t length) const {
    if (offset > size() || length > size() - offset) {
        throw std::runtime_error("Asset field exceeds file bounds at byte " + std::to_string(offset));
    }
}

std::uint8_t BinaryView::byte(std::size_t offset) const {
    require_range(offset, 1);
    return bytes_[offset];
}

std::uint16_t BinaryView::unsigned_short(std::size_t offset) const {
    require_range(offset, 2);
    return static_cast<std::uint16_t>(bytes_[offset] | (bytes_[offset + 1] << 8));
}

std::uint32_t BinaryView::unsigned_integer(std::size_t offset) const {
    require_range(offset, 4);
    return static_cast<std::uint32_t>(bytes_[offset]) |
           (static_cast<std::uint32_t>(bytes_[offset + 1]) << 8) |
           (static_cast<std::uint32_t>(bytes_[offset + 2]) << 16) |
           (static_cast<std::uint32_t>(bytes_[offset + 3]) << 24);
}

float BinaryView::real(std::size_t offset) const {
    return std::bit_cast<float>(unsigned_integer(offset));
}

std::string BinaryView::text(std::size_t offset, std::size_t length) const {
    require_range(offset, length);
    std::string result;
    for (std::size_t character_index = 0; character_index < length; ++character_index) {
        const auto character = bytes_[offset + character_index];
        if (character == 0) {
            break;
        }
        result.push_back(static_cast<char>(character));
    }
    return result;
}

BinaryView BinaryView::slice(std::size_t offset, std::size_t length) const {
    require_range(offset, length);
    return BinaryView(bytes_.subspan(offset, length));
}

} // namespace igi::assets
