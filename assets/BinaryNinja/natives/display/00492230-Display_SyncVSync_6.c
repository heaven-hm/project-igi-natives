// IGI native provenance: Display_SyncVSync_6 - 0x00492230 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00492230-Display_SyncVSync_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SyncVSync_6.h"
int32_t __stdcall Display_SyncVSync_6(void* context , void* param_2)

{
    int32_t i = 4;
    int32_t* dest_val = &g_534a00;
    int32_t* source_val = context + 0xc4;
    bool flag_1 = false;

    while (i)
    {
        int32_t f1_1 = *source_val;
        int32_t f2_1 = *dest_val;
        flag_1 = f1_1 != f2_1;
        source_val = &source_val[1];
        dest_val = &dest_val[1];
        i -= 1;

        if (f1_1 != f2_1)
            break;
    }

    if (!flag_1)
        g_bcacf4 = 1;

    int32_t* source_1 = context + 0xc4;
    int32_t i_1 = 4;
    int32_t* dest_1 = &g_5349e0;
    bool flag_3 = false;

    while (i_1)
    {
        int32_t f3_1 = *source_1;
        int32_t f4_1 = *dest_1;
        flag_3 = f3_1 != f4_1;
        source_1 = &source_1[1];
        dest_1 = &dest_1[1];
        i_1 -= 1;

        if (f3_1 != f4_1)
            break;
    }

    if (!flag_3)
    {
        g_bcad74 = 1;
        g_bcacf4 = 1;
    label_49228e:
        memcpy(param_2, context, 0xec);
        g_5ca108 = *(param_2 + 0x44) >> 8 & 1;

        if (g_bcad74)
            return 0;
    }
    else if (g_bcacf4)
        goto label_49228e;

    return 1;
}
