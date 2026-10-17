// Original IGI.EXE function: AI_TakeCover_18 (VA 0x00460EE0; static CFG gate PASS, CFG score 0.929).
#include "AI_TakeCover_18.h"
int32_t* AI_TakeCover_18(void* context)

{
    int32_t* result = AI_CheckVisibility_21(context, nullptr);
    result = *(context + 0x2f4);

    if (result & 4)
    {
        if (!*(context + 0x7b8))
        {
            int32_t data_1 = *(context + 0x4ec);
            void* item_d8 = context;
            void item_d0;
            AI_FireWeapon_23(&item_d0, data_1);
            void item_b8;
            AI_TakeCover_23(&item_b8, *(context + 0x4ec));
            void item_90;
            memcpy(&item_90, context + 0x78, 0x28);
            long double fpu_val_7_1;

            if (!AI_CheckHearing_19(context))
                fpu_val_7_1 = 3.14159274f;
            else
                fpu_val_7_1 = 0.785398185f;

            float item_68_1 = fpu_val_7_1;
            float item_64_1 = fpu_val_7_1;
            int32_t item_60 = 0;
            int32_t item_5c_1 = 0x40c00000;
            int32_t* item_58_1 = nullptr;
            int32_t i = 0;

            if (*Level_StartMission_3() > 0)
            {
                int32_t source_2 = 8;
                int32_t* data_10;

                do
                {
                    int32_t temp_2 = 0;
                    temp_2 = *(*(Level_StartMission_3() + source_2) + 0x1c);
                    uint32_t data_6 = Level_InitTextures_2();
                    (*(((temp_2 + data_6 * 0x180) << 2) + &g_a96ae0))(
                        *(Level_StartMission_3() + source_2), &item_d8);
                    i += 1;
                    source_2 += 4;
                    data_10 = Level_StartMission_3();
                } while (i < *data_10);
            }

            AI_CheckVisibility_21(context, item_58_1);
        }

        result = *(context + 0x7b4);

        if (result)
        {
            void* flagP4 = *result;

            if (flagP4)
            {
                int32_t data_12 = *(context + 0x7bc);
                void* item_50 = context;
                void item_48;
                memcpy(&item_48, context + 0x20, 0x18);
                void item_30;
                memcpy(&item_30, context + 0x534, 0x1c);
                void* item_10_1 = context + 0x110;
                void* item_14_1 = context + 0x1b0;
                int32_t item_c_1 = data_12;
                uint32_t data_14 = Level_InitSprites_2();
                int32_t temp_5 = 0;
                temp_5 = *(flagP4 + 0x1c);
                (*(((data_14 * 0x180 + temp_5) << 2) + &g_a96ae0))(flagP4, &item_50);
                result = *(context + 0x7bc) + 1;
                *(context + 0x7bc) = result;
            }
        }
    }

    return result;
}
