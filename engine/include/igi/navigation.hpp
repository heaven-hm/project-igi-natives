#pragma once

#include "igi/mission_scene.hpp"

namespace igi::gameplay {

[[nodiscard]] std::vector<Vector3> find_navigation_path(const NavigationGraph& graph,
                                                      Vector3 start, Vector3 destination);

}
