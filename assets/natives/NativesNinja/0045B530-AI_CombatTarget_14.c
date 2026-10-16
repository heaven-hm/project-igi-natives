#include "0045B530-AI_CombatTarget_14.h"
/* 0x0045b530 AI_CombatTarget_14 full linked: callers=0 callees=4 */
int32_t* sub_45b530(void* a1, void* a2)

{
    int32_t ebx = *(a1 + 8);
    void* ebp = *(a2 + 0x800);

    if (!(ebx & 4))
    {
        void* ecx = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1d;
        int32_t eax_1 = *(ecx + 0x74);
        *(a1 + 0x14) = eax_1;
        return eax_1(a1, a2);
    }

    if (ebx & 0x10000)
    {
        void* eax_3 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1e;
        int32_t eax_4 = *(eax_3 + 0x78);
        *(a1 + 0x14) = eax_4;
        return eax_4(a1, a2);
    }

    if (ebx & 0x20000)
    {
        void* edx_2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x20;
        int32_t eax_6 = *(edx_2 + 0x80);
        *(a1 + 0x14) = eax_6;
        return eax_6(a1, a2);
    }

    int32_t* result = sub_4d64c0(a2 + 0x68, 0);

    if (*(a2 + 0x53c) == result && *(a2 + 0x538) == 0xc)
    {
        result = *(a2 + 0xd19);

        if (!result)
        {
            *(a2 + 0xd19) = 1;
            long double st0_1;
            st0_1 = sub_4b4770(Level_SetMission_5());
            long double temp0_1 = *(ebp + 0x3da8);
            st0_1 - temp0_1;
            result = (st0_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(st0_1, temp0_1) ? 1 : 0) << 0xa
                | (st0_1 == temp0_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 0x41)
            {
                result = *(ebp + 0x3aa8);

                if (result)
                {
                    result = result[3];

                    if (result && *result)
                    {
                        void* edx_3 = *(ebp + 0x3aa8);
                        int32_t var_8 = *(ebp + 0x3dac);
                        void* var_4_1 = a2;
                        void* ebp_1 = **(edx_3 + 0xc);
                        uint32_t eax_12 = sub_460c40();
                        int32_t edx_4 = 0;
                        edx_4 = *(ebp_1 + 0x1c);
                        result = *(((eax_12 * 0x180 + edx_4) << 2) + &g_a96ae0);

                        if (result)
                            result = result(ebp_1, &var_8);
                    }
                }
            }
        }
    }

    if (!(ebx & 1))
        return result;

    int32_t* eax_13 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t eax_14 = *eax_13;
    *(a1 + 0x14) = eax_14;
    return eax_14(a1, a2);
}
