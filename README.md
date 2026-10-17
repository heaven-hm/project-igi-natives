# Project I.G.I. Native Engine Research

This repository contains reverse-engineering records and C exports derived from the retail `igi.exe` binary. The target is the original x86 game engine. The native export work is based on IGI1 binary evidence; C# OpenIGI is not its implementation source.

## What is in this repository

- [`assets/BinaryNinja/natives/`](assets/BinaryNinja/natives/) contains per-address C exports, headers, and evidence notes for analyzed retail routines.
- [`assets/BinaryNinja/IGINatives_VERIFIED.json`](assets/BinaryNinja/IGINatives_VERIFIED.json) is the address/name/analysis catalog. Each native source comment records the retail name, virtual address, structural CFG result, evidence report, and whether runtime behavior has been captured.
- [`RE.md`](RE.md) defines the evidence and confidence policy. [`scripts/`](scripts/) contains catalog and source annotation utilities.
- [`engine/`](engine/README.md) is a separate experimental C++ gameplay prototype. Its gameplay behavior is not established as a 1:1 translation of the retail engine, and it must not be presented as the native export implementation.
- [`IGI_Natives/`](IGI_Natives/) contains the legacy Windows x86 DLL research project.

## Reading verification comments

Native comments use this form:

```cpp
// Game_LoadParams - 0x00424324 - static CFG parity 100.0% (PASS; see evidence report); runtime behavior not verified.
```

The percentage is the catalog's control-flow-graph score. It describes structural agreement only; it is not a claim that the native's gameplay behavior is 100% accurate. Runtime verification is reported separately and stays unverified until there is a controlled retail capture. Candidate-only entries do not receive an invented percentage.

The source exports are decompiler-derived representations of the executable, not recovered original vendor source. Names, prototypes, calling conventions, layouts, and helper identities remain provisional wherever the evidence says they are unresolved. Inspect the linked report before relying on any signature or inferred field name.

## Project-side logging

Retail-native behavior and project diagnostics are kept separate. Do not insert new log calls into a recovered native body and describe them as original IGI behavior. C++ integration code can use `igi::diagnostics::log_retail_native` to add a timestamped record containing the native name, retail virtual address, severity, and message. The existing logger writes to stderr and, when configured, the application log file. For example:

```cpp
igi::diagnostics::log_retail_native(
    igi::diagnostics::Severity::information,
    "FallLanding",
    0x00408460,
    "entered with landing flag set");
```

Use `--verbose` for debug-level diagnostics. Log entry, exit, important state transitions, and failures at the C++ integration boundary; do not emit per-frame noise unless verbose logging is enabled.

## Building the experimental gameplay prototype

The prototype build requires CMake 3.20 or later and SDL2 development files. Original game assets are external and must not be committed or redistributed.

```sh
cmake -S . -B build/mvp -DCMAKE_BUILD_TYPE=Release \
  -DIGI_GAME_PATH=/path/to/IGI
cmake --build build/mvp --parallel 4
ctest --test-dir build/mvp -LE retail --output-on-failure
```

These checks validate the prototype and its local tests; they do not establish retail parity. Retail comparison requires controlled captures from the same `igi.exe` build and matching gameplay scenarios. Keep runtime evidence, binary hashes, tool versions, and known environment differences with each comparison.

## Binary identity

The currently cited retail target is PE32 x86 `igi.exe`, image base `0x00400000`, SHA-256:

```text
dea34892d417715873ea61d7b2ba5556655f1ad65385104348146f9679915a01
```

Re-hash the local executable before applying addresses or evidence from this build to a different copy.
