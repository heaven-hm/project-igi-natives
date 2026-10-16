#include "DynObj_ParseConfigFile_13.h"
int32_t* DynObj_ParseConfigFile_13(char* a1)

{
    int32_t* valA = g_a4ec60;
    int32_t* ctxB = *valA;

    if (ctxB)
    {
        while (true)
        {
            int32_t* result = valA[0xa];
            int32_t* result_1 = *result;

            if (result_1)
            {
                while (true)
                {
                    char* srcS1 = result[2];
                    char* objC1 = a1;
                    int32_t objC3;

                    while (true)
                    {
                        char valA1 = *objC1;
                        char f0_1 = *srcS1;
                        bool c_1 = valA1 < f0_1;

                        if (valA1 == f0_1)
                        {
                            if (!valA1)
                            {
                                objC3 = 0;
                                break;
                            }

                            valA1 = objC1[1];
                            char f3_1 = srcS1[1];
                            c_1 = valA1 < f3_1;

                            if (valA1 == f3_1)
                            {
                                objC1 = &objC1[2];
                                srcS1 = &srcS1[2];

                                if (valA1)
                                    continue;

                                objC3 = 0;
                                break;
                            }
                        }

                        objC3 = objC1 - objC1 + 1;
                        break;
                    }

                    if (!objC3)
                        return result;

                    result = result_1;
                    result_1 = *result_1;

                    if (!result_1)
                        break;
                }
            }

            valA = ctxB;
            ctxB = *ctxB;

            if (!ctxB)
                break;
        }
    }

    return 0;
}
