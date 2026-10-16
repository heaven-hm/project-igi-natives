#include "0043EC80-GenericPhysicsObj_Process.h"
/* 0x0043ec80 GenericPhysicsObj_Process full linked: callers=0 callees=13 */
int32_t GenericPhysicsObj_Process(void* a1)

{
    memcpy(a1 + 0x70, a1 + 0x18c, 0x28);
    void* eax = sub_4cec10(a1 + 0x154);

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
        int32_t esi_2;
        int32_t edi_3;
        edi_3 = memcpy(&var_100, edi_1 - ecx_1, ecx_1 & 0xfffffffc);
        memcpy(edi_3, esi_2, ecx_1 & 3);
        void* var_124_2 = &var_100;
        Game_DataSymbolLoad(a1 + 0x154, "** %s **");
    }

    *(a1 + 0x108) = *(a1 + 0x180);
    *(a1 + 0x10c) = *(a1 + 0x184);
    *(a1 + 0x110) = *(a1 + 0x188);
    sub_4ecdb0(a1 + 0xf0);
    long double x87_r7 = *(a1 + 0x9c);
    long double x87_r6 = *(a1 + 0xa0);
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(a1 + 0xa0);
    else
        x87_r7_1 = *(a1 + 0x9c);

    long double x87_r6_1 = *(a1 + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(a1 + 0x9c);
        long double x87_r6_2 = *(a1 + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(a1 + 0xa0);
        else
            x87_r7_3 = *(a1 + 0x9c);
    }
    else
        x87_r7_3 = *(a1 + 0x98);

    float var_118_5 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_3;
    return sub_4c6940(Level_StartMission_4(), a1, a1 + 0x168, var_118_5);
}
