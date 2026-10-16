#include "00458630-AI_FireWeapon_10.h"
/* 0x00458630 AI_FireWeapon_10 full linked: callers=0 callees=4 */
void sub_458630(void* a1, void* a2)

{
    int32_t ebx = *(a1 + 8);
    void* ebp = *(a2 + 0x800);

    if (!(ebx & 4))
    {
        void* ecx_1 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1d;
        int32_t eax_2 = *(ecx_1 + 0x74);
        *(a1 + 0x14) = eax_2;
        eax_2(a1, a2);
        return;
    }

    if (ebx & 0x10000)
    {
        void* eax_4 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1e;
        int32_t eax_5 = *(eax_4 + 0x78);
        *(a1 + 0x14) = eax_5;
        eax_5(a1, a2);
        return;
    }

    if (ebx & 0x20000)
    {
        void* edx_2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x20;
        int32_t eax_7 = *(edx_2 + 0x80);
        *(a1 + 0x14) = eax_7;
        eax_7(a1, a2);
        return;
    }

    if (*(a2 + 0x538) == 0xc)
    {
        int32_t eax_10 = sub_4d64c0(a2 + 0x68, 0);

        if (*(a2 + 0x53c) == eax_10 && !*(a2 + 0xd19))
        {
            *(a2 + 0xd19) = 1;
            long double st0_1 = sub_4b4770(Level_SetMission_5());
            long double temp0_1 = *(ebp + 0x3da8);
            st0_1 - temp0_1;

            if (*(&((st0_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(st0_1, temp0_1) ? 1 : 0) << 0xa
                | (st0_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                void* eax_15 = *(ebp + 0x3aa8);

                if (eax_15)
                {
                    int32_t* eax_16 = *(eax_15 + 0xc);

                    if (eax_16 && *eax_16)
                    {
                        void* edx_3 = *(ebp + 0x3aa8);
                        int32_t var_8 = *(ebp + 0x3dac);
                        void* var_4_1 = a2;
                        void* ebp_1 = **(edx_3 + 0xc);
                        uint32_t eax_19 = sub_460c40();
                        int32_t edx_4 = 0;
                        edx_4 = *(ebp_1 + 0x1c);
                        int32_t eax_20 = *(((eax_19 * 0x180 + edx_4) << 2) + &g_a96ae0);

                        if (eax_20)
                            eax_20(ebp_1, &var_8);
                    }
                }
            }
        }
    }

    if (!(ebx & 1))
        return;

    int32_t* eax_22 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t eax_23 = *eax_22;
    *(a1 + 0x14) = eax_23;
    eax_23(a1, a2);
}
