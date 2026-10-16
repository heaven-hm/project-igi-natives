# Native gameplay MVP

The C++20 application loads the original Level 1 terrain, models, textures, player spawn, soldiers, player parameters, and MP5 parameters. Walking uses the original animation root tracks and the existing recovered movement integrator. Real triangle collision, jumping, crouching, projectiles, reloading, basic guard combat, death, and restart run in the same loop.

macOS arm64 is tested. SDL's C interface and portable C++ keep the core suitable for later Windows and Linux builds; those builds have not been verified. The runtime contains no C#, Swift, Objective-C++, or Python code.

This is a gameplay prototype. See [MVP_STATUS.md](MVP_STATUS.md) for measured results and the remaining differences from the original engine.

## Build and run

Install a stable C++20 compiler, CMake 3.20 or later, and SDL2 development files. The converter parsers and GLM headers are included in the repository.

```sh
IGI_GAME_PATH=/Users/haseeb-mir/Downloads/IGI cmake -S . -B build/mvp -DCMAKE_BUILD_TYPE=Release
cmake --build build/mvp --parallel 4
ctest --test-dir build/mvp --output-on-failure
cmake --install build/mvp --prefix dist
./dist/igi.app/Contents/MacOS/igi --game /Users/haseeb-mir/Downloads/IGI
```

On macOS the install step bundles SDL2 and SDL3 when SDL2-compat uses it, rewrites library paths, includes dependency notices, and signs `igi.app` locally. The original assets remain external. Put the app beside the game data, set `IGI_GAME_PATH`, or pass `--game`.

The default application does not need the native catalog JSON, the generated C translations, Windows, or CrossOver. To build the separate recovered-C research library and its probes as well, configure with `-DIGI_BUILD_RECOVERED_NATIVE_LIBRARY=ON`.

## Controls

| Input | Action |
| --- | --- |
| W, A, S, D | Move |
| Shift | Walk |
| Ctrl | Crouch |
| Space | Jump |
| Mouse | Look |
| Left mouse | Fire MP5 |
| Right mouse | Aim |
| R | Reload |
| Enter | Restart |
| F11 | Toggle fullscreen |
| Escape | Quit |

The default view is 800×600. Use `--width` and `--height` to change it. Simulation advances at 30 ticks per second independently of rendering.

## Replay and diagnostics

```sh
./dist/igi.app/Contents/MacOS/igi --headless --frames 360 --demo \
  --game /Users/haseeb-mir/Downloads/IGI --cache /tmp/igi-mvp \
  --trace /tmp/igi-state.csv --screenshot /tmp/igi-frame.bmp
```

`--replay inputs.csv` consumes one input row per simulation tick. Each row contains:

```text
forward,sideways,heading_change,pitch_change,walking,crouching,jumping,firing,reloading,aiming
```

Angles are radians and boolean values are `0` or `1`. Lines beginning with `#` are comments. `--demo` provides a fixed movement/jump/fire/reload sequence. `--benchmark` renders every headless frame. `--verbose` enables detailed state and parser diagnostics.

Logs include UTC timestamps, severity, and subsystem. They go to stderr and `igi.log` in the selected cache directory. Without `--cache`, SDL chooses the per-user application directory. Fatal interactive errors also show a dialog. Asset caches contain local copies of original resources and must not be distributed with the source or app.

The inspector tools are `igi_inspect_mission <OBJECTS.QVM>` and `igi_inspect_scene <game-directory> <cache-directory>`. With `IGI_GAME_PATH` set at configure time, CTest also enables the original-level integration probe. It loads the actual level, exercises movement, aims at an original soldier, fires, verifies damage and death, and renders the scene.
