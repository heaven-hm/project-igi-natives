# Required retail fidelity

The acceptance target is the core behavior of `/Users/haseeb-mir/Downloads/IGI/igi.exe`, SHA-256 `dea34892d417715873ea61d7b2ba5556655f1ad65385104348146f9679915a01`.

The operating-system interface and graphics backend may differ. Core movement, collision, weapons, AI, animation, gameplay script execution, file interpretation, update order, and externally observable gameplay state must be established against the original executable. Executable machine-code bytes differ between x86 Windows and arm64 macOS; bit-exact verification concerns corresponding core data and results.

## Active gameplay scope

The current milestone excludes sound, cutscenes, main menus, and exact text rendering. These exclusions do not relax movement, building collision, weapons, enemies, animation, navigation, gameplay scripts, models, textures, or gameplay rendering requirements. Deferred systems remain part of the eventual full-game goal, but are not required capture scenarios for this milestone. See [MVP_PLAN.md](MVP_PLAN.md).

## Required evidence

1. Locate the original routine, its callers, constants, state fields, and actual function boundary using REA from `/Users/haseeb-mir/Documents/Code/rea` and an independent radare2 inspection.
2. Preserve original binary identity, provider identity, evidence IDs, tool limitations, and relevant instruction/control-flow evidence.
3. Capture original runtime and memory observations through supported CrossOver/IGIProbe or re-agent workflows. Capture the corresponding port state for the same input, mission, initial state, seed, and tick boundaries.
4. Align coordinate systems and state representations before comparison. Preserve original arithmetic widths, rounding, operation order, and update order. x87-versus-arm64 differences require explicit investigation.
5. Compare corresponding state without silently adding tolerances. A tolerance-based result must be labeled as such and cannot satisfy the bit-exact gate.
6. Add a failing regression for each observed divergence, implement the correction, then repeat unit, integration, runtime, memory/sanitizer, and end-to-end checks.
7. Keep unverified components experimental. Original assets, copied implementation code, screenshots, successful compilation, and passing prototype tests do not independently establish retail equivalence.

## Current status

The playable application is experimental. No complete retail-versus-port runtime corpus has been captured. Gameplay bit-exact equivalence is **NOT VERIFIED**. In particular, provisional AI combat/navigation policy, collision, animation selection/blending, general QVM execution, and graphics/lighting do not currently meet this requirement.

The mandatory `retail_engine_bit_exact` CTest gate must fail when its required original capture evidence is absent. `ctest -LE retail` runs functional regressions only; it cannot authorize a stable retail-equivalent release. The stable main/develop branch policies are unchanged.

The gate currently requires 17 gameplay scenarios: ground movement, jump, wall collision, building entry, crouching, firing, reloading, weapon switching, patrols, graph navigation, combat, skeletal poses, hit/death animation, recursive attachments, gameplay scripts, models/textures, and rendering. Passing these recorded scenarios establishes their measured coverage, not universal full-game equivalence. Sound and cutscene captures are deliberately deferred.
