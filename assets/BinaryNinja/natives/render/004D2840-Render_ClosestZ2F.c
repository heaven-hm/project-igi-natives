// IGI native provenance: Render_ClosestZ2F - 0x004D2840 - CFG score 93.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D2840-Render_ClosestZ2F.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_ClosestZ2F.h"
int32_t Render_ClosestZ2F(void* context, char* param_2)

{
    char* dest_val = g_b16c98;
    float item_14 = 409.600006f;
    int32_t result_1 = 0;

    if (*((Display_CreateSurface_15() << 2) + &g_a94e84))
        (*((Display_CreateSurface_15() << 2) + &g_a94e84))(&item_14);

    int32_t result = result_1;

    if (result)
    {
        result = g_543a64;

        if (result)
        {
            int32_t i = 0;
            int32_t source_val;
            int32_t item_20_1 = source_val;
            bool flag_0_1 = g_b12c20 <= 0;
            int32_t item_c = 0;
            int32_t item_8_1 = 0;
            float item_4_1 = 20480.0f;

            if (!flag_0_1)
            {
                do
                {
                    if (*dest_val == 4)
                    {
                        void* source_1 = *(dest_val + 4);
                        uint32_t data_4 = Render_DrawSplineMesh_4();
                        int32_t data_5 = 0;
                        data_5 = *(source_1 + 0x1c);
                        int32_t data_6 = *(((data_4 * 0x180 + data_5) << 2) + &g_a96ae0);

                        if (data_6)
                            data_6(source_1, &item_c);
                    }

                    dest_val = &dest_val[8];
                    i += 1;
                } while (i < g_b12c20);
            }

            if (*param_2)
            {
                for (void* i_1 = *(context + 0xd18); i_1; i_1 = *(i_1 + 0x58))
                {
                    uint32_t data_9 = Render_DrawSplineMesh_4();
                    int32_t entity_val = 0;
                    entity_val = *(i_1 + 0x1c);
                    int32_t data_13 = *(((data_9 * 0x180 + entity_val) << 2) + &g_a96ae0);

                    if (data_13)
                        data_13(i_1, &item_c);
                }
            }

            int32_t i_2 = 0;
            int32_t* flagP2 = context + 0xd1c;

            do
            {
                if (param_2[i_2 + 1])
                {
                    for (void* j = *flagP2; j; j = *(j + 0x58))
                    {
                        uint32_t data_16 = Render_DrawSplineMesh_4();
                        int32_t temp_5 = 0;
                        temp_5 = *(j + 0x1c);
                        int32_t data_17 = *(((data_16 * 0x180 + temp_5) << 2) + &g_a96ae0);

                        if (data_17)
                            data_17(j, &item_c);
                    }
                }

                i_2 += 1;
                flagP2 = &flagP2[1];
            } while (i_2 < 8);

            Physics_SimulateRigidBody_14(&item_c);
            long double fpu_val_7_2 = item_4_1 * 0.99000001f;
            int32_t item_10 = 0;
            float item_4_2 = fpu_val_7_2;
            item_14 = fpu_val_7_2;

            if (*((Display_CreateSurface_15() << 2) + &g_a94e84))
                (*((Display_CreateSurface_15() << 2) + &g_a94e84))(&item_14);

            item_20_1 = item_4_2;
            return Game_DataSymbolLoad(0xc103a0, "Closest Z: %.2f");
        }
    }

    return result;
}
