#include "gi_platform.h"
#include "004FE730-Script_FormatString_31.h"
int32_t* Script_FormatString_31(void* a1, char* a2)

{
    int32_t ctxB;
    int32_t v_4 = ctxB;
    int32_t* result_1 = (*(int32_t*)(uintptr_t)(a1 + 8));

    if (*result_1)
    {
        int32_t* result = result_1;

        if (result)
        {
            while (true)
            {
                int32_t tmpD;
                tmpD = result[7];
                char valA;
                int16_t objC;
                valA = TaskType_IsDerivedFrom(tmpD, g_a7a4fc);

                if (valA)
                {
                    char* srcS1 = a2;
                    char* valA1 = &result[8];
                    int32_t valA3;

                    while (true)
                    {
                        tmpD = *valA1;
                        char ctxB1 = *srcS1;
                        objC = tmpD;
                        bool c_1 = tmpD < ctxB1;

                        if (tmpD == ctxB1)
                        {
                            if (!objC)
                            {
                                valA3 = 0;
                                break;
                            }

                            tmpD = valA1[1];
                            ctxB1 = srcS1[1];
                            objC = tmpD;
                            c_1 = tmpD < ctxB1;

                            if (tmpD == ctxB1)
                            {
                                valA1 = &valA1[2];
                                srcS1 = &srcS1[2];

                                if (objC)
                                    continue;

                                valA3 = 0;
                                break;
                            }
                        }

                        valA3 = valA1 - valA1 + 1;
                        break;
                    }

                    if (!valA3)
                        return result;
                }

                int32_t* result_2 = *result;

                if (!result_2)
                    break;

                if (!*result_2)
                    break;

                result = result_2;

                if (!result)
                    break;
            }
        }
    }

    return 0;
}
