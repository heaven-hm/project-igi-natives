// IGI native provenance: Physics_ApplyImpulse_14 - 0x0050FAE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050FAE0-Physics_ApplyImpulse_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_ApplyImpulse_14.h"
int32_t* Physics_ApplyImpulse_14(void* context)

{
    int32_t* i_2 = g_b041e8;

    if (i_2)
    {
        long double fpu_val_7_1 = 0.0f;
        long double fpu_val_6_2 = g_a7da20 * 255.0f;
        long double fpu_val_5_2 = g_a7da24 * 255.0f;
        long double fpu_val_4_2 = g_a7da28 * 255.0f;
        int32_t* data_1 = **&g_b041e4 * g_b041f0 + g_b041e0 + 0xc;
        void item_400;
        void* source_1 = &item_400;
        int32_t i_3 = 0x100;
        float entity_3 = *data_1;
        float temp_2 = data_1[1];
        float data_2 = data_1[2];
        int32_t i;

        do
        {
            int32_t data_3 = entity_3 * fpu_val_7_1 + fpu_val_6_2;
            int32_t temp_3 = temp_2 * fpu_val_7_1 + fpu_val_5_2;
            int32_t entity_4 = data_2 * fpu_val_7_1 + fpu_val_4_2;

            if (data_3 > 0xff)
                data_3 = 0xff;

            if (temp_3 > 0xff)
                temp_3 = 0xff;

            if (entity_4 > 0xff)
                entity_4 = 0xff;

            source_1 += 4;
            i = i_3;
            i_3 -= 1;
            *(source_1 - 4) = (data_3 << 8 | temp_3) << 8 | entity_4;
            fpu_val_7_1 = fpu_val_7_1 + 1.0f;
        } while (i != 1);

        if (*(context + 0xdf4))
        {
            Qhash_Init(1);
            Sys_PopStack_21(*(context + 0xdf4));
            Sys_PushStack_21(*(context + 0xdf4), &item_400, 1);
            Qhash_Reset();
        }

        Qhash_Init(1);
        DynObj_UpdateDynTree_7(context);
        Qhash_Reset();
        Render_IllegalAllocInfo();
        int32_t dest_1 = 0;
        float* context_1 = &g_c310a0;

        for (int32_t i_1 = 0x19; i_1 > 0xfffffffa; )
        {
            long double fpu_val_7_5 = (1 << (i_1 & 0x1f)) * g_b16c6c;
            long double fpu_val_7_10 = (
                Display_OpenDevice_18(fpu_val_7_5 + fpu_val_7_5 + (0x40000000 >> (dest_1 & 0x1f))) - 130.0f) * g_a7da18;
            long double fpu_val_6_4 = 0.0f;
            fpu_val_6_4 - fpu_val_7_10;

            if (*(&((fpu_val_6_4 < fpu_val_7_10 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_4, fpu_val_7_10) ? 1 : 0) << 0xa
                | (fpu_val_6_4 == fpu_val_7_10 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double fpu_val_6_5 = 255.0f;
                fpu_val_6_5 - fpu_val_7_10;

                if (*(&((fpu_val_6_5 < fpu_val_7_10 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_5, fpu_val_7_10) ? 1 : 0) << 0xa
                        | (fpu_val_6_5 == fpu_val_7_10 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    fpu_val_7_10 = 255.0f;
            }
            else
                fpu_val_7_10 = 0.0f;

            *context_1 = fpu_val_7_10;
            dest_1 += 1;
            i_1 -= 1;
            context_1 = &context_1[2];
        }

        long double fpu_val_7_14 = g_c310a0 - g_c310a8;
        i_2 = &g_c310a8;
        g_c310a4 = fpu_val_7_14 + fpu_val_7_14;

        do
        {
            long double fpu_val_7_17 = i_2[-2] - *i_2;
            i_2 = &i_2[2];
            i_2[-1] = fpu_val_7_17;
        } while (i_2 < 0xc31198);
    }

    return i_2;
}
