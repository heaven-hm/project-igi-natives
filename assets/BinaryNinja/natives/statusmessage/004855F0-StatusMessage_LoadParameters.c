// Original IGI.EXE function: StatusMessage_LoadParameters (VA 0x004855F0; static CFG gate PASS, CFG score 1.000).
#include "StatusMessage_LoadParameters.h"
int32_t* StatusMessage_LoadParameters(long double context , int32_t* param_2)

{
    int32_t* result;
    result = *(param_2 + 0x1d6);

    if (result)
        param_2[0x74] += 1;

    result = param_2[0x71];

    if (!result)
    {
    label_485634:
        result = param_2[0x72] + 0xd2;

        if (*(g_bc2360 + 0x68) > result)
        {
            if (*(param_2 + 0x1c5) && param_2[0x75])
                return QTask_FindType(param_2);

            result = Script_FormatString_6(&param_2[0x18]);

            if (result)
            {
            label_485682:

                if (*(param_2 + 0x1c5))
                {
                label_4856aa:
                    FX_RmS(*(StatusScreen_Get() + 0x4e4), param_2);
                    result = g_bc2360;
                    int32_t entity_2 = result[0x1a];
                    param_2[0x75] = 1;
                    param_2[0x72] = entity_2;
                }
                else
                {
                    result = Script_SpawnNewTask_7(&param_2[0x18], param_2);
                    long double f0_1 = 0.0;
                    context - f0_1;
                    result = (context < f0_1 ? 1 : 0) << 8 | (FCMP_UO(context, f0_1) ? 1 : 0) << 0xa
                        | (context == f0_1 ? 1 : 0) << 0xe | 0x800;

                    if (!(*(&result + 1) & 0x40))
                        goto label_4856aa;
                }
            }
            else
            {
                result = *(param_2 + 0x1c5);

                if (result)
                    goto label_485682;
            }
        }
    }
    else
    {
        result = param_2[0x75];

        if (!result)
            goto label_485634;

        result = *(param_2 + 0x1c5);

        if (result)
            goto label_485634;
    }

    return result;
}
