#include "Missile_Run.h"
int32_t Missile_Run(int32_t* a1)

{
    void* flagP = *(a1[0x6d] + 0x2d4);
    int32_t* valA1 = a1[0x218];

    if (valA1)
    {
        int32_t valA2 = *valA1;

        if (valA2)
            memcpy(&a1[0x20a], valA2 + 0x20, 0x18);
    }

    int32_t valA3 = *(flagP + 0x11c);

    if (!valA3)
    {
        void* v_ac_1 = &a1[0x20a];
        Menu_UpdateLanguage_19(a1);
    }
    else if (valA3 == 1)
        Menu_FormatScreen_19(a1);
    else if (valA3 == 2)
        Menu_DrawWidget_19(a1, &a1[0x20a]);
    else if (valA3 == 3)
        Menu_HandleInput_19(a1, &a1[0x20a]);
    else if (valA3 == 4)
        Menu_PlayMusic_19(a1);

    long double fpu7 = a1[0x219];
    long double f0 = 0f;
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40) && *(flagP + 0x118))
        Menu_LeaveMenus_19(a1);

    Menu_UpdateLanguage_20(a1);
    Menu_RequestScreen_19(a1);
    VehicleChild_Dispatch(a1);
    int32_t* i = a1[2];

    if (*i && i)
    {
        int32_t tmpD2 = g_afa7e0;

        do
        {
            int32_t* srcS2 = *i;
            void* valA10;

            if (!srcS2)
                valA10 = nullptr;
            else
            {
                int32_t valA7 = *srcS2;
                int32_t valA8 = -(valA7);
                valA10 = (valA8 - valA8) & srcS2;
            }

            *((tmpD2 << 2) + &g_afa6e0) = valA10;
            int32_t tmpD3 = tmpD2 + 1;
            int32_t valA11 = 0;
            g_afa7e0 = tmpD3;
            valA11 = i[7];
            int32_t valA12 = *((valA11 << 2) + &g_a970e0);

            if (valA12)
            {
                valA12(i);
                tmpD3 = g_afa7e0;
            }

            i = *((tmpD3 << 2) + &g_afa6dc);
            tmpD2 = tmpD3 - 1;
            g_afa7e0 = tmpD2;
        } while (i);
    }

    int32_t result = a1[0x6e];
    int32_t v_98;
    void v_90;
    double v_88[0x3];
    int32_t v_70[0x16];

    if (!result)
    {
        if (!(*(g_bc2360 + 0x68) & 0x1f))
        {
            memcpy(&v_88, &a1[8], 0x18);
            int32_t* v_8c_2 = a1;
            v_98 = 0;
            int32_t v_94_2 = 0xc14f4000;
            DynObj_LookupHashItem_10(Level_StartMission_4(), &v_70, &v_88, 1, &v_98, 0xc, &v_90,
                0xffffffff);
            int32_t result_1;
            result = result_1;

            if (!result)
                return QTask_FindType(a1);
        }

        return result;
    }

    int32_t valA13 = 0;
    char* objC2 = a1 + 0x1d6;

    while (!*objC2)
    {
        valA13 += 1;
        objC2 = &objC2[0x38];

        if (valA13 >= 0x16)
            break;
    }

    memcpy(&v_88, &a1[8], 0x18);
    int32_t* v_8c_1 = a1;
    v_98 = 0;
    int32_t v_94_1 = 0xc0c80000;
    DynObj_LookupHashItem_10(Level_StartMission_4(), &v_70, &v_88, 1, &v_98, 0xc, &v_90, 0xffffffff);
    FX_SmokeEmit(&v_88, 1, 1, 0x40a00000, 0x46200000, 0x45e00000, 0x45c00000, 0xa, 5, &v_70,
        "1009_01_1", "explo_03_l", 0x15, 2, 0x47c80000, a1[0x225]);
    return QTask_FindType(a1);
}
