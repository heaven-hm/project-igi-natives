// IGI native provenance: AnimSpline_ProcessStep_50E730 - 0x0050E730 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050E730-AnimSpline_ProcessStep_50E730.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSpline_ProcessStep_50E730.h"

int32_t** AnimSpline_ProcessStep_50E730(int32_t* arg1, int32_t* arg2)

{
    int32_t* context_val = arg1;

    for (int32_t i = 0; i < 0x6c;)
    {
        int32_t esi_2 = **context_val;
        context_val = &context_val[1];
        *(arg2[4] + i) = esi_2;
        *(arg2[4] + i + 4) = *(context_val[-1] + 4);
        *(arg2[4] + i + 8) = 1f / *(context_val[-1] + 8);
        void* esi_8 = arg2[4] + i;
        *(esi_8 + 0xc) = *(esi_8 + 8) * *(context_val[-1] + 0xc);
        void* esi_10 = arg2[4] + i;
        *(esi_10 + 0x10) = *(esi_10 + 8) * *(context_val[-1] + 0x10);
        void* esi_12 = arg2[4] + i;
        *(esi_12 + 0x14) = *(esi_12 + 8) * *(context_val[-1] + 0x14);
        void* esi_14 = arg2[4] + i;
        *(esi_14 + 0x18) = *(esi_14 + 8) * *(context_val[-1] + 0x18);
        void* esi_16 = arg2[4] + i;
        *(esi_16 + 0x1c) = *(esi_16 + 8) * *(context_val[-1] + 0x1c);
        void* esi_18 = arg2[4] + i;
        i += 0x24;
        *(esi_18 + 0x20) = *(esi_18 + 8) * *(context_val[-1] + 0x20);
    }

    return Physics_InterpolateWaypoint_13(arg2);
}
