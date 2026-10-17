// Original IGI.EXE function: AI_TakeCover_18 (VA 0x00460EE0; static CFG gate PASS, CFG score 0.929).
#include "AI_TakeCover_18.h"
int32_t* AI_TakeCover_18(void* a1)

{
    int32_t* result = AI_CheckVisibility_21(a1, nullptr);
    result = *(a1 + 0x2f4);

    if (result & 4)
    {
        if (!*(a1 + 0x7b8))
        {
            int32_t valA1 = *(a1 + 0x4ec);
            void* v_d8 = a1;
            void v_d0;
            AI_FireWeapon_23(&v_d0, valA1);
            void v_b8;
            AI_TakeCover_23(&v_b8, *(a1 + 0x4ec));
            void v_90;
            memcpy(&v_90, a1 + 0x78, 0x28);
            long double x87_r7_1;

            if (!AI_CheckHearing_19(a1))
                x87_r7_1 = 3.14159274f;
            else
                x87_r7_1 = 0.785398185f;

            float v_68_1 = x87_r7_1;
            float v_64_1 = x87_r7_1;
            int32_t v_60 = 0;
            int32_t v_5c_1 = 0x40c00000;
            int32_t* v_58_1 = nullptr;
            int32_t i = 0;

            if (*Level_StartMission_3() > 0)
            {
                int32_t srcS2 = 8;
                int32_t* valA10;

                do
                {
                    int32_t tmpD2 = 0;
                    tmpD2 = *(*(Level_StartMission_3() + srcS2) + 0x1c);
                    uint32_t valA6 = Level_InitTextures_2();
                    (*(((tmpD2 + valA6 * 0x180) << 2) + &g_a96ae0))(
                        *(Level_StartMission_3() + srcS2), &v_d8);
                    i += 1;
                    srcS2 += 4;
                    valA10 = Level_StartMission_3();
                } while (i < *valA10);
            }

            AI_CheckVisibility_21(a1, v_58_1);
        }

        result = *(a1 + 0x7b4);

        if (result)
        {
            void* flagP4 = *result;

            if (flagP4)
            {
                int32_t valA12 = *(a1 + 0x7bc);
                void* v_50 = a1;
                void v_48;
                memcpy(&v_48, a1 + 0x20, 0x18);
                void v_30;
                memcpy(&v_30, a1 + 0x534, 0x1c);
                void* v_10_1 = a1 + 0x110;
                void* v_14_1 = a1 + 0x1b0;
                int32_t v_c_1 = valA12;
                uint32_t valA14 = Level_InitSprites_2();
                int32_t tmpD5 = 0;
                tmpD5 = *(flagP4 + 0x1c);
                (*(((valA14 * 0x180 + tmpD5) << 2) + &g_a96ae0))(flagP4, &v_50);
                result = *(a1 + 0x7bc) + 1;
                *(a1 + 0x7bc) = result;
            }
        }
    }

    return result;
}
