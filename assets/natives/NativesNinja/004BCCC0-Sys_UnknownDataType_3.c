#include "004BCCC0-Sys_UnknownDataType_3.h"
/* 0x004bccc0 Sys_UnknownDataType_3 full linked: callers=5 callees=1 */
int32_t sub_4bccc0(void* a1, int32_t* a2, int32_t* a3, int32_t* a4)

{
    if (a4)
        *a4 = *(*(a1 + 0x28) + (*(a1 + 0x1c) << 2));

    int32_t ecx_1 = *(*(a1 + 0x28) + (*(a1 + 0x1c) << 2));
    int32_t ecx_4;
    int32_t edx_7;

    if (ecx_1 == 1 || ecx_1 == 2 || ecx_1 == 5)
    {
    label_4bcd1a:

        if (a2)
            *a2 = *(*(a1 + 0x24) + (*(a1 + 0x18) << 2));

        int32_t edx_6 = *(a1 + 0x18);
        ecx_4 = 4;
        *(a1 + 0x1c) += 1;
        edx_7 = edx_6 + 1;
    }
    else
    {
        int32_t* ecx_2;

        if (ecx_1 != 3)
        {
            if (ecx_1 == 4)
            {
                ecx_2 = a2;

                if (!ecx_2)
                    goto label_4bcd52;

                goto label_4bcd50;
            }

            if (ecx_1 == 6)
                goto label_4bcd1a;

            if (ecx_1 == 7)
            {
                ecx_2 = a2;

                if (!ecx_2)
                    goto label_4bcd52;

                goto label_4bcd50;
            }

            Error_Show("Unknown data type.");

            while (true)
                /* nop */
        }
        else
        {
            ecx_2 = a2;

            if (!ecx_2)
                goto label_4bcd52;

        label_4bcd50:
            *ecx_2 = *(a1 + 0x24) + (*(a1 + 0x18) << 2) + 4;
        label_4bcd52:
            int32_t edx_10 = *(a1 + 0x18);
            int32_t ecx_5 = *(a1 + 0x24);
            ecx_4 = *(ecx_5 + (edx_10 << 2)) + 1;
            *(a1 + 0x1c) += 1;
            edx_7 = edx_10 + *(ecx_5 + (edx_10 << 2)) + 1;
        }
    }

    *(a1 + 0x18) = edx_7;

    if (a3)
        *a3 = ecx_4;

    return 1;
}
