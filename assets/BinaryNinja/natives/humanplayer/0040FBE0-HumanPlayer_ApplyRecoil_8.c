// Original IGI.EXE function: HumanPlayer_ApplyRecoil_8 (VA 0x0040FBE0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_ApplyRecoil_8.h"
int32_t* HumanPlayer_ApplyRecoil_8(void* a1, void* a2)

{
    int32_t ctxB = *(a2 + 0x4ec);
    void* valA;
    int32_t objC;
    valA = Table_GetAt(a2 + 0x4c4, 0);
    void* valA1;
    int32_t tmpD;
    int32_t tmpD1;
    valA1 = HumanPlayer_LoadParameters_13(valA, tmpD, objC, valA);
    long double fpu7 = *(a2 + 0x1c8);
    long double f1 = 0f;
    fpu7 - f1;

    if (*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        void* valA3;
        int32_t objC1;
        valA3 = Table_GetAt(a2 + 0x4c4, 0);
        Bones_PlayAnimation(ctxB + 0x68, 0,
            *(HumanPlayer_LoadParameters_13(valA3, tmpD1, objC1, valA3) + 0x68c), 0, 0f);
        *(a1 + 0x14) = sub_40fd70;
    }

    int32_t valA6 = *(a2 + 0xd6c);
    int32_t* valA8;

    if (valA6)
    {
        valA8 = valA6 - 1;
        *(a2 + 0xd6c) = valA8;
    }
    else
    {
        valA8 = Weapon_UpdateMuzzleFlash_8(a2 + 0x340, Weapon_FireBullet_8("AMMO_ID_MEDIPACK"));

        if (valA8)
        {
            int32_t tmpD3 = valA8[1];

            if (tmpD3)
            {
                long double x87_r7_1 = *(a2 + 0x254);
                long double f2_1 = 0f;
                x87_r7_1 - f2_1;

                if (!(*(&((x87_r7_1 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                    float* valA10 = *(valA1 + 0x6e4);
                    valA8[1] = tmpD3 - 1;
                    long double x87_r7_4 = *(a2 + 0x254) - *(a2 + 0x258) * *valA10;
                    long double f3 = 0f;
                    x87_r7_4 - f3;
                    *(a2 + 0x254) = x87_r7_4;
                    bool c1 = /* bool c1 = unknown  {fst dword [srcS+0x254], fp0} */;

                    if (!(*(&((x87_r7_4 < f3 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
                        | (FCMP_UO(x87_r7_4, f3) ? 1 : 0) << 0xa
                        | (x87_r7_4 == f3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    {
                        long double x87_r6_1 = *(a2 + 0x258);
                        x87_r7_4 - x87_r6_1;

                        if (!(*(&((x87_r7_4 < x87_r6_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_4, x87_r6_1) ? 1 : 0) << 0xa
                                | (x87_r7_4 == x87_r6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                            *(a2 + 0x254) = *(a2 + 0x258);
                    }
                    else
                        *(a2 + 0x254) = 0;

                    int32_t v_8 = 60.0 / *(valA1 + 0x644) * 30.0;
                    *(a2 + 0xd6c) = v_8;
                    return v_8;
                }
            }

            void* valA13;
            int32_t objC4;
            valA13 = Table_GetAt(a2 + 0x4c4, 0);
            int32_t valA15 = Bones_PlayAnimation(ctxB + 0x68, 0,
                *(HumanPlayer_LoadParameters_13(valA13, tmpD3, objC4, valA13) + 0x68c), 0, 0f);
            *(a1 + 0x14) = sub_40fd70;
            return valA15;
        }
    }

    return valA8;
}
