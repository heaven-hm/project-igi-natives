# Gameplay engine work

`igi_gameplay` is the C++20 gameplay layer. Its first component ports the retail
human locomotion transition table, including the tested order of branches from
the 49 per-tick player functions. The source of the table is the binary-derived
`HumanLocomotionGraph` in the sibling OpenIGI project, cross-checked against its
player reverse-engineering notes.

This is deliberately only the transition graph. It does not yet implement the
state predicates, animation/root motion, collision response, weapon state,
audio, renderer, or an app bundle. Those require matching native body semantics
and runtime traces from the retail executable; do not infer them from a graph.

Configure from the repository root with `cmake -S . -B build` after the root
CMake integration is added. This component can also be added to a parent CMake
project with `add_subdirectory(engine)`.
