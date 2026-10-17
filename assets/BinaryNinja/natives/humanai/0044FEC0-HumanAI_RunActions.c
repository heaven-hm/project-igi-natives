// Original IGI.EXE function: HumanAI_RunActions (VA 0x0044FEC0; static CFG gate PASS, CFG score 1.000).
#include "HumanAI_RunActions.h"
int32_t* HumanAI_RunActions(void* a1)

{
    char tmpD = 0;
    int32_t* i_1 = *(a1 + 0x8fc);
    int32_t* i;

    for (i = *i_1; i; i = *i)
    {
        if (i_1[6])
            return i_1[6](a1, i_1, a1, 0xffffffff, "Action pushed by: %s",
                (&g_53ca38)[*(a1 + (i_1[2] << 2) + 0x81c)]);

        int32_t objC2 = i_1[3];

        if (objC2 && !tmpD)
        {
            tmpD = 1;
            i_1[3] = objC2 - 1;
        }

        i_1 = i;
    }

    char* v_c = "No items on actionstack was run";
    int32_t v_10 = 0xffffffff;
    void* v_14 = a1;
    return i;
}
