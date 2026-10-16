#pragma once

#include "igi/game_simulation.hpp"

#include <span>

namespace igi::gameplay {

class SceneRenderer final {
  public:
    SceneRenderer(int width, int height);
    void render(const MissionScene& scene, const GameSimulation& simulation);
    [[nodiscard]] std::span<const std::uint32_t> pixels() const noexcept { return pixels_; }
    [[nodiscard]] int width() const noexcept { return width_; }
    [[nodiscard]] int height() const noexcept { return height_; }
    [[nodiscard]] std::uint64_t visible_triangles() const noexcept { return visible_triangles_; }

  private:
    void triangle(const SceneTriangle& triangle, const std::vector<SceneTexture>& textures,
                   Vector3 camera, Vector3 right, Vector3 up, Vector3 forward, float focal_length,
                   bool weapon = false);
    void rasterize(const SceneTriangle& triangle, const SceneTexture& texture, float focal_length,
                    float illumination, bool weapon);
    void rectangle(int left, int top, int width, int height, std::uint32_t color);
    void text(int left, int top, std::string_view message, std::uint32_t color, int scale = 1);
    int width_{};
    int height_{};
    std::vector<std::uint32_t> pixels_;
    std::vector<float> depth_;
    std::uint64_t visible_triangles_{};
};

} // namespace igi::gameplay
