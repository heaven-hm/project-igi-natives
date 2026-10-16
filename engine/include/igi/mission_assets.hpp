#pragma once

#include "igi/mission_scene.hpp"

#include <unordered_map>

struct TEXImage;

namespace igi::assets {

[[nodiscard]] gameplay::SceneTexture decode_original_texture(const TEXImage& image);

class MissionAssets final {
  public:
    MissionAssets(const std::filesystem::path& game_directory,
                  const std::filesystem::path& mission_directory,
                  const std::filesystem::path& cache_directory);
    [[nodiscard]] std::shared_ptr<gameplay::SceneMesh> model(const std::string& name);
    [[nodiscard]] std::vector<std::uint32_t> terrain_textures(const std::filesystem::path& path);
    [[nodiscard]] std::vector<gameplay::SceneTexture> take_textures() { return std::move(textures_); }

  private:
    void load_archive(const std::filesystem::path& path, const std::filesystem::path& cache_directory);
    void load_mapping(const std::filesystem::path& path);
    [[nodiscard]] std::uint32_t texture(const std::string& name);
    std::vector<gameplay::SceneTexture> textures_;
    std::unordered_map<std::string, std::filesystem::path> files_;
    std::unordered_map<std::string, std::vector<std::string>> material_names_;
    std::unordered_map<std::string, std::uint32_t> texture_indices_;
    std::unordered_map<std::string, std::shared_ptr<gameplay::SceneMesh>> meshes_;
};

} // namespace igi::assets
