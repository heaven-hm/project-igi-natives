# Human Ground Query (0x00462390)

## Evidence

- Binary: `/Users/haseeb-mir/Downloads/IGI/igi.exe`
- SHA-256: `dea34892d417715873ea61d7b2ba5556655f1ad65385104348146f9679915a01`
- Format and architecture: PE32 x86
- REA/Ghidra 12.1.2 procedure metadata: `ev_c8bb7d620c41532458d86c645de846592f00f7b1779a020ed2d2967a56d624ea`
- REA/Ghidra pseudo-code: `ev_e150e2f3352576dd8420c65337cdac008fe407cfb4525fa413b7c4c80583b1b5`
- REA/Ghidra assembly: `ev_0aaeec2468b52aeb42e4d865fa4a5841522f1046633d847871c69da5f156e219`
- Movement-integrator caller assembly: `ev_0b0e0f40060a604ba81113b04ed41f80a639df8766c02c8abbcf81633fae42c4`
- Second caller (`0x00463260`) assembly: `ev_2e497b1071abc3ac4d9365035aac3cdaa87fbf0f1f35a446ea30a600e5151b81`

These records are static analysis of the retail binary. No live memory or player movement sample was collected for this function.

## Observed interface

The function is `void` with six cdecl arguments:

```c
void Human_GroundQuery(void *human_object,
                       const double starting_position[3],
                       double destination_position[3],
                       float movement_delta[3],
                       uint32_t *movement_flags,
                       float ground_query_distance);
```

The movement integrator and the second caller each push six arguments. The function reads the sixth argument from `[EBP + 0x1c]` as a float and uses the fifth as the movement-flags address. The current shared declaration in `gi_stubs.h` matches this interface. The generated per-function declaration and C body in `00462390-Human_GroundQuery.h` and `.c` do not: they show five arguments, a pointer return, and incompatible pointer types. The generated body is not a buildable or trusted translation.

## Static behavior observations

At entry, the routine clears `human_object + 0x710` and sets `human_object + 0x714` to `26.0f`. It obtains a bone/world position through `0x0048A340`. The posture byte at `+0x33d` selects a vertical query extent of `1638.4` or `819.2` relative to the destination.

The pointer at `human_object + 0x800` selects two substantial code paths:

- With a null pointer, the routine queries level geometry through `0x004CBE40` using modes `2` and, when needed, `1`. `0x004CBE40` itself is not yet normalized into a portable collision provider.
- With a non-null pointer, the routine clears an internal record area, evaluates mission/script and camera state, and may update the target object's parent before joining the ground-candidate processing path.

When a candidate is available, the routine computes vertical snap distance and stores it at `+0x710`. The sixth argument is the maximum accepted distance. On acceptance, it sets flag `0x04`, adjusts `destination_position[2]`, updates the support object through `0x00463640`, and writes the resulting slope angles to `+0x718` and `+0x71c`. On rejection, it clears flag `0x04`, calls `0x00463640` with a null support object, and clears position adjustments at `+0x728..+0x730`.

## Port status

The compiled C library still binds `Human_GroundQuery` to the weak no-op in `gi_stubs.c`. The generated 479-line source is excluded from the build because its declaration and data flow are corrupted; changing its parameter types alone would not repair its script, camera, and collision paths. The present C tests exercise the movement integrator with a mock ground-query callback. They do not verify ground detection, floor following, slope landing, or script-controlled movement.

The next implementation pass needs a typed reconstruction of both the null-context level-query path and the non-null script-controlled path, plus a real level collision provider. It must preserve the accepted snap-distance comparison, grounding-bit transitions, support-object updates, slope angle writes, and position-adjustment clears before being admitted to the native build.
