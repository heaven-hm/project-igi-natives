# Native gameplay engine

Experimental C++20 gameplay using original IGI assets. Player movement, collision, weapons, graph-based patrols, skeletal body/hand animation, and recursive MEF attachments run in the native game loop. Exact retail behavior remains unverified. [Plan](MVP_PLAN.md), [status](MVP_STATUS.md), [required evidence](FIDELITY_REQUIREMENTS.md), and [agent coordination](AGENT_COORDINATION.md).

macOS arm64 is tested. Runtime code uses C/C++ and SDL's C interface. Windows/Linux remain intended targets and require separate verification. Original proprietary assets stay external. Sound, menus, exact text rendering, and cutscenes are deferred.

## Launch on macOS

From Downloads:

```sh
open -n IGI/igi.app --args window level2 --graphics high
```

All game arguments follow `--args`; otherwise macOS `open` interprets them. `--gfx high` is also accepted by current source builds. Replace `level2` with `level1` through `level14`; level availability is not a claim that every mission works. Most integration coverage is currently Levels 1 and 2. Use `fullscreen` instead of `window` if desired; native fullscreen is independent of CrossOver's DX7 fullscreen issues.

A newly signed local bundle may request macOS Downloads access again. A candidate LaunchServices test was observed waiting on that request; the direct-executable GUI test succeeded. An app bundle is a directory. To launch directly:

```sh
IGI/igi.app/Contents/MacOS/igi window level2 --graphics high
```

Default viewport: 1280 by 960. `--width` and `--height` select another size. `high` currently selects denser original terrain; it does not implement missing retail lightmaps, lighting, or the complete original graphics quality system. Both modes use the original models and textures. Startup logs state the selected detail and terrain triangle count.

## Controls

Controls come from the selected profile in the original `config.qvm`; `--profile name` overrides the active profile. The current Heaven profile contains:

| Input | Action |
| --- | --- |
| W/A/S/D, mouse | Move and look |
| E | Jump |
| C | Crouch |
| Shift | Toggle walking/running |
| Left mouse | Fire |
| F | Reload |
| Right mouse / O | Next / previous weapon |
| 1 through 9 | Original weapon categories |
| Q | Activate; prototype currently supports nearby gun pickups |
| Backspace | Alternate-fire binding; currently a provisional aim action |
| Enter / F11 / Escape | Restart / fullscreen / quit |

Weapon cycle order and category subcycling still need retail corrections. Explosives, binoculars, and several other original actions are unfinished. Dynamic doors and full runtime QVM interaction are unfinished; non-solid building portal faces no longer act as walls.

## Build and checks

Use a stable C++20 compiler, CMake 3.20 or later, and SDL2 development files. Converter parsers and GLM headers are included.

```sh
cmake -S . -B build/mvp -DCMAKE_BUILD_TYPE=Release \
  -DIGI_GAME_PATH=/Users/haseeb-mir/Downloads/IGI
cmake --build build/mvp --parallel 4
ctest --test-dir build/mvp -LE retail --output-on-failure
cmake --install build/mvp --prefix /tmp/igi-stage
codesign --verify --deep --strict /tmp/igi-stage/igi.app
```

These are functional checks. The separate mandatory retail gate is:

```sh
ctest --test-dir build/mvp -L retail --output-on-failure
```

It currently fails because genuine original-versus-port capture pairs are absent. A full CTest run therefore does not pass. To supply reviewed captures, configure `IGI_RETAIL_PARITY_DIRECTORY` according to [FIDELITY_REQUIREMENTS.md](FIDELITY_REQUIREMENTS.md). Never replace missing retail captures with prototype output.

macOS install bundles native SDL dependencies and license notices, rewrites library paths, and signs locally. Assets are discovered beside the app, via `IGI_GAME_PATH`, or with `--game`. The game does not require the native catalog JSON, Windows, or CrossOver; those are research inputs. Optional recovered-C research targets use `-DIGI_BUILD_RECOVERED_NATIVE_LIBRARY=ON`.

Stage outside synced Documents folders to avoid Finder metadata in signed bundles. Preserve an existing app before replacement and copy the clean bundle with `ditto --norsrc --noextattr`. Two agents are active: do not replace the shared Downloads app from both projects; see the coordination record.

## Diagnostics and replay

```sh
/tmp/igi-stage/igi.app/Contents/MacOS/igi window level2 --graphics high \
  --headless --frames 300 --trace /tmp/igi-state.csv \
  --screenshot /tmp/igi-frame.bmp --cache /tmp/igi-cache
```

`--replay inputs.csv` consumes one row per simulation tick:

```text
forward,sideways,heading_change,pitch_change,walking,crouching,jumping,firing,reloading,aiming
```

Optional trailing columns: `weapon_slot,weapon_cycle,interacting`. Angles are radians, booleans are 0/1, and `#` starts a comment. `--demo` provides a synthetic scenario; it is not a recorded retail replay. `--benchmark` renders every headless frame. `--verbose` enables detailed parser/state logs, including enemy shot events.

Logs have UTC timestamps, severity, and subsystem. They go to stderr and `igi.log` in the chosen cache directory; SDL selects the default per-user application directory. Interactive fatal errors also show a dialog. Asset caches contain original resources and must not be distributed.
