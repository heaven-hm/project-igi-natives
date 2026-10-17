// Original IGI.EXE function: Sys_UnknownDataType_3 (VA 0x004BCCC0; static CFG gate PASS, CFG score 1.000).
#include "Sys_UnknownDataType_3.h"
int32_t Sys_UnknownDataType_3(void* a1, int32_t* a2, int32_t* a3, int32_t* a4)

{
    if (a4)
        *a4 = *(*(a1 + 0x28) + (*(a1 + 0x1c) << 2));

    int32_t objC1 = *(*(a1 + 0x28) + (*(a1 + 0x1c) << 2));
    int32_t objC4;
    int32_t tmpD7;

    if (objC1 == 1 || objC1 == 2 || objC1 == 5)
    {
    label_4bcd1a:

        if (a2)
            *a2 = *(*(a1 + 0x24) + (*(a1 + 0x18) << 2));

        int32_t tmpD6 = *(a1 + 0x18);
        objC4 = 4;
        *(a1 + 0x1c) += 1;
        tmpD7 = tmpD6 + 1;
    }
    else
    {
        int32_t* objC2;

        if (objC1 != 3)
        {
            if (objC1 == 4)
            {
                objC2 = a2;

                if (!objC2)
                    goto label_4bcd52;

                goto label_4bcd50;
            }

            if (objC1 == 6)
                goto label_4bcd1a;

            if (objC1 == 7)
            {
                objC2 = a2;

                if (!objC2)
                    goto label_4bcd52;

                goto label_4bcd50;
            }

            Error_Show("Unknown data type.");

            while (true)
                /* nop */
        }
        else
        {
            objC2 = a2;

            if (!objC2)
                goto label_4bcd52;

        label_4bcd50:
            *objC2 = *(a1 + 0x24) + (*(a1 + 0x18) << 2) + 4;
        label_4bcd52:
            int32_t tmpD10 = *(a1 + 0x18);
            int32_t objC5 = *(a1 + 0x24);
            objC4 = *(objC5 + (tmpD10 << 2)) + 1;
            *(a1 + 0x1c) += 1;
            tmpD7 = tmpD10 + *(objC5 + (tmpD10 << 2)) + 1;
        }
    }

    *(a1 + 0x18) = tmpD7;

    if (a3)
        *a3 = objC4;

    return 1;
}
