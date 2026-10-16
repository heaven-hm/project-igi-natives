#include "004855F0-StatusMessage_LoadParameters.h"
/* 0x004855f0 StatusMessage_LoadParameters full linked: callers=0 callees=5 */
int32_t* sub_4855f0(long double a1 @ st0, int32_t* a2)

{
    int32_t* result;
    result = *(a2 + 0x1d6);

    if (result)
        a2[0x74] += 1;

    result = a2[0x71];

    if (!result)
    {
    label_485634:
        result = a2[0x72] + 0xd2;

        if (*(g_bc2360 + 0x68) > result)
        {
            if (*(a2 + 0x1c5) && a2[0x75])
                return QTask_FindType(a2);

            result = sub_4f16c0(&a2[0x18]);

            if (result)
            {
            label_485682:

                if (*(a2 + 0x1c5))
                {
                label_4856aa:
                    sub_486650(*(StatusScreen_Get() + 0x4e4), a2);
                    result = g_bc2360;
                    int32_t ecx_2 = result[0x1a];
                    a2[0x75] = 1;
                    a2[0x72] = ecx_2;
                }
                else
                {
                    result = sub_4f16e0(&a2[0x18], a2);
                    long double temp0_1 = 0.0;
                    a1 - temp0_1;
                    result = (a1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(a1, temp0_1) ? 1 : 0) << 0xa
                        | (a1 == temp0_1 ? 1 : 0) << 0xe | 0x800;

                    if (!(*(&result + 1) & 0x40))
                        goto label_4856aa;
                }
            }
            else
            {
                result = *(a2 + 0x1c5);

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

        result = *(a2 + 0x1c5);

        if (result)
            goto label_485634;
    }

    return result;
}
