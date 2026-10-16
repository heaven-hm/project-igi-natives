#pragma once

#include "igi/qvm_initializer.hpp"

#include <unordered_map>

namespace igi::gameplay {

struct InputBinding final { std::string device; std::string control; };

struct InputConfiguration final {
    std::string profile_name;
    std::unordered_map<std::string, InputBinding> bindings;
    float mouse_sensitivity = 0.4f;
    bool invert_mouse{};
    std::string difficulty = "GD_2";
};

[[nodiscard]] InputConfiguration parse_input_configuration(const std::vector<assets::ScriptCall>& calls,
                                                          std::string_view requested_profile = {});
[[nodiscard]] InputConfiguration load_input_configuration(const std::filesystem::path& game_directory,
                                                         std::string_view requested_profile = {});

}
