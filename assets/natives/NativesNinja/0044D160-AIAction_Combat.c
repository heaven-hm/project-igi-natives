#include "0044D160-AIAction_Combat.h"
/* 0x0044d160 AIAction_Combat full linked: callers=0 callees=4 */
int32_t AIAction_Combat(int32_t a1, float a2 @ 0xc)

// Sig: void AIAction_Combat(int param)
// Note: Orders the AI into COMBAT behaviour vs its current enemy. Param: param
// = combat argument from the calling script (retail guard scripts pass their
// combat target/context value). Use in AIEVENT_COMBAT branches.
{
    int32_t* eax = sub_451030(g_5bda58);
    int32_t eax_1 = sub_4b8a20(a2, 0);
    int32_t edx = g_5bda60;
    eax[0xa] = 1;
    eax[2] = edx;
    *(eax + 0x29) = 0;
    eax[9] = 0;
    int32_t ecx_2 = *(g_5bda58 + 0x3d38);

    if (ecx_2 <= 0x1c)
    {
        int32_t edx_1 = 0;
        edx_1 = lookup_table_44d23c[ecx_2];

        switch (edx_1)
        {
            case 0:
            {
                sub_450e10(sub_48cb40, eax, eax_1);
                break;
            }
            case 1:
            {
                sub_450e10(sub_48d2c0, eax, eax_1);
                break;
            }
            case 2:
            {
                sub_450e10(sub_48d000, eax, eax_1);
                break;
            }
            case 3:
            {
                sub_450e10(sub_48ac60, eax, eax_1);
                break;
            }
            case 4:
            {
                sub_450e10(sub_48aba0, eax, eax_1);
                break;
            }
        }
    }

    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
