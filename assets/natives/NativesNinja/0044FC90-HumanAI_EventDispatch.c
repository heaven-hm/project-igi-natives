#include "0044FC90-HumanAI_EventDispatch.h"
/* 0x0044fc90 HumanAI_EventDispatch full linked: callers=3 callees=5 */
int32_t sub_44fc90(struct ai_ctx* a1, int32_t a2, int32_t a3)

{
    int32_t var_8;
    int32_t* i_2 = &var_8;
    int32_t** var_4 = &i_2;
    g_5bda5c = &i_2;
    g_5bda60 = &a1->pad[(a2 * 3 + 0x1bc) << 2];
    g_5bda64 = a3;
    g_5bda58 = a1;
    void* edx_1 = *(a1 + 0x3c70);
    char ebx = 0;
    var_8 = 0;
    Qvm_Execute(edx_1);
    int32_t eax_2 = sub_4af9b0(&i_2);

    if (eax_2 > 1)
    {
        int32_t eax_3 = sub_450f10(g_5bda58, &i_2);
        eax_3 = 1;
        return eax_3;
    }

    if (eax_2 == 1)
    {
        int32_t* i_1 = i_2;
        int32_t* i = *i_1;

        if (i)
        {
            ebx = 1;

            do
            {
                sub_4af960(i_1);
                eax_2 = sub_450e70(g_5bda58, i_1);
                i_1 = i;
                i = *i;
            } while (i);
        }
    }

    eax_2 = ebx;
    return eax_2;
}
