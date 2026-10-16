#include "QTask_QtaskTypeSNotDefined.h"
int32_t QTask_QtaskTypeSNotDefined(char* a1)

{
    int32_t flagP = 0;
    char* dstD = &g_af5f05;

    while (true)
    {
        if (*dstD)
        {
            char* srcS1 = a1;
            char* valA1 = QTask_RegisterEventCallback_2(flagP);
            int32_t result;

            while (true)
            {
                char tmpD1 = *valA1;
                char f0_1 = *srcS1;
                bool c_1 = tmpD1 < f0_1;

                if (tmpD1 == f0_1)
                {
                    if (!tmpD1)
                    {
                        result = 0;
                        break;
                    }

                    tmpD1 = valA1[1];
                    char f3_1 = srcS1[1];
                    c_1 = tmpD1 < f3_1;

                    if (tmpD1 == f3_1)
                    {
                        valA1 = &valA1[2];
                        srcS1 = &srcS1[2];

                        if (tmpD1)
                            continue;

                        result = 0;
                        break;
                    }
                }

                result = valA1 - valA1 + 1;
                break;
            }

            if (!result)
            {
                result = flagP;
                return result;
            }
        }

        dstD = &dstD[0x30];
        flagP += 1;

        if (dstD >= 0xafa705)
            break;
    }

    char* v_14_2 = a1;
    Error_Show("QTask type "%s" not defined");

    while (true)
        /* nop */
}
