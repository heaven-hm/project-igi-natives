// IGI native provenance: Render_DrawBoneMesh_15 - 0x004DD650 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DD650-Render_DrawBoneMesh_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawBoneMesh_15.h"
int32_t Render_DrawBoneMesh_15(void* context, float* param_2, float* param_3, int32_t param_4)

{
    void* context_val = context;
    void* flagP = *(*(*(*(context_val + 0x6c) + (param_4 << 2)) + 0xc) + 0xc);
    int32_t i = 0;
    void* item_14 = flagP;
    int32_t i_1 = 0;

    if (*(flagP + 0x84) > 0)
    {
        int32_t item_20_1 = 0;

        do
        {
            int32_t data_2 = *(*(flagP + 0x98) + item_20_1 + 0x10);
            float item_10;
            float item_8;

            if (Render_DrawSplineMesh_15(context_val, param_4, i_1, param_2, param_3, &item_8, &item_10))
            {
                long double fpu_val_7_1 = item_8;
                long double f0_1 = *param_2;
                fpu_val_7_1 - f0_1;

                if (*(&((fpu_val_7_1 < f0_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    item_8 = *param_2;

                long double fpu_val_7_2 = param_2[1];
                float item_4;
                long double f1_1 = item_4;
                fpu_val_7_2 - f1_1;

                if (!(*(&((fpu_val_7_2 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
                    item_4 = param_2[1];

                long double fpu_val_7_4 = item_10;
                long double f2_1 = *param_3;
                fpu_val_7_4 - f2_1;

                if (!(*(&((fpu_val_7_4 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_4, f2_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_4 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
                    item_10 = *param_3;

                long double fpu_val_7_5 = param_3[1];
                float item_c;
                long double f3_1 = item_c;
                fpu_val_7_5 - f3_1;

                if (*(&((fpu_val_7_5 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_5, f3_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_5 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    item_c = param_3[1];

                int32_t* j_1 = g_a5e354;
                int32_t* j = j_1;

                if (j_1)
                {
                    do
                    {
                        if (j != context_val)
                        {
                            int32_t data_7 = DynObj_CreateMagicObject_16(j);
                            int32_t item_18_1 = data_7;

                            if (data_7 != 0xffffffff)
                            {
                                int32_t k = 0;
                                void* dest_2 = *(*(*(j[0x1b] + (data_7 << 2)) + 0xc) + 0xc);

                                if (*(dest_2 + 0x84) > 0)
                                {
                                    int32_t flagP1 = 0;

                                    do
                                    {
                                        if (*(*(dest_2 + 0x98) + flagP1 + 0x10) == data_2)
                                        {
                                            Render_ClipMesh_14(j, &item_8, &item_10, data_7);
                                            data_7 = item_18_1;
                                        }

                                        k += 1;
                                        flagP1 += 0x14;
                                    } while (k < *(dest_2 + 0x84));

                                    flagP = item_14;
                                }
                            }

                            j_1 = g_a5e354;
                            context_val = context;
                        }

                        if (j != j_1)
                        {
                            j = *j;

                            if (!j)
                                break;

                            if (!*j)
                                break;
                        }
                        else
                        {
                            void* source_2 = j[0x52];

                            if (!source_2)
                                break;

                            j = *(source_2 + 8);

                            if (!*j)
                                break;
                        }
                    } while (j);
                }
            }

            i = i_1 + 1;
            item_20_1 += 0x14;
            i_1 = i;
        } while (i < *(flagP + 0x84));
    }

    return i;
}
