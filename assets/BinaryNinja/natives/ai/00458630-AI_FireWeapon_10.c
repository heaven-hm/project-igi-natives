// Original IGI.EXE function: AI_FireWeapon_10 (VA 0x00458630; static CFG gate PASS, CFG score 1.000).
#include "AI_FireWeapon_10.h"
void AI_FireWeapon_10(void* a1, void* a2)

{
    int32_t ctxB = *(a1 + 8);
    void* flagP = *(a2 + 0x800);

    if (!(ctxB & 4))
    {
        void* objC1 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1d;
        int32_t valA2 = *(objC1 + 0x74);
        *(a1 + 0x14) = valA2;
        valA2(a1, a2);
        return;
    }

    if (ctxB & 0x10000)
    {
        void* valA4 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1e;
        int32_t valA5 = *(valA4 + 0x78);
        *(a1 + 0x14) = valA5;
        valA5(a1, a2);
        return;
    }

    if (ctxB & 0x20000)
    {
        void* tmpD2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x20;
        int32_t valA7 = *(tmpD2 + 0x80);
        *(a1 + 0x14) = valA7;
        valA7(a1, a2);
        return;
    }

    if (*(a2 + 0x538) == 0xc)
    {
        int32_t valA10 = Render_DrawSplineMesh_10(a2 + 0x68, 0);

        if (*(a2 + 0x53c) == valA10 && !*(a2 + 0xd19))
        {
            *(a2 + 0xd19) = 1;
            long double fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
            long double f0_1 = *(flagP + 0x3da8);
            fp0_1 - f0_1;

            if (*(&((fp0_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f0_1) ? 1 : 0) << 0xa
                | (fp0_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                void* valA15 = *(flagP + 0x3aa8);

                if (valA15)
                {
                    int32_t* valA16 = *(valA15 + 0xc);

                    if (valA16 && *valA16)
                    {
                        void* tmpD3 = *(flagP + 0x3aa8);
                        int32_t v_8 = *(flagP + 0x3dac);
                        void* v_4_1 = a2;
                        void* flagP1 = **(tmpD3 + 0xc);
                        uint32_t valA19 = AI_CheckSector_17();
                        int32_t tmpD4 = 0;
                        tmpD4 = *(flagP1 + 0x1c);
                        int32_t valA20 = *(((valA19 * 0x180 + tmpD4) << 2) + &g_a96ae0);

                        if (valA20)
                            valA20(flagP1, &v_8);
                    }
                }
            }
        }
    }

    if (!(ctxB & 1))
        return;

    int32_t* valA22 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t valA23 = *valA22;
    *(a1 + 0x14) = valA23;
    valA23(a1, a2);
}
