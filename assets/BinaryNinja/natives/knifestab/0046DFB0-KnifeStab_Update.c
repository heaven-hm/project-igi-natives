#include "KnifeStab_Update.h"
int32_t KnifeStab_Update(int32_t* a1, float a2)

{
    int32_t v_e8;
    __builtin_memset(&v_e8, 0, 0x14);
    void v_b0;
    Sys_OpenFileStream_12(&v_b0, a1[5], a2);
    float v_94;
    double v_f8 = v_94;
    double v_c8;
    memcpy(&v_c8, a1[2], 0x18);
    float v_a0;
    double v_100_1 = v_a0 * 8192.0;
    double v_f8_1 = v_f8 * 8192.0;
    int32_t objC2 = a1[1];
    float v_ac;
    double v_88 = v_c8 + v_ac * 8192.0;
    int32_t tmpD2 = *a1;
    int32_t v_118_1 = 0xffffffff;
    double* v_11c_1 = &v_e8;
    int32_t v_e4 = 0;
    int32_t v_e0 = objC2;
    double v_c0;
    double v_80 = v_c0 + v_100_1;
    int32_t v_dc = tmpD2;
    int32_t v_d8 = 0x3f800000;
    double v_b8;
    double v_78 = v_b8 + v_f8_1;
    char valA1 = Level_StartMission_2();
    int32_t* v_124 = 1;
    double* v_128 = &v_88;
    void* v_70;
    DynObj_FindSymbol_11(Level_StartMission_4(), &v_70, &v_c8, v_128, v_124, valA1, v_11c_1,
        v_118_1);
    int32_t v_18;

    if (v_18)
    {
        int32_t* v_108;
        __builtin_memset(&v_108, 0, 0x20);
        v_108 = &v_70;
        *(&v_100_1 + 4) = v_a0;
        void* valA5 = a1[8];
        *(&v_f8_1 + 4) = 0;
        v_100_1 = v_ac;
        v_f8_1 = v_94;
        void* v_f0_1 = valA5;
        int32_t v_ec_1 = a1[9];
        int32_t v_104_1 = *(valA5 + 0x654);

        if (v_70)
        {
            uint32_t valA9 = Level_LoadLevel_3();
            int32_t tmpD5 = 0;
            tmpD5 = *(v_70 + 0x1c);

            if (*(((valA9 * 0x180 + tmpD5) << 2) + &g_a96ae0))
            {
                int16_t valA11 = AI_UpdateOrders_17();
                tmpD5 = *(v_70 + 0x1c);

                if (TaskType_IsDerivedFrom(tmpD5, valA11))
                {
                    void* valA14 = *(v_70 + 0x800);

                    if (valA14 && !AI_CheckSector_3(valA14))
                        int32_t v_104_2 = 0x447a0000;
                }

                uint32_t valA17 = Level_LoadLevel_3();
                int32_t tmpD6 = 0;
                void* valA18 = v_70;
                tmpD6 = *(valA18 + 0x1c);
                (*(((valA17 * 0x180 + tmpD6) << 2) + &g_a96ae0))(valA18, &v_108);
                return 1;
            }
        }
    }

    return 0;
}
