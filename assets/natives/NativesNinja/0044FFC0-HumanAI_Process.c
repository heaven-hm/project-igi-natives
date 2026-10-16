#include "0044FFC0-HumanAI_Process.h"
/* 0x0044ffc0 HumanAI_Process full linked: callers=0 callees=11 */
int32_t* sub_44ffc0(void* a1)

{
    int32_t* eax = *(a1 + 0x3e4c);

    if (eax)
    {
        Qtask_UpdateList(eax);
        *(a1 + 0x3e4c) = 0;
    }

    int32_t* eax_1 = *(a1 + 0x3c70);

    if (eax_1)
        Qvm_Cleanup(eax_1);

    int32_t* ecx = *(a1 + 0x3ea0);

    if (ecx)
    {
        int32_t eax_2 = *(a1 + 0x3ea4);
        sub_452c10(ecx, eax_2, eax_2);
    }

    sub_44ff40(a1);
    sub_4500c0(a1);
    void* eax_3 = *(a1 + 0x3ab0);

    if (eax_3)
        sub_453390(eax_3);

    void* eax_4 = *(a1 + 0x3ab4);

    if (eax_4)
        sub_453390(eax_4);

    if (sub_4f1050(a1) >= 0)
    {
        int32_t eax_6 = sub_4f1220();
        int32_t ecx_1 = 0;
        ecx_1 = *(a1 + 0x1c);
        int32_t eax_10 = *(((eax_6 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (eax_10)
            eax_10(a1);
    }

    int32_t* result = *(a1 + 0x8fc);

    for (int32_t* i = *result; i; i = *i)
    {
        sub_450ff0(a1, result);
        result = i;
    }

    result = *(a1 + 0x3a28);

    if (!result)
        return result;

    return sub_489b90(a1 + 0x15f8);
}
