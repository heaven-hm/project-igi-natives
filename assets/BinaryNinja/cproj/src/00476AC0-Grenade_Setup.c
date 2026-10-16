#include "gi_platform.h"
#include "00476AC0-Grenade_Setup.h"
uint32_t Grenade_Setup(int32_t* a1)

{
    void* ctxB = (*(int32_t*)(uintptr_t)(a1[0x6d] + 0x2d4));
    int32_t valA1 = a1[0x1c8];

    if (valA1)
    {
        a1[0x1c8] = valA1 - 1;
        Weapon_CycleFireMode_4(a1);
        uint32_t result = Weapon_GrenadeBnc1(a1);
        int32_t* i = a1[2];

        if (*i && i)
        {
            int32_t tmpD1 = g_afa7e0;

            do
            {
                int32_t* srcS1 = *i;
                void* valA16;

                if (!srcS1)
                    valA16 = nullptr;
                else
                {
                    int32_t valA13 = *srcS1;
                    int32_t valA14 = -(valA13);
                    valA16 = (valA14 - valA14) & srcS1;
                }

                *((tmpD1 << 2) + &g_afa6e0) = valA16;
                int32_t tmpD2 = tmpD1 + 1;
                int32_t valA17 = 0;
                g_afa7e0 = tmpD2;
                valA17 = i[7];
                result = *((valA17 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    tmpD2 = g_afa7e0;
                }

                i = *((tmpD2 << 2) + &g_afa6dc);
                tmpD1 = tmpD2 - 1;
                g_afa7e0 = tmpD1;
            } while (i);
        }

        return result;
    }

    int32_t* v_74 = a1;
    int32_t v_80 = valA1;
    int32_t v_7c = 0xc0a00000;
    char valA2 = Level_CheckQTaskID_3();
    char v_78;
    int32_t v_70[0x1c];
    DynObj_LookupHashItem_10(Level_StartMission_4(), &v_70, &a1[8], 1, &v_80, valA2, &v_78, 0xffffffff);
    void* valA4 = a1[0x1cc];
    int32_t* valA5;

    if (valA4)
        valA5 = *(valA4 + 0x6e0);

    if (!valA4 || !valA5)
    {
        int32_t valA8 = (*(int32_t*)(uintptr_t)(ctxB + 4));

        if (!valA8)
        {
            int32_t v_90_5 = 0;
            int32_t v_94_4 = 0x47200000;
            int32_t v_98_3 = 2;
            int32_t v_9c_3 = 0x15;
            char* v_a0_2 = "explo_02_m";
            char* v_a4_2 = "1009_01_1";
            int32_t v_ac_2 = 1;
            int32_t v_b0_2 = 3;
            int32_t v_b4_2 = 0x45c00000;
            FX_SmokeEmit(&a1[8], 1, 1, 0x3f800000, 0x46a00000, 0, 0x45c00000, 3, 1, &v_70,
                "1009_01_1", "explo_02_m", 0x15, 2, 0x47200000, 0);
        }
        else if (valA8 == 1)
            Weapon_ComputeAccuracy_9(&a1[8], &v_70, 0x46a00000, 0x47200000);
    }
    else
    {
        int32_t objC1 = (*(int32_t*)(uintptr_t)(ctxB + 4));

        if (!objC1)
        {
            int32_t v_90_4 = 0;
            int32_t v_94_3 = 0x47200000;
            int32_t v_98_2 = 2;
            int32_t v_9c_2 = 0x15;
            char* v_a0_1 = "explo_02_m";
            char* v_a4_1 = "1009_01_1";
            int32_t v_ac_1 = 1;
            int32_t v_b0_1 = 3;
            int32_t v_b4_1 = 0x45c00000;
            int32_t v_b8_1 = objC1;
            int32_t v_bc_1 = objC1;
            FX_SmokeEmit(&a1[8], 1, 1, *valA5, valA5[1] * 4096.0f, valA5[2] * 4096.0f, 0x45c00000, 3,
                1, &v_70, "1009_01_1", "explo_02_m", 0x15, 2, 0x47200000, 0);
        }
        else if (objC1 == 1)
        {
            int32_t v_90_1 = objC1 - 1;
            int32_t v_94_1 = objC1 - 1;
            Weapon_ComputeAccuracy_9(&a1[8], &v_70, valA5[1] * 4096.0f, valA5[2] * 4096.0f);
        }
    }

    return QTask_FindType(a1);
}
