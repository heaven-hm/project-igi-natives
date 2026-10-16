#include "gi_platform.h"
#include "0045EAE0-Human_GetCutSceneDeltaTime.h"
int32_t Human_GetCutSceneDeltaTime(int32_t a1)

// Sig: float (probable) Human_GetCutSceneDeltaTime(unknown param1)
// Note: Registered at 0x45EA44 via registrar 0x4B8890 (push 0x45EAE0 +
// 'Human_GetCutSceneDeltaTime'). Getter: calls fcn.004F1030 then fld dword
// [valA+0x1B0] — returns float field +0x1B0 of the entity/time object.
// Semantics match name.  Verified: r2 forced-analysis confirmed exact start
// (size 76); P3 byte-level name<->address binding at registrar callsite
// 0x45EA44 via 0x4B8890; P6 SHA-256(first 32 code
// bytes)=de84a925c808fb88a1e592188af8c387bd82ca68b7338238665b3945930c0b22;
// re-agent reverser/checker loop ran on this native (C decompilation pending
// ARM64 native port).
{
    long double x87_r7_1 = *(Script_ExecuteLevelScript_4(0) + 0x1b0) * 1.5.0f;
    char* v_8 = &g_567c74;
    int32_t v_18 = x87_r7_1;
    double v_10 = x87_r7_1;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
