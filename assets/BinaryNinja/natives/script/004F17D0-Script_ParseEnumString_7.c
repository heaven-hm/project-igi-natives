#include "Script_ParseEnumString_7.h"
int32_t Script_ParseEnumString_7(char* a1)

{
    int32_t objC;
    int32_t v_4 = objC;
    int32_t result = 0;
    char ctxB = 0;
    char i = *a1;
    int32_t objC1 = 1;
    *(&v_4 + 3) = 0;
    char* tmpD = a1;

    if (i == 0x2e)
        goto label_4f1801;

    while (i)
    {
        i = tmpD[1];
        tmpD = &tmpD[1];

        if (i == 0x2e)
            break;
    }

    if (tmpD >= a1)
    {
        ctxB = 0;
    label_4f1801:

        while (true)
        {
            i = tmpD[0xffffffff];
            tmpD -= 1;

            if (i < 0x30 || i > 0x39)
            {
                if (!ctxB)
                    break;

                return result;
            }

            ctxB = 1;
            result += (i - 0x30) * objC1;
            objC1 *= 0xa;

            if (tmpD < a1)
                break;

            continue;
        }
    }

    return 0xffffffff;
}
