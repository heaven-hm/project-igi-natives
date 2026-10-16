# Language policy for the native IGI port

## Selected boundaries

- **C++20:** New engine systems and gameplay modules, including the game loop, movement orchestration, renderer/platform interfaces, and authored physics components. Use explicit types, RAII for ownership, and clear subsystem interfaces.
- **C11:** Direct translations of recovered retail routines when keeping the original data operations and control flow visible helps parity review. Keep those bodies small and call them through stable C interfaces.
- **Rust:** Use for isolated tools or data-processing utilities when its ownership guarantees materially reduce parser or tooling risk. Do not introduce a Rust boundary into per-frame gameplay code without a measured need and a well-defined `repr(C)` interface.

## Fidelity rule

Language choice does not establish parity. Preserve the retail routine's coordinate units, precision, field offsets, branch conditions, and call order, then validate each port against retail captures. C++ and Rust have comparable native performance for this workload; the main choice is interface and verification cost. C++20 is the default for new runtime systems because it fits the existing native code and allows a direct, low-friction ABI with recovered C routines.

## Current status

The current `cproj` contains C11 recovered-native translations and C shims. It is not yet a complete game engine. New engine modules should use C++20, with narrow C-compatible boundaries where they call recovered C bodies. The `Human_Separation` routine remains C11 and has only controlled component-level verification; its real engine candidate provider is not connected.
