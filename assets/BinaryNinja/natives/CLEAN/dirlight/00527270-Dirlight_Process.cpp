// IGI native provenance: Dirlight_Process - 0x00527270 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00527270-Dirlight_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Dirlight_Process.h"
int32_t Dirlight_Process(void* context)

{
    *(context + 0x5c) = 0xff7fffff;
    *(context + 0x54) = 0x7f7fffff;
    *(context + 0x58) = 0xff7fffff;
    int32_t* i_1;
    int32_t temp_val;
    i_1 = QTask_DeleteTask_2(context, g_a83d4c);

    for (int32_t* i = i_1; i; i = QTask_TriggerEvent_2(i, temp_val))
    {
        long double fpu_val_7_1 = i[0x14];
        long double f0_1 = *(context + 0x58);
        fpu_val_7_1 - f0_1;

        if (!(*(&((fpu_val_7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            temp_val = i[0x14];
            *(context + 0x58) = temp_val;
        }

        long double fpu_val_7_2 = i[0x14];
        long double f1_1 = *(context + 0x54);
        fpu_val_7_2 - f1_1;

        if (*(&((fpu_val_7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 1)
            *(context + 0x54) = i[0x14];

        temp_val = g_a83d4c;
    }

    return Light_ComputeDirectionalLight_6(0.0f);
}
