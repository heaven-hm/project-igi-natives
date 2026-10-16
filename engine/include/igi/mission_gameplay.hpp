#pragma once

#include "igi/mission_assets.hpp"
#include "igi/qvm_initializer.hpp"

namespace igi::assets {

void load_mission_gameplay(gameplay::MissionScene& scene, MissionAssets& library,
                          const std::filesystem::path& mission_directory,
                          const std::array<double, 3>& origin,
                          const std::vector<ScriptCall>& calls);

}
