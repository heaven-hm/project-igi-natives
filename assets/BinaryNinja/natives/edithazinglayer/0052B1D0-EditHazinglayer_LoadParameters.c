// Original IGI.EXE function: EditHazinglayer_LoadParameters (VA 0x0052B1D0; static CFG gate PASS, CFG score 0.889).
#include "EditHazinglayer_LoadParameters.h"
int32_t EditHazinglayer_LoadParameters(void* a1)

{
    int32_t valA = 0x40000000 >> (*(a1 + 0x70) & 0x1f);
    double v_20;
    memcpy(&v_20, a1 + 0x28, 0x18);
    int64_t v_38 = v_20;
    int32_t valA1 = valA << 1;
    int32_t v_30 = valA1;
    int32_t valA2 = -(valA1);
    v_38 &= valA2;
    long double x87_r7_1 = v_38;
    *(a1 + 0x40) = x87_r7_1;
    double v_18;
    v_38 = v_18;
    v_38 &= valA2;
    long double x87_r6_1 = v_38;
    double v_28 = x87_r6_1;
    *(a1 + 0x48) = x87_r6_1;
    double v_10;
    v_38 = v_10;
    v_38 &= valA2;
    void* tmpD4 = *(a1 + 0x20);
    long double x87_r6_3 = v_38;
    v_38 = x87_r6_3;
    *(a1 + 0x50) = x87_r6_3;
    v_30 = v_30;
    *(a1 + 0x58) = v_30 + x87_r7_1;
    *(a1 + 0x60) = v_30 + v_28;
    *(a1 + 0x68) = v_30 + v_38;
    long double x87_r7_8 = *(a1 + 0x80) + *(a1 + 0x38);

    if (tmpD4)
        return Render_SkinBones_12(tmpD4, a1 + 0x40, a1 + 0x58, nullptr, *(a1 + 0x74),
            *(a1 + 0x78) + *(a1 + 0x38), x87_r7_8);

    struct status_msg* result = Render_DrawLightmapMesh_12(a1 + 0x40, a1 + 0x58, nullptr, *(a1 + 0x74),
        *(a1 + 0x78) + *(a1 + 0x38), x87_r7_8);
    *(a1 + 0x20) = result;
    return result;
}
