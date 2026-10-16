# Working gameplay checkpoint — 2026-10-16

Source repository: `heaven-hm/project-igi-natives`.
Branch: `feature/native-gameplay-mvp`.
Built source revision: `3b64826`; subsequent checkpoint documentation does not change engine code.

The owner confirmed the game is working and requested publication of the current branch. This records a working experimental build, not a stable or exact retail-equivalent release.

## Delivered app

- Installed: `/Users/haseeb-mir/Downloads/IGI/igi.app`.
- Staged: `/tmp/igi-current-delivery/igi.app`.
- Executable SHA-256: `030e921990c3b65bf43822831fae290e5e10c4c17407ac54382a5bccd79d03c4`.
- Strict installed-bundle signature verification passed.
- Original game assets remain external; the source checkpoint includes no copied game installation or app bundle.

## Reproduce

```sh
cmake -S . -B /tmp/igi-native-mvp-release \
  -DCMAKE_BUILD_TYPE=Release \
  -DIGI_GAME_PATH=/Users/haseeb-mir/Downloads/IGI
cmake --build /tmp/igi-native-mvp-release --parallel 4
cmake --install /tmp/igi-native-mvp-release --prefix /tmp/igi-current-delivery
open -n /Users/haseeb-mir/Downloads/IGI/igi.app --args window level2 --graphics high
```

The install command stages the bundle; preserve the previous Downloads app before copying the staged bundle there. Builds require a stable C++20 compiler, CMake and SDL2 development files.

## Recorded verification

The preceding implementation cycle passed 16 functional checks, 10 AddressSanitizer/UndefinedBehaviorSanitizer probes, clean-source builds and focused static analysis. These tests were not rerun merely to publish this checkpoint. The latest requested rebuild and installed signature check succeeded.

The separate retail comparison gate remains failed because sufficient aligned original/native runtime captures are missing. See [MVP_STATUS.md](MVP_STATUS.md) and [VERIFICATION.md](VERIFICATION.md) for coverage and known differences.

Current playable systems include original scene assets, movement and jumping, several weapons, basic enemy combat/patrol navigation, skeletal hand/body animation and recursive attachments. AI, collision details, scripts, animation transitions and rendering still have fidelity gaps. Sound, cutscenes and menus remain deferred. Windows/Linux runtime support is not verified.
