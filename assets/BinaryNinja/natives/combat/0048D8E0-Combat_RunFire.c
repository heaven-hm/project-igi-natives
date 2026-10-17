// Original IGI.EXE function: Combat_RunFire (VA 0x0048D8E0; static CFG gate PASS, CFG score 0.972).
#include "Combat_RunFire.h"
int32_t Combat_RunFire(void* a1)

{
    void* flagP = a1;
    void* srcS = *(flagP + 0x14);
    a1 = 0;
    char valA;
    void* tmpD;
    valA = Locomotion_GetState(flagP, 4);
    void* valA2;

    if (!valA)
        valA2 = Table_GetAt(srcS + 0x4c4, 0);
    else
    {
        tmpD = flagP + 0x38;
        int32_t srcS1 = **(srcS + 0x7b4);
        Weapon_FireBullet_4(srcS1, tmpD, flagP + 0x78);
        valA2 = Table_GetAt(srcS1 + 0x20c, 0);
    }

    double v_18;
    memcpy(&v_18, flagP + 0x3e88, 0x18);
    double v_30 = v_18 - *(flagP + 0x3e70);
    double v_10;
    double v_28 = v_10 - *(flagP + 0x3e78);
    double v_8;
    double v_20 = v_8 - *(flagP + 0x3e80);
    int32_t valA3;
    int32_t objC2;
    valA3 = Sys_PopStack_11(&v_30);

    if (!valA3)
    {
        v_30 = v_30 * *(flagP + 0x3dc8);
        double v_28_1 = v_28 * *(flagP + 0x3dc8);
        double v_20_1 = v_20 * *(flagP + 0x3dc8);
        *(flagP + 0x3e70) = v_30 + *(flagP + 0x3e70);
        *(flagP + 0x3e78) = v_28_1 + *(flagP + 0x3e78);
        *(flagP + 0x3e80) = v_20_1 + *(flagP + 0x3e80);
    }

    void* valA4 = HumanPlayer_LoadParameters_13(valA3, tmpD, objC2, valA2);
    int32_t v_40;
    Script_ParseEnumReal32_13(valA2, &v_40);
    int32_t valA5 = *(valA4 + 0x610);

    if (valA5 >= 0 && valA5 <= 2)
    {
        if (!*(flagP + 0x3e54) || !v_40)
        {
            int32_t valA11 = *(flagP + 0x3e50) + 1;
            *(flagP + 0x3e50) = valA11;
            valA11 = 1;
            return valA11;
        }

        AI_WriteChannel(flagP, 6, 1f);
        valA5 = 1;

        if (*(valA4 + 0x64c) != 1)
            valA5 = 0;

        int32_t objC4 = v_40;
        bool ctxB1;

        if (objC4 != *(flagP + 0x3e58))
        {
            int32_t tmpD2 = *(flagP + 0x3e54);
            *(flagP + 0x3e58) = objC4;
            ctxB1 = !valA5;
            *(flagP + 0x3e54) = tmpD2 - 1;

            if (!valA5)
                *(flagP + 0x3e60) = 0;
            else
            {
                long double fp0_1;
                fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
                *(flagP + 0x3e60) = (fp0_1 * *(flagP + 0x3d84) + *(flagP + 0x3d80)) * 30f;
            }
        }

        if (objC4 == *(flagP + 0x3e58) || ctxB1)
        {
            valA5 = AI_UpdateOrders_3(flagP, flagP + 0x3e70, 0.0349065848f, 0);

            if (valA5)
            {
                int32_t valA9 = *(flagP + 0x3e60);

                if (!valA9)
                {
                    *(flagP + 0x3c8c) = 0x3f800000;
                    valA9 = 0;
                    return valA9;
                }

                valA5 = valA9 - 1;
                *(flagP + 0x3e60) = valA5;
            }
        }
    }

    valA5 = 0;
    return valA5;
}
