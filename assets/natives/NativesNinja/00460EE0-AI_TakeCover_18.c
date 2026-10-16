#include "00460EE0-AI_TakeCover_18.h"
/* 0x00460ee0 AI_TakeCover_18 full linked: callers=1 callees=14 */
int32_t* sub_460ee0(void* a1)

{
    int32_t* result = sub_463700(a1, nullptr);
    result = *(a1 + 0x2f4);

    if (result & 4)
    {
        if (!*(a1 + 0x7b8))
        {
            int32_t eax_1 = *(a1 + 0x4ec);
            void* var_d8 = a1;
            void var_d0;
            sub_465800(&var_d0, eax_1);
            void var_b8;
            sub_465880(&var_b8, *(a1 + 0x4ec));
            void var_90;
            memcpy(&var_90, a1 + 0x78, 0x28);
            long double x87_r7_1;

            if (!sub_463150(a1))
                x87_r7_1 = 3.14159274f;
            else
                x87_r7_1 = 0.785398185f;

            float var_68_1 = x87_r7_1;
            float var_64_1 = x87_r7_1;
            int32_t var_60 = 0;
            int32_t var_5c_1 = 0x40c00000;
            int32_t* var_58_1 = nullptr;
            int32_t i = 0;

            if (*Level_StartMission_3() > 0)
            {
                int32_t esi_2 = 8;
                int32_t* eax_10;

                do
                {
                    int32_t edx_2 = 0;
                    edx_2 = *(*(Level_StartMission_3() + esi_2) + 0x1c);
                    uint32_t eax_6 = Level_InitTextures_2();
                    (*(((edx_2 + eax_6 * 0x180) << 2) + &g_a96ae0))(
                        *(Level_StartMission_3() + esi_2), &var_d8);
                    i += 1;
                    esi_2 += 4;
                    eax_10 = Level_StartMission_3();
                } while (i < *eax_10);
            }

            sub_463700(a1, var_58_1);
        }

        result = *(a1 + 0x7b4);

        if (result)
        {
            void* ebp_4 = *result;

            if (ebp_4)
            {
                int32_t eax_12 = *(a1 + 0x7bc);
                void* var_50 = a1;
                void var_48;
                memcpy(&var_48, a1 + 0x20, 0x18);
                void var_30;
                memcpy(&var_30, a1 + 0x534, 0x1c);
                void* var_10_1 = a1 + 0x110;
                void* var_14_1 = a1 + 0x1b0;
                int32_t var_c_1 = eax_12;
                uint32_t eax_14 = Level_InitSprites_2();
                int32_t edx_5 = 0;
                edx_5 = *(ebp_4 + 0x1c);
                (*(((eax_14 * 0x180 + edx_5) << 2) + &g_a96ae0))(ebp_4, &var_50);
                result = *(a1 + 0x7bc) + 1;
                *(a1 + 0x7bc) = result;
            }
        }
    }

    return result;
}
