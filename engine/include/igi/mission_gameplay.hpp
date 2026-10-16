#pragma once

#include "igi/mission_assets.hpp"
#include "igi/qvm_initializer.hpp"

namespace igi::assets {

[[nodiscard]] std::vector<bool> gameplay_task_mask(const std::vector<ScriptCall>& calls);

void load_mission_gameplay(gameplay::MissionScene& scene, MissionAssets& library,
                          const std::filesystem::path& mission_directory,
                          const std::array<double, 3>& origin,
                          const std::vector<ScriptCall>& calls);

}
