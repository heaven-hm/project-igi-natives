#include "00429540-Missile_Process.h"
/* 0x00429540 Missile_Process full linked: callers=0 callees=15 */
int32_t* Missile_Process(void* a1)

{
    memcpy(a1 + 0x18c, a1 + 0x70, 0x28);
    void* eax = sub_4cec10(a1 + 0x154);
    sub_4f4820(a1);

    if (eax)
    {
        sub_4c48d0(a1, eax);
        sub_4fb700(a1, sub_4ee140(a1 + 0x154));
    }
    else if (*(a1 + 0x154) && *(a1 + 0x155) != 0x2a)
    {
        char* var_118_2 = a1 + 0x154;
        void var_80;
        Game_DataSymbolLoad(&var_80, "Model "%s" not available");
        char* edi_1 = a1 + 0x154;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:0_1 = 0 != *edi_1;
            edi_1 = &edi_1[1];
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t ecx_1 = ~i;
        void var_100;
        int32_t esi_3;
        int32_t edi_3;
        edi_3 = memcpy(&var_100, edi_1 - ecx_1, ecx_1 & 0xfffffffc);
        memcpy(edi_3, esi_3, ecx_1 & 3);
        void* var_124_2 = &var_100;
        Game_DataSymbolLoad(a1 + 0x154, "** %s **");
    }

    *(a1 + 0x730) = *(a1 + 0x740);
    *(a1 + 0x720) = *(a1 + 0x740);
    long double x87_r7_2 = *(a1 + 0x9c);
    long double x87_r6 = *(a1 + 0xa0);
    x87_r6 - x87_r7_2;
    long double x87_r7_3;

    if (!(*(&((x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_3 = *(a1 + 0xa0);
    else
        x87_r7_3 = *(a1 + 0x9c);

    long double x87_r6_1 = *(a1 + 0x98);
    x87_r6_1 - x87_r7_3;
    long double x87_r7_5;

    if (*(&((x87_r6_1 < x87_r7_3 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_6 = *(a1 + 0x9c);
        long double x87_r6_2 = *(a1 + 0xa0);
        x87_r6_2 - x87_r7_6;

        if (!(*(&((x87_r6_2 < x87_r7_6 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_6) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_6 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_5 = *(a1 + 0xa0);
        else
            x87_r7_5 = *(a1 + 0x9c);
    }
    else
        x87_r7_5 = *(a1 + 0x98);

    float var_118_4 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_5;
    sub_4c6940(Level_StartMission_4(), a1, a1 + 0x168, var_118_4);
    int32_t* result = sub_4f4800(a1);
    int32_t* i_1 = *(*(a1 + 0xe8) + 8);

    if (*i_1 && i_1)
    {
        int32_t ecx_6 = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i_1;
            void* eax_10;

            if (!edx_1)
                eax_10 = nullptr;
            else
            {
                int32_t eax_7 = *edx_1;
                int32_t eax_8 = -(eax_7);
                eax_10 = (eax_8 - eax_8) & edx_1;
            }

            *((ecx_6 << 2) + &g_afa6e0) = eax_10;
            g_afa7e0 = ecx_6 + 1;
            uint32_t eax_12 = sub_4f1a70();
            int32_t eax_13 = 0;
            eax_13 = i_1[7];
            result = *(((eax_12 * 0x180 + eax_13) << 2) + &g_a96ae0);

            if (result)
                result = result(i_1, 0);

            ecx_6 = g_afa7e0 - 1;
            g_afa7e0 = ecx_6;
            i_1 = *((ecx_6 << 2) + &g_afa6e0);
        } while (i_1);
    }

    return result;
}
