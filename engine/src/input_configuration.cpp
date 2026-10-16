#include "igi/input_configuration.hpp"

#include "igi/diagnostics.hpp"

#include <cmath>
#include <stdexcept>

namespace igi::gameplay {

InputConfiguration parse_input_configuration(const std::vector<assets::ScriptCall>& calls,
                                             std::string_view requested_profile) {
    std::vector<InputConfiguration> profiles;
    std::size_t active_profile = 1;
    for (const auto& call : calls) {
        if (call.function == "GOStart" && !call.arguments.empty()) {
            const auto identifier = call.arguments[0].number;
            if (!std::isfinite(identifier) || identifier < 1 || identifier > 100) {
                throw std::runtime_error("Config has an invalid active player profile");
            }
            active_profile = static_cast<std::size_t>(identifier);
        }
        if (call.function == "GOPlayer" && !call.arguments.empty()) {
            profiles.push_back({call.arguments[0].text, {}});
        }
        if (profiles.empty()) { continue; }
        auto& profile = profiles.back();
        if (call.function == "GOInRemap" && call.arguments.size() == 3) {
            profile.bindings[call.arguments[0].text] = {call.arguments[1].text, call.arguments[2].text};
        } else if (call.function == "GOInMouInv" && call.arguments.size() == 1) {
            profile.invert_mouse = call.arguments[0].number != 0;
        } else if (call.function == "GOInMouSens" && call.arguments.size() == 1) {
            const float sensitivity = static_cast<float>(call.arguments[0].number);
            if (!std::isfinite(sensitivity) || sensitivity < 0 || sensitivity > 10) {
                throw std::runtime_error("Config mouse sensitivity is invalid");
            }
            profile.mouse_sensitivity = sensitivity;
        }
    }
    if (!requested_profile.empty()) {
        for (const auto& profile : profiles) { if (profile.profile_name == requested_profile) { return profile; } }
        throw std::runtime_error("Requested config profile was not found: " + std::string(requested_profile));
    }
    if (active_profile == 0 || active_profile > profiles.size()) { throw std::runtime_error("Config has no matching active player profile"); }
    return profiles[active_profile - 1];
}

InputConfiguration load_input_configuration(const std::filesystem::path& game_directory,
                                            std::string_view requested_profile) {
    const auto bytes = assets::read_file(assets::resolve_path(game_directory, "config.qvm"));
    const assets::QvmInitializer script{assets::BinaryView(bytes)};
    auto configuration = parse_input_configuration(script.calls(), requested_profile);
    diagnostics::log(diagnostics::Severity::information, "input", "Loaded config.qvm profile: " +
        configuration.profile_name + "; bindings=" + std::to_string(configuration.bindings.size()));
    for (const auto& action : {"Fire", "Reload", "Jump", "Crouch", "NextWeapon", "PrevWeapon", "Activate"}) {
        const auto binding = configuration.bindings.find(action);
        if (binding != configuration.bindings.end()) {
            diagnostics::log(diagnostics::Severity::information, "input", std::string(action) + " = " + binding->second.control);
        }
    }
    return configuration;
}

}
