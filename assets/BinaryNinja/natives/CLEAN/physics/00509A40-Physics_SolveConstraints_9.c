// IGI native provenance: Physics_SolveConstraints_9 - 0x00509A40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00509A40-Physics_SolveConstraints_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_SolveConstraints_9.h"
int32_t __stdcall Physics_SolveConstraints_9(void* context)

{
    int32_t item_3c = *(context + 4);
    int32_t item_38 = *(context + 8);
    int32_t item_34 = *(context + 0xc);
    int32_t* data_2 = g_a7b4f0;
    int32_t item_30 = *(context + 0x10);
    void* item_48 = (g_a7b638 << 2) + &g_a7b2e0;

    if ((*(*data_2 + 0xc))(data_2, &item_3c) < 0)
    {
        Error_Show("Failed to create device.");

        while (true)
            /* nop */

        return;
    }

    int32_t entity_3 = g_a7b638;
    int32_t context_val;
    int32_t item_4c_1 = context_val;
    int32_t source_val;
    int32_t item_50_1 = source_val;
    int32_t* data_4 = *((entity_3 << 2) + &g_a7b2e0);
    int32_t data_5 = (**data_4)(data_4, 0x5349c0, (entity_3 << 2) + &g_a7b4e0);
    int32_t* data_6 = *((g_a7b638 << 2) + &g_a7b2e0);
    (*(*data_6 + 8))(data_6);

    if (data_5 >= 0)
    {
        int32_t* data_7 = *((g_a7b638 << 2) + &g_a7b4e0);
        int32_t* data_9;

        if ((*(*data_7 + 0x2c))(data_7, 0x534c38) >= 0)
        {
            int32_t* source_3 = *((g_a7b638 << 2) + &g_a7b4e0);

            if ((*(*source_3 + 0x34))(source_3, FX_ExplosionSpawn_22(), 5) < 0)
            {
                int32_t* data_14 = *((g_a7b638 << 2) + &g_a7b4e0);
                (*(*data_14 + 8))(data_14);
                *((g_a7b638 << 2) + &g_a7b4e0) = 0;
                return 1;
            }

            int32_t item_18 = 0x18;
            int32_t item_14_1 = 0x10;
            int32_t item_c_1 = 1;
            int32_t item_8_1 = 0xffffff80;
            int32_t item_4_1 = 0x80;
            int32_t* source_5 = &g_54e8ac;

            while (true)
            {
                int32_t item_10_1 = source_5[-1];
                int32_t* data_17 = *((g_a7b638 << 2) + &g_a7b2e0);
                int32_t data_18 = (*(*data_17 + 0x18))(data_17, 4, &item_18);

                if (data_18)
                {
                    if (data_18 != 0x80070002)
                        break;

                    *source_5 = 0;
                }

                source_5 = &source_5[2];

                if (source_5 >= "d not get capabilities for one or more joysticks .")
                {
                    int32_t data_19 = g_a7b638;
                    int32_t item_2c = 0x14;
                    int32_t item_28_1 = 0x10;
                    int32_t* data_20 = *((data_19 << 2) + &g_a7b2e0);
                    int32_t item_24_1 = 0;
                    int32_t item_20_1 = 0;
                    int32_t item_1c_1 = 1;
                    (*(*data_20 + 0x18))(data_20, 9, &item_2c);
                    int32_t item_20_2 = 0;
                    int32_t item_1c_2 = 0x2710;
                    int32_t* data_22 = *((g_a7b638 << 2) + &g_a7b2e0);
                    (*(*data_22 + 0x18))(data_22, 6, &item_2c);
                    int32_t item_20_3 = 1;
                    int32_t item_1c_3 = g_a7b63c;
                    int32_t* source_6 = &g_54e8a8;

                    while (true)
                    {
                        if (source_6[1])
                        {
                            int32_t item_24_2 = *source_6;
                            int32_t* data_24 = *((g_a7b638 << 2) + &g_a7b2e0);

                            if ((*(*data_24 + 0x18))(data_24, 5, &item_2c))
                                break;
                        }

                        source_6 = &source_6[2];

                        if (source_6 >= "Could not get capabilities for one or more joysticks .")
                        {
                            g_a7b638 += 1;
                            return 1;
                        }
                    }

                    break;
                }
            }

            data_9 = *((g_a7b638 << 2) + &g_a7b4e0);
        }
        else
            data_9 = *((g_a7b638 << 2) + &g_a7b4e0);

        (*(*data_9 + 8))(data_9);
        *((g_a7b638 << 2) + &g_a7b4e0) = 0;
        return 1;
    }

    Error_Show("Failed to obtain interface.");

    while (true)
        /* nop */
}
