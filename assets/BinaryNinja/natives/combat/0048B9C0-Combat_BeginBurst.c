// Original IGI.EXE function: Combat_BeginBurst (VA 0x0048B9C0; static CFG gate PASS, CFG score 0.970).
#include "Combat_BeginBurst.h"
uint32_t Combat_BeginBurst(int32_t a1, char a2)

{
    void* ctxB = *(a1 + 0x14);
    float v_10 = Sys_AllocateMemory_14(Level_SetMission_5()) * *(a1 + 0x3d74) + *(a1 + 0x3d70);
    char valA1;
    void* tmpD;
    valA1 = Locomotion_GetState(a1, 4);
    void* valA3;
    int32_t objC1;

    if (!valA1)
        valA3 = Table_GetAt(ctxB + 0x4c4, 0);
    else
    {
        tmpD = a1 + 0x38;
        int32_t srcS1 = **(ctxB + 0x7b4);
        Weapon_FireBullet_4(srcS1, tmpD, a1 + 0x78);
        valA3 = Table_GetAt(srcS1 + 0x20c, 0);
    }

    void* valA5 = HumanPlayer_LoadParameters_13(valA3, tmpD, objC1, valA3);
    int32_t v_8;
    Script_ParseEnumReal32_13(valA3, &v_8);
    int32_t valA6 = *(valA5 + 0x610);

    if (valA6 >= 0)
    {
        if (valA6 <= 2)
        {
            int32_t valA7 = *(valA5 + 0x64c);
            int32_t flagP1 = *(valA5 + 0x648);

            if (valA7 == flagP1 || valA7 <= 1)
            {
                v_10 = flagP1 * v_10;
                *(a1 + 0x3e54) = v_10;

                if (v_10 >= 1)
                {
                    int32_t objC2 = *(a1 + 0x3d4c);

                    if (v_10 > objC2)
                        *(a1 + 0x3e54) = objC2;
                }
                else
                    *(a1 + 0x3e54) = 1;
            }
            else
                *(a1 + 0x3e54) = valA7;

            if (!*(a1 + 0x3e54))
                *(a1 + 0x3e54) = 1;

            long double x87_r7_5 = Sys_DispatchOpcode_11(a1 + 0x20, a1 + 0x3e88);
            long double f1_1 = 0.0;
            x87_r7_5 - f1_1;
            int16_t valA12 = (x87_r7_5 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_5, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == f1_1 ? 1 : 0) << 0xe | 0x3800;

            if (*(&valA12 + 1) & 1)
                *(ctxB + 0x4d4) = *(a1 + 0x3d68);
            else
            {
                long double x87_r6_1 = *(a1 + 0xb0);
                x87_r7_5 - x87_r6_1;

                if (!(*(&((x87_r7_5 < x87_r6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_5, x87_r6_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == x87_r6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    x87_r7_5 = *(a1 + 0xb0);

                long double f2_1 = 0.01;
                x87_r7_5 - f2_1;
                valA12 = (x87_r7_5 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_5, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_5 == f2_1 ? 1 : 0) << 0xe | 0x3800;

                if (!(*(&valA12 + 1) & 1))
                    *(ctxB + 0x4d4) =
                        (*(a1 + 0x3d6c) - *(a1 + 0x3d68)) * x87_r7_5 / *(a1 + 0xb0)
                        + *(a1 + 0x3d68);
                else
                    *(ctxB + 0x4d4) = *(a1 + 0x3d68);
            }

            valA12 = a2;

            if (valA12)
                *(ctxB + 0x4d4) = *(ctxB + 0x4d4) * 0.5f;
        }
        else if (valA6 == 4)
        {
            *(a1 + 0x3e54) = 1;
            *(ctxB + 0x4d4) = 0x3f800000;
        }
    }

    *(a1 + 0x3e58) = v_8;
    uint32_t result = Frames_GetUpdateCounter();
    *(a1 + 0x3e5c) = result;
    *(a1 + 0x3e60) = 0;
    *(a1 + 0x3e6a) = 0;
    *(a1 + 0x3e69) = 1;
    memcpy(a1 + 0x3e70, a1 + 0x3e88, 0x18);
    return result;
}
