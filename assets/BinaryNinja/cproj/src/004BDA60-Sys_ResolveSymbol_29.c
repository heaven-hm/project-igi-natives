#include "gi_platform.h"
#include "004BDA60-Sys_ResolveSymbol_29.h"
void* Sys_ResolveSymbol_29(int32_t a1)

{
    int32_t* srcS = a1;
    Sys_ExecuteBytecode_29(srcS);
    float v_18;
    int32_t dstD = Sys_CloseFileStream_28(srcS, &a1, &v_18);
    char* v_10;

    if (dstD)
    {
    label_4bdab2: ;
        int32_t* v_14;

        if (Sys_OpenFileStream_28(srcS, &v_14))
        {
            int32_t* valA3 = v_14;

            if (*valA3)
            {
                int32_t tmpD8 = srcS[5];
                srcS[8] = 8;
                srcS[4] = tmpD8;
                return Sys_DispatchOpcode_29(srcS);
            }

            int32_t objC1 = valA3[1];

            if (objC1 == 1)
            {
                int32_t objC5;

                if (dstD == objC1)
                {
                    int32_t objC2 = valA3[3];

                    if (objC2 == 1)
                    {
                        *valA3[6] = a1;
                        objC5 = a1;
                    }
                    else
                    {
                        int32_t* tmpD = valA3[6];

                        if (objC2 == 2)
                        {
                            *tmpD = a1;
                            objC5 = a1;
                        }
                        else
                        {
                            *tmpD = a1;
                            objC5 = a1;
                        }
                    }

                    goto label_4bdb12;
                }

                if (dstD == 2)
                {
                    *valA3[6] = v_18;
                    objC5 = v_18;
    label_4bdb12: ;
                    Sys_PushStack_29(srcS, objC5);
                    int32_t valA8 = srcS[5] + 1;
                    srcS[5] = valA8;
                    return valA8;
                }
            }
            else if (objC1 == 2)
            {
                if (dstD == 1)
                {
                    int32_t v_24_3 = objC1;
                    *valA3[6] = a1;
                    Sys_PopStack_29(srcS, a1);
                    int32_t valA11 = srcS[5] + 1;
                    srcS[5] = valA11;
                    return valA11;
                }

                if (dstD == 2)
                {
                    *valA3[6] = v_18;
                    Sys_PopStack_29(srcS, v_18);
                    int32_t valA14 = srcS[5] + 1;
                    srcS[5] = valA14;
                    return valA14;
                }
            }
            else if (objC1 == 3 && dstD == objC1)
            {
                Camera_ApplyLineFilter_5(valA3[6], v_10, valA3[3] - 1);
                int32_t* valA15 = v_14;
                *(valA15[6] + valA15[3] - 1) = 0;
                Sys_ReadFileBlock_28(srcS, v_14[6], 3);
                int32_t valA18 = srcS[5] + 1;
                srcS[5] = valA18;
                return valA18;
            }
        }
    }
    else
    {
        int32_t v_c;
        int32_t valA1 = Sys_FreeMemory_28(srcS, &v_10, &v_c, 3);
        int32_t dstD2 = -(valA1);
        dstD = (dstD2 - dstD2) & 3;

        if (dstD)
            goto label_4bdab2;
    }
    void* valA21 = srcS[8];

    if (valA21)
        return valA21;

    int32_t valA20 = srcS[5];
    srcS[8] = 0xb;
    srcS[4] = valA20;
    return Sys_DispatchOpcode_29(srcS);
}
