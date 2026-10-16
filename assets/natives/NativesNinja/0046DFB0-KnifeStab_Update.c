#include "0046DFB0-KnifeStab_Update.h"
/* 0x0046dfb0 KnifeStab_Update full linked: callers=1 callees=12 */
int32_t sub_46dfb0(int32_t* a1, float a2)

{
    int32_t var_e8;
    __builtin_memset(&var_e8, 0, 0x14);
    void var_b0;
    sub_4b3790(&var_b0, a1[5], a2);
    float var_94;
    double var_f8 = var_94;
    double var_c8;
    memcpy(&var_c8, a1[2], 0x18);
    float var_a0;
    double var_100_1 = var_a0 * 8192.0;
    double var_f8_1 = var_f8 * 8192.0;
    int32_t ecx_2 = a1[1];
    float var_ac;
    double var_88 = var_c8 + var_ac * 8192.0;
    int32_t edx_2 = *a1;
    int32_t var_118_1 = 0xffffffff;
    double* var_11c_1 = &var_e8;
    int32_t var_e4 = 0;
    int32_t var_e0 = ecx_2;
    double var_c0;
    double var_80 = var_c0 + var_100_1;
    int32_t var_dc = edx_2;
    int32_t var_d8 = 0x3f800000;
    double var_b8;
    double var_78 = var_b8 + var_f8_1;
    char eax_1 = Level_StartMission_2();
    int32_t* var_124 = 1;
    double* var_128 = &var_88;
    void* var_70;
    sub_4cc2a0(Level_StartMission_4(), &var_70, &var_c8, var_128, var_124, eax_1, var_11c_1,
        var_118_1);
    int32_t var_18;

    if (var_18)
    {
        int32_t* var_108;
        __builtin_memset(&var_108, 0, 0x20);
        var_108 = &var_70;
        *(&var_100_1 + 4) = var_a0;
        void* eax_5 = a1[8];
        *(&var_f8_1 + 4) = 0;
        var_100_1 = var_ac;
        var_f8_1 = var_94;
        void* var_f0_1 = eax_5;
        int32_t var_ec_1 = a1[9];
        int32_t var_104_1 = *(eax_5 + 0x654);

        if (var_70)
        {
            uint32_t eax_9 = Level_LoadLevel_3();
            int32_t edx_5 = 0;
            edx_5 = *(var_70 + 0x1c);

            if (*(((eax_9 * 0x180 + edx_5) << 2) + &g_a96ae0))
            {
                int16_t eax_11 = sub_460be0();
                edx_5 = *(var_70 + 0x1c);

                if (TaskType_IsDerivedFrom(edx_5, eax_11))
                {
                    void* eax_14 = *(var_70 + 0x800);

                    if (eax_14 && !sub_4528f0(eax_14))
                        int32_t var_104_2 = 0x447a0000;
                }

                uint32_t eax_17 = Level_LoadLevel_3();
                int32_t edx_6 = 0;
                void* eax_18 = var_70;
                edx_6 = *(eax_18 + 0x1c);
                (*(((eax_17 * 0x180 + edx_6) << 2) + &g_a96ae0))(eax_18, &var_108);
                return 1;
            }
        }
    }

    return 0;
}
