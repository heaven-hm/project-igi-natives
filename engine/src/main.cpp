#include "igi/asset_io.hpp"
#include "igi/diagnostics.hpp"
#include "igi/game_simulation.hpp"
#include "igi/input_controller.hpp"
#include "igi/scene_renderer.hpp"

#include <SDL.h>

#include <algorithm>
#include <charconv>
#include <chrono>
#include <cstdlib>
#include <exception>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <memory>
#include <optional>
#include <sstream>
#include <stdexcept>
#include <string>
#include <string_view>

namespace {

using igi::diagnostics::Severity;
using igi::diagnostics::log;
using igi::gameplay::PlayerInput;
using Clock = std::chrono::steady_clock;

struct RuntimeOptions final {
    bool headless{};
    bool demonstration{};
    bool verbose{};
    bool benchmark{};
    bool fullscreen{};
    int width = 1280;
    int height = 960;
    int mission = 1;
    igi::gameplay::TerrainDetail terrain_detail = igi::gameplay::TerrainDetail::high;
    std::optional<std::uint64_t> frames;
    std::filesystem::path game_directory;
    std::filesystem::path cache_directory;
    std::filesystem::path screenshot;
    std::filesystem::path replay;
    std::filesystem::path trace;
    std::string profile;
};

template<class Integer>
Integer parse_integer(std::string_view text, Integer minimum, Integer maximum) {
    Integer value{};
    const auto result = std::from_chars(text.data(), text.data() + text.size(), value);
    if (result.ec != std::errc{} || result.ptr != text.data() + text.size() || value < minimum || value > maximum) {
        throw std::runtime_error("Invalid integer argument: " + std::string(text));
    }
    return value;
}

RuntimeOptions parse_arguments(int argument_count, char** arguments) {
    RuntimeOptions options;
    for (int argument_index = 1; argument_index < argument_count; ++argument_index) {
        const std::string_view argument(arguments[argument_index]);
        const auto next_argument = [&]() -> std::string_view {
            if (++argument_index >= argument_count) { throw std::runtime_error("Missing value for " + std::string(argument)); }
            return arguments[argument_index];
        };
        if (argument == "window" || argument == "--window") { options.fullscreen = false; }
        else if (argument == "fullscreen" || argument == "--fullscreen") { options.fullscreen = true; }
        else if (argument.starts_with("level")) { options.mission = parse_integer(argument.substr(5), 1, 14); }
        else if (argument == "--headless") { options.headless = true; }
        else if (argument == "--demo") { options.demonstration = true; }
        else if (argument == "--verbose") { options.verbose = true; }
        else if (argument == "--benchmark") { options.benchmark = true; }
        else if (argument == "--game") { options.game_directory = next_argument(); }
        else if (argument == "--cache") { options.cache_directory = next_argument(); }
        else if (argument == "--screenshot") { options.screenshot = next_argument(); }
        else if (argument == "--replay") { options.replay = next_argument(); }
        else if (argument == "--trace") { options.trace = next_argument(); }
        else if (argument == "--profile") { options.profile = next_argument(); }
        else if (argument == "--mission") { options.mission = parse_integer(next_argument(), 1, 14); }
        else if (argument == "--graphics") {
            const auto setting = next_argument();
            if (setting == "high") { options.terrain_detail = igi::gameplay::TerrainDetail::high; }
            else if (setting == "low") { options.terrain_detail = igi::gameplay::TerrainDetail::low; }
            else { throw std::runtime_error("Graphics setting must be high or low"); }
        }
        else if (argument == "--width") { options.width = parse_integer(next_argument(), 160, 3840); }
        else if (argument == "--height") { options.height = parse_integer(next_argument(), 120, 2160); }
        else if (argument == "--frames") { options.frames = parse_integer<std::uint64_t>(next_argument(), 1, 10000000); }
        else if (argument == "--help") {
            std::cout << "igi [window|fullscreen] [level1..level14] [--game directory]\n"
                         "    [--mission 1] [--headless --frames count]\n"
                         "    [--demo] [--replay inputs.csv] [--trace state.csv] [--screenshot frame.bmp]\n"
                         "    [--cache directory] [--width 1280 --height 960] [--verbose] [--benchmark]\n"
                         "    [--graphics high|low]\n"
                         "    [--profile name] (controls come from original config.qvm)\n"
                         "Movement, jump, crouch, fire, reload and weapon bindings use config.qvm.\n"
                         "Number-key categories use humanplayer.qvm; mouse wheel cycles weapons.\n"
                         "Enter restart; F11 fullscreen; Escape quit.\n";
            std::exit(0);
        } else { throw std::runtime_error("Unknown argument: " + std::string(argument)); }
    }
    if (options.headless && !options.frames) { options.frames = 120; }
    return options;
}

void resolve_runtime_paths(RuntimeOptions& options, const char* executable) {
    if (options.game_directory.empty()) {
        if (const auto* configured_game = std::getenv("IGI_GAME_PATH")) { options.game_directory = configured_game; }
    }
    if (options.game_directory.empty()) {
        const auto binary_directory = std::filesystem::absolute(executable).parent_path();
        std::vector<std::filesystem::path> candidates{std::filesystem::current_path(),
            binary_directory, binary_directory.parent_path().parent_path().parent_path()};
        if (const auto* home_directory = std::getenv("HOME")) {
            candidates.emplace_back(std::filesystem::path(home_directory) / "Downloads/IGI");
        }
        for (const auto& candidate : candidates) {
            if (std::filesystem::is_directory(candidate / "MISSIONS") || std::filesystem::is_directory(candidate / "missions")) {
                options.game_directory = candidate;
                break;
            }
        }
    }
    if (options.game_directory.empty()) { throw std::runtime_error("Original game assets were not found; use --game or IGI_GAME_PATH"); }
    if (options.cache_directory.empty()) {
        char* preference_path = SDL_GetPrefPath("HeavenHM", "ProjectIGI");
        if (preference_path == nullptr) { throw std::runtime_error("Cannot determine application cache directory"); }
        options.cache_directory = preference_path;
        SDL_free(preference_path);
    }
    std::filesystem::create_directories(options.cache_directory);
    igi::diagnostics::configure(options.verbose, options.cache_directory / "igi.log");
}

std::vector<PlayerInput> load_replay(const std::filesystem::path& path) {
    if (path.empty()) { return {}; }
    std::ifstream file(path);
    if (!file) { throw std::runtime_error("Cannot open input replay: " + path.string()); }
    std::vector<PlayerInput> inputs;
    std::string line;
    while (std::getline(file, line)) {
        if (line.empty() || line.starts_with('#')) { continue; }
        std::replace(line.begin(), line.end(), ',', ' ');
        std::istringstream row(line);
        PlayerInput input;
        if (!(row >> input.forward >> input.sideways >> input.heading_change >> input.pitch_change >>
              input.walking >> input.crouching >> input.jumping >> input.firing >> input.reloading >> input.aiming)) {
            throw std::runtime_error("Invalid replay row " + std::to_string(inputs.size() + 1));
        }
        std::string trailing;
        row >> std::ws;
        if (!row.eof()) {
            if (!(row >> input.weapon_slot >> input.weapon_cycle >> input.interacting)) {
                throw std::runtime_error("Invalid optional inventory columns in replay");
            }
        }
        if (row >> trailing || inputs.size() >= 1000000) { throw std::runtime_error("Replay row or length exceeds the supported format"); }
        inputs.push_back(input);
    }
    return inputs;
}

PlayerInput demonstration_input(std::uint64_t tick) {
    PlayerInput input;
    input.forward = tick < 50 ? 1.0f : 0.0f;
    input.walking = tick < 25;
    input.jumping = tick == 35;
    input.crouching = tick >= 70 && tick < 95;
    input.firing = tick >= 110 && tick < 200;
    input.reloading = tick == 205;
    input.heading_change = tick >= 260 && tick < 320 ? -0.015f : 0.0f;
    return input;
}

void save_frame(const igi::gameplay::SceneRenderer& renderer, const std::filesystem::path& path) {
    std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> surface(
        SDL_CreateRGBSurfaceWithFormatFrom(const_cast<std::uint32_t*>(renderer.pixels().data()),
            renderer.width(), renderer.height(), 32, renderer.width() * 4, SDL_PIXELFORMAT_ARGB8888), SDL_FreeSurface);
    if (!surface || SDL_SaveBMP(surface.get(), path.string().c_str()) != 0) {
        throw std::runtime_error("Cannot save frame " + path.string() + ": " + SDL_GetError());
    }
    log(Severity::information, "capture", "Saved rendered frame: " + path.string());
}

class SdlRuntime final {
  public:
    explicit SdlRuntime(bool headless) {
        SDL_SetMainReady();
        if (SDL_Init(headless ? SDL_INIT_TIMER : SDL_INIT_VIDEO | SDL_INIT_TIMER) != 0) {
            throw std::runtime_error("SDL initialization failed: " + std::string(SDL_GetError()));
        }
    }
    ~SdlRuntime() { SDL_Quit(); }
    SdlRuntime(const SdlRuntime&) = delete;
    SdlRuntime& operator=(const SdlRuntime&) = delete;
};

int run(RuntimeOptions options, const char* executable) {
    resolve_runtime_paths(options, executable);
    const SdlRuntime sdl(options.headless);
    log(Severity::information, "application", "Loading original mission " + std::to_string(options.mission) +
        " from " + options.game_directory.string());
    const auto scene = igi::gameplay::load_mission(options.game_directory, options.cache_directory / "assets",
                                                options.mission, options.terrain_detail);
    igi::gameplay::GameSimulation simulation(scene);
    igi::gameplay::InputController controls(igi::gameplay::load_input_configuration(options.game_directory, options.profile));
    igi::gameplay::SceneRenderer frame(options.width, options.height);
    const auto replay = load_replay(options.replay);
    std::ofstream trace;
    if (!options.trace.empty()) {
        trace.open(options.trace);
        if (!trace) { throw std::runtime_error("Cannot open state trace: " + options.trace.string()); }
        trace << "tick,x,y,z,grounded,locomotion,health,magazine,reserve,shots,hits,kills\n";
        trace << std::setprecision(9);
    }
    std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)> window(nullptr, SDL_DestroyWindow);
    std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)> display(nullptr, SDL_DestroyRenderer);
    std::unique_ptr<SDL_Texture, decltype(&SDL_DestroyTexture)> texture(nullptr, SDL_DestroyTexture);
    if (!options.headless) {
        const auto title = "Project I.G.I. - Level " + std::to_string(options.mission);
        window.reset(SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
            options.width, options.height, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE));
        if (!window) { throw std::runtime_error("Cannot create game window: " + std::string(SDL_GetError())); }
        if (options.fullscreen && SDL_SetWindowFullscreen(window.get(), SDL_WINDOW_FULLSCREEN_DESKTOP) != 0) {
            throw std::runtime_error("Cannot enter fullscreen: " + std::string(SDL_GetError()));
        }
        display.reset(SDL_CreateRenderer(window.get(), -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC));
        if (!display) { display.reset(SDL_CreateRenderer(window.get(), -1, SDL_RENDERER_SOFTWARE)); }
        if (!display) { throw std::runtime_error("Cannot create display renderer: " + std::string(SDL_GetError())); }
        texture.reset(SDL_CreateTexture(display.get(), SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, options.width, options.height));
        if (!texture || SDL_RenderSetLogicalSize(display.get(), options.width, options.height) != 0) {
            throw std::runtime_error("Cannot configure display texture: " + std::string(SDL_GetError()));
        }
        if (SDL_SetRelativeMouseMode(SDL_TRUE) != 0) { log(Severity::warning, "input", SDL_GetError()); }
    }
    log(Severity::information, "application", "Mission ready. Controls loaded from original config.qvm; Enter restarts, F11 toggles fullscreen, Escape quits");
    bool running = true;
    std::uint64_t frame_count = 0;
    auto previous_time = Clock::now();
    const auto start_time = previous_time;
    double accumulator = 0;
    float heading_change = 0;
    float pitch_change = 0;
    int requested_weapon_slot = -1;
    int requested_weapon_cycle = 0;
    bool paused = false;
    while (running && (!options.frames || frame_count < *options.frames)) {
        SDL_Event event{};
        while (SDL_PollEvent(&event) != 0) {
            if (event.type == SDL_QUIT) { running = false; }
            if (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_FOCUS_LOST) {
                paused = true;
                heading_change = 0;
                pitch_change = 0;
                requested_weapon_slot = -1;
                requested_weapon_cycle = 0;
                controls.reset();
                if (SDL_SetRelativeMouseMode(SDL_FALSE) != 0) { log(Severity::warning, "input", SDL_GetError()); }
                log(Severity::information, "application", "Paused while game window is inactive");
            }
            if (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_FOCUS_GAINED) {
                paused = false;
                previous_time = Clock::now();
                if (SDL_SetRelativeMouseMode(SDL_TRUE) != 0) { log(Severity::warning, "input", SDL_GetError()); }
            }
            if (event.type == SDL_MOUSEWHEEL) {
                const int wheel = event.wheel.direction == SDL_MOUSEWHEEL_FLIPPED ? -event.wheel.y : event.wheel.y;
                requested_weapon_cycle = wheel > 0 ? -1 : wheel < 0 ? 1 : 0;
            }
            if (event.type == SDL_KEYDOWN && event.key.repeat == 0) {
                if (event.key.keysym.sym == SDLK_ESCAPE) { running = false; }
                if (event.key.keysym.sym == SDLK_RETURN) { simulation.restart(); }
                if (event.key.keysym.sym == SDLK_F11 && window) {
                    const bool fullscreen = (SDL_GetWindowFlags(window.get()) & SDL_WINDOW_FULLSCREEN_DESKTOP) != 0;
                    if (SDL_SetWindowFullscreen(window.get(), fullscreen ? 0 : SDL_WINDOW_FULLSCREEN_DESKTOP) != 0) {
                        log(Severity::warning, "display", SDL_GetError());
                    }
                }
            }
            if (event.type == SDL_MOUSEMOTION) {
                const float sensitivity = controls.mouse_sensitivity() * 0.00625f;
                heading_change -= static_cast<float>(event.motion.xrel) * sensitivity;
                pitch_change += static_cast<float>(event.motion.yrel) * sensitivity * (controls.invert_mouse() ? 1 : -1);
            }
        }
        const auto now = Clock::now();
        accumulator += options.headless ? 1.0 / 30.0 :
            std::min(std::chrono::duration<double>(now - previous_time).count(), 0.25);
        previous_time = now;
        if (paused && !options.headless) {
            accumulator = 0;
            SDL_Delay(25);
            continue;
        }
        while (accumulator + 0.00000001 >= 1.0 / 30.0) {
            PlayerInput input;
            if (!replay.empty()) {
                if (simulation.tick_count() < replay.size()) { input = replay[simulation.tick_count()]; }
            } else if (options.demonstration) {
                input = demonstration_input(simulation.tick_count());
            } else if (!options.headless) {
                int keyboard_size = 0;
                const auto* keys = SDL_GetKeyboardState(&keyboard_size);
                const auto buttons = SDL_GetMouseState(nullptr, nullptr);
                input = controls.sample({keys, static_cast<std::size_t>(keyboard_size)}, buttons);
                input.weapon_slot = requested_weapon_slot;
                if (requested_weapon_cycle != 0) { input.weapon_cycle = requested_weapon_cycle; }
                input.heading_change = heading_change;
                input.pitch_change = pitch_change;
            }
            heading_change = 0;
            pitch_change = 0;
            requested_weapon_slot = -1;
            requested_weapon_cycle = 0;
            simulation.tick(input);
            if (trace.is_open()) {
                const auto position = simulation.player_position();
                const auto& weapon = simulation.weapon();
                trace << simulation.tick_count() << ',' << position.x << ',' << position.y << ',' << position.z << ','
                      << simulation.grounded() << ',' << simulation.locomotion_state() << ',' << simulation.health() << ','
                      << weapon.magazine << ',' << weapon.reserve << ',' << weapon.shots_fired << ',' << weapon.hits << ',' << weapon.kills << '\n';
                if (!trace) { throw std::runtime_error("Cannot write gameplay trace"); }
            }
            accumulator -= 1.0 / 30.0;
        }
        ++frame_count;
        const bool final_frame = options.frames && frame_count == *options.frames;
        if (!options.headless || options.benchmark || (final_frame && !options.screenshot.empty())) {
            frame.render(scene, simulation);
            if (display) {
                if (SDL_UpdateTexture(texture.get(), nullptr, frame.pixels().data(), options.width * 4) != 0 ||
                    SDL_RenderClear(display.get()) != 0 || SDL_RenderCopy(display.get(), texture.get(), nullptr, nullptr) != 0) {
                    throw std::runtime_error("Cannot present game frame: " + std::string(SDL_GetError()));
                }
                SDL_RenderPresent(display.get());
            }
        }
    }
    if (!options.screenshot.empty()) {
        frame.render(scene, simulation);
        save_frame(frame, options.screenshot);
    }
    if (trace.is_open()) {
        trace.flush();
        if (!trace) { throw std::runtime_error("Cannot finish writing gameplay trace"); }
    }
    const double elapsed = std::chrono::duration<double>(Clock::now() - start_time).count();
    log(Severity::information, "application", "Stopped cleanly; ticks=" + std::to_string(simulation.tick_count()) +
        ", frames=" + std::to_string(frame_count) + ", elapsed=" + std::to_string(elapsed) + "s, shots=" +
        std::to_string(simulation.weapon().shots_fired) + ", hits=" + std::to_string(simulation.weapon().hits));
    return 0;
}

} // namespace

int main(int argument_count, char** arguments) {
    bool interactive = false;
    try {
        const auto options = parse_arguments(argument_count, arguments);
        interactive = !options.headless;
        return run(options, arguments[0]);
    } catch (const std::exception& exception) {
        log(Severity::error, "application", exception.what());
        if (interactive) { SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Project I.G.I.", exception.what(), nullptr); }
        return 1;
    } catch (...) {
        log(Severity::error, "application", "Unexpected non-standard exception at application boundary");
        return 1;
    }
}
