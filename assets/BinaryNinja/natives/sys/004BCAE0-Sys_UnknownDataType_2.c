#include "Sys_UnknownDataType_2.h"
int32_t Sys_UnknownDataType_2(char* a1, int32_t a2, float a3, int32_t a4, int32_t a5)

{
    float srcS = a3;
    void* valA = *(srcS + 0xc);
    int32_t result = 0;
    int32_t objC = *(valA + 0x18);
    int32_t flagP = *(valA + 0x14);
    int32_t dstD = *(valA + 0x1c);
    *(valA + 0x14) = *(*(srcS + 0x10) + (a4 << 2));
    Sys_ExecuteBytecode_28(*(srcS + 0xc));
    char* valA2 = *(srcS + 0xc);

    if (*(valA2 + 0x1c) < dstD && !*(valA2 + 0x20))
    {
        if (a5 == 1)
        {
            if (Sys_CloseFileStream_28(valA2, &a4, &a3))
            {
                *a1 = a4;
                result = 1;
            }
        }
        else if (a5 == 2)
        {
            if (Sys_CloseFileStream_28(valA2, &a4, &a3))
            {
                *a1 = a3;
                result = 1;
            }
        }
        else
        {
            char* v_c;
            int32_t v_4;

            if (a5 == 3)
            {
                if (Sys_FreeMemory_28(valA2, &v_c, &v_4, 3))
                {
                    Camera_ApplyLineFilter_5(a1, v_c, a2 - 1);
                    a1[a2 - 1] = 0;
                    result = 1;
                }
            }
            else
            {
                Error_Show("Unknown data type.");

                while (true)
                    /* nop */
            }
        }
    }

    *(*(srcS + 0xc) + 0x14) = flagP;
    *(*(srcS + 0xc) + 0x1c) = dstD;
    *(*(srcS + 0xc) + 0x18) = objC;
    return result;
}
