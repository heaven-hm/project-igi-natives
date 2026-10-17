// IGI native provenance: PickupTrigger_ProcessVirModelsnotavai - 0x0046E9F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046E9F0-PickupTrigger_ProcessVirModelsnotavai.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_ProcessVirModelsnotavai.h"

int32_t PickupTrigger_ProcessVirModelsnotavai(float arg1, int32_t arg2)

{
    *(arg2 + 0xc) = arg1 + 0x20;
    *(arg2 + 0x10) = arg1 + 0x70;
    long double x87_r7 = *(arg1 + 0x9c);
    long double x87_r6 = *(arg1 + 0xa0);
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(arg1 + 0xa0);
    else
        x87_r7_1 = *(arg1 + 0x9c);

    long double x87_r6_1 = *(arg1 + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(arg1 + 0x9c);
        long double x87_r6_2 = *(arg1 + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(arg1 + 0xa0);
        else
            x87_r7_3 = *(arg1 + 0x9c);
    }
    else
        x87_r7_3 = *(arg1 + 0x98);

    *(arg2 + 0x14) = Render_ComputeNormals(*(arg1 + 0x6c)) * x87_r7_3;
    *(arg2 + 0x18) = &data_5be218;
    int32_t result = AI_TakeCover_25(arg2);
    *(arg2 + 0x18) = 0;
    return result;
}
