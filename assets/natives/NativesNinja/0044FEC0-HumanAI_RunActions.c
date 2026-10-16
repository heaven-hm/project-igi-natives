#include "0044FEC0-HumanAI_RunActions.h"
/* 0x0044fec0 HumanAI_RunActions full linked: callers=1 callees=2 */
int32_t* sub_44fec0(void* a1)

{
    char edx = 0;
    int32_t* i_1 = *(a1 + 0x8fc);
    int32_t* i;

    for (i = *i_1; i; i = *i)
    {
        if (i_1[6])
            return i_1[6](a1, i_1, a1, 0xffffffff, "Action pushed by: %s",
                (&g_53ca38)[*(a1 + (i_1[2] << 2) + 0x81c)]);

        int32_t ecx_2 = i_1[3];

        if (ecx_2 && !edx)
        {
            edx = 1;
            i_1[3] = ecx_2 - 1;
        }

        i_1 = i;
    }

    char* var_c = "No items on actionstack was run";
    int32_t var_10 = 0xffffffff;
    void* var_14 = a1;
    return i;
}
