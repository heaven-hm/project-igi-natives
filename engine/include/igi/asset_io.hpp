#pragma once

#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace igi::assets {

using FileBytes = std::vector<std::uint8_t>;

[[nodiscard]] std::string normalize_name(std::string_view name);
[[nodiscard]] std::filesystem::path resolve_path(const std::filesystem::path& root,
                                                std::string_view relative_name);
[[nodiscard]] FileBytes read_file(const std::filesystem::path& path);

class BinaryView final {
  public:
    explicit BinaryView(std::span<const std::uint8_t> bytes) : bytes_(bytes) {}

    [[nodiscard]] std::size_t size() const noexcept { return bytes_.size(); }
    [[nodiscard]] std::uint8_t byte(std::size_t offset) const;
    [[nodiscard]] std::uint16_t unsigned_short(std::size_t offset) const;
    [[nodiscard]] std::uint32_t unsigned_integer(std::size_t offset) const;
    [[nodiscard]] float real(std::size_t offset) const;
    [[nodiscard]] std::string text(std::size_t offset, std::size_t length) const;
    [[nodiscard]] BinaryView slice(std::size_t offset, std::size_t length) const;
    [[nodiscard]] std::span<const std::uint8_t> bytes() const noexcept { return bytes_; }
    void require_range(std::size_t offset, std::size_t length) const;

  private:
    std::span<const std::uint8_t> bytes_;
};

} // namespace igi::assets
