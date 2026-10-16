#include "00447830-Door_Process.h"
/* 0x00447830 Door_Process full linked: callers=0 callees=21 */
int32_t* sub_447830(uint32_t a1, char* a2)

{
    char* edi = a1 + 0x148;
    void* eax = sub_4cec10(edi);

    if (!eax && edi && *(a1 + 0x149) != 0x2a)
    {
        char* var_114_1 = edi;
        void var_80;
        Game_DataSymbolLoad(&var_80, "Model "%s" not available");
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:0_1 = 0 != *edi;
            edi = &edi[1];
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t ecx_1 = ~i;
        void var_100;
        int32_t esi_2;
        int32_t edi_2;
        edi_2 = memcpy(&var_100, edi - ecx_1, ecx_1 & 0xfffffffc);
        memcpy(edi_2, esi_2, ecx_1 & 3);
        void* var_120_1 = &var_100;
        Game_DataSymbolLoad(a1 + 0x148, "** %s **");
    }

    sub_4c48d0(a1, eax);
    sub_446290(a1);
    memcpy(a1 + 0x70, a1 + 0x110, 0x28);
    char* edi_6 = a2;

    if (edi_6 && *edi_6)
    {
        memcpy(a1 + 0x2c8, a1 + 0x20, 0x18);
        memcpy(a1 + 0x29c, a1 + 0x110, 0x28);
        edi_6 = a2;
    }

    sub_4f1400(a1 + 0x1a0, a1);
    sub_4f1400(a1 + 0x1f0, a1);
    sub_4f1400(a1 + 0x240, a1);
    long double x87_r7 = *(a1 + 0x10c);
    long double x87_r6 = *(a1 + 0x108);
    *(a1 + 0x19a) = 1;
    *(a1 + 0x19c) = 1;
    *(a1 + 0x199) = 0;
    *(a1 + 0x290) = 0;
    *(a1 + 0x19b) = 0;
    long double x87_r7_1 = sqrtl(x87_r6 * x87_r6 + x87_r7 * x87_r7);
    long double temp0 = 0f;
    x87_r7_1 - temp0;

    if (*(&((x87_r7_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_1 = -(x87_r7_1);

    *(a1 + 0x194) = x87_r7_1;
    sub_4474e0(a1);
    void* eax_7 = *(a1 + 0x2e0);

    if (eax_7)
    {
        sub_4e6c00(eax_7);
        *(a1 + 0x2e0) = 0;
    }

    int32_t* eax_8 = *(a1 + 0xe8);

    if (eax_8)
        QTask_FindType(eax_8);

    struct status_msg* eax_9 = sub_4e0930(nullptr, a1);
    *(a1 + 0xe8) = eax_9;
    int32_t* result = sub_4c4950(eax_9, a1, a1);
    int32_t* i_1 = *(a1 + 8);

    if (*i_1 && i_1)
    {
        int32_t ecx_6 = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i_1;
            void* eax_13;

            if (!edx_1)
                eax_13 = nullptr;
            else
            {
                int32_t eax_10 = *edx_1;
                int32_t eax_11 = -(eax_10);
                eax_13 = (eax_11 - eax_11) & edx_1;
            }

            *((ecx_6 << 2) + &g_afa6e0) = eax_13;
            g_afa7e0 = ecx_6 + 1;
            uint32_t eax_15 = sub_4f1a70();
            int32_t eax_16 = 0;
            eax_16 = i_1[7];
            result = *(((eax_15 * 0x180 + eax_16) << 2) + &g_a96ae0);

            if (result)
                result = result(i_1, edi_6);

            ecx_6 = g_afa7e0 - 1;
            g_afa7e0 = ecx_6;
            i_1 = *((ecx_6 << 2) + &g_afa6e0);
        } while (i_1);
    }

    memcpy(a1 + 0x2c8, a1 + 0x20, 0x18);
    memcpy(a1 + 0x29c, a1 + 0x70, 0x28);
    return result;
}
