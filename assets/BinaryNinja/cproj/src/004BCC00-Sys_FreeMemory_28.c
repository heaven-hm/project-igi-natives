#include "gi_platform.h"
#include "004BCC00-Sys_FreeMemory_28.h"
int32_t Sys_FreeMemory_28(char* a1, int32_t* a2, int32_t* a3, int32_t* a4)

{
    char* srcS = a1;

    if ((*(int32_t*)(uintptr_t)(*(srcS + 0x28) + (*(srcS + 0x1c) << 2))) == a4)
    {
        Sys_UnknownDataType_3(srcS, a2, &a1, nullptr);
        int32_t dstD2 = *a2;
        int32_t i = 0xffffffff;
        a1 = (*(int32_t*)(uintptr_t)(*(srcS + 0x24) + (*(srcS + 0x18) << 2)));

        while (i)
        {
            bool cond_0_1 = 0 != *dstD2;
            dstD2 += 1;
            i -= 1;

            if (!cond_0_1)
                break;
        }

        *a3 = ~i;
        return 1;
    }

    if (Sys_OpenFileStream_28(srcS, &a4))
    {
        int32_t* objC3 = a4;
        int32_t valA5 = *objC3;

        if (!valA5 || valA5 == 2)
        {
            if (objC3[1] == 3)
            {
                int32_t dstD3 = objC3[6];
                *a2 = dstD3;
                int32_t i_1 = 0xffffffff;

                while (i_1)
                {
                    bool cond_1_1 = 0 != *dstD3;
                    dstD3 += 1;
                    i_1 -= 1;

                    if (!cond_1_1)
                        break;
                }

                *a3 = ~i_1;
            }

            return 1;
        }
    }

    *a2 = 0;
    *a3 = 0;
    return 0;
}
