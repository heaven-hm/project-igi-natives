#include "gi_platform.h"
#include "004855F0-StatusMessage_LoadParameters.h"
int32_t* StatusMessage_LoadParameters(long double a1 , int32_t* a2)

{
    int32_t* result;
    result = (*(int32_t*)(uintptr_t)(a2 + 0x1d6));

    if (result)
        a2[0x74] += 1;

    result = a2[0x71];

    if (!result)
    {
    label_485634: ;
        result = a2[0x72] + 0xd2;

        if (*(g_bc2360 + 0x68) > result)
        {
            if ((*(int32_t*)(uintptr_t)(a2 + 0x1c5)) && a2[0x75])
                return QTask_FindType(a2);

            result = Script_FormatString_6(&a2[0x18]);

            if (result)
            {
    label_485682: ;
                if ((*(int32_t*)(uintptr_t)(a2 + 0x1c5)))
                {
    label_4856aa: ;
                    FX_RmS(*(StatusScreen_Get() + 0x4e4), a2);
                    result = g_bc2360;
                    int32_t objC2 = result[0x1a];
                    a2[0x75] = 1;
                    a2[0x72] = objC2;
                }
                else
                {
                    result = Script_SpawnNewTask_7(&a2[0x18], a2);
                    long double f0_1 = 0.0;
                    a1 - f0_1;
                    result = (a1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(a1, f0_1) ? 1 : 0) << 0xa
                        | (a1 == f0_1 ? 1 : 0) << 0xe | 0x800;

                    if (!(*(&result + 1) & 0x40))
                        goto label_4856aa;
                }
            }
            else
            {
                result = (*(int32_t*)(uintptr_t)(a2 + 0x1c5));

                if (result)
                    goto label_485682;
            }
        }
    }
    else
    {
        result = a2[0x75];

        if (!result)
            goto label_485634;

        result = (*(int32_t*)(uintptr_t)(a2 + 0x1c5));

        if (result)
            goto label_485634;
    }

    return result;
}
