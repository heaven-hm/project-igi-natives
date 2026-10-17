// IGI native provenance: AnimSpline_Invoke13_50E450 - 0x0050E450 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050E450-AnimSpline_Invoke13_50E450.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSpline_Invoke13_50E450.h"

void AnimSpline_Invoke13_50E450(int32_t* arg1, int32_t* arg2)

{
    if (*arg2)
        return;

    int32_t* ecx_1 = arg1;
    *arg2 = 1;

    for (int32_t* i = nullptr; i < 0x48;)
    {
        int32_t esi_2 = **ecx_1;
        ecx_1 = &ecx_1[1];
        *(i + arg2[4]) = esi_2;
        *(i + arg2[4] + 4) = *(ecx_1[-1] + 4);
        *(i + arg2[4] + 8) = 1f / *(ecx_1[-1] + 8);
        void* esi_8 = arg2[4] + i;
        *(esi_8 + 0xc) = *(ecx_1[-1] + 0xc) * *(esi_8 + 8);
        void* esi_10 = arg2[4] + i;
        *(esi_10 + 0x10) = *(ecx_1[-1] + 0x10) * *(esi_10 + 8);
        void* esi_12 = arg2[4] + i;
        *(esi_12 + 0x14) = *(ecx_1[-1] + 0x14) * *(esi_12 + 8);
        void* esi_14 = arg2[4] + i;
        *(esi_14 + 0x18) = *(ecx_1[-1] + 0x18) * *(esi_14 + 8);
        void* esi_16 = arg2[4] + i;
        *(esi_16 + 0x1c) = *(ecx_1[-1] + 0x1c) * *(esi_16 + 8);
        void* esi_18 = arg2[4] + i;
        i = &i[9];
        *(esi_18 + 0x20) = *(ecx_1[-1] + 0x20) * *(esi_18 + 8);
    }

    Physics_InterpolateWaypoint_13(arg2);
}
