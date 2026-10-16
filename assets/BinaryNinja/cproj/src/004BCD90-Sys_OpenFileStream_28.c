#include "gi_platform.h"
#include "004BCD90-Sys_OpenFileStream_28.h"
int32_t Sys_OpenFileStream_28(char* a1, int32_t* a2)

{
    char* srcS = a1;
    int32_t* valA1 = (*(int32_t*)(uintptr_t)(*(srcS + 0x28) + (*(srcS + 0x1c) << 2)));

    if (valA1 == 6)
    {
        Sys_UnknownDataType_3(srcS, a2, nullptr, nullptr);
        return 1;
    }

    if (valA1 == 4)
    {
        int32_t saved_ctx;
        Sys_FreeMemory_28(srcS, &a1, &saved_ctx, valA1);

        if (Sys_ReadFileBlock_25(a1, a2))
            return 1;

        char* tmpD3 = a1;
        int32_t objC1 = (*(int32_t*)(uintptr_t)(srcS + 0x14));
        (*(int32_t*)(uintptr_t)(srcS + 0x20)) = 7;
        (*(int32_t*)(uintptr_t)(srcS + 0x10)) = objC1;
        Sys_ReadFileBlock_28(srcS, tmpD3, 4);
        char* dstD1 = a1;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_0_1 = 0 != *dstD1;
            dstD1 = &dstD1[1];
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t objC2 = ~i;
        int32_t srcS2;
        int32_t dstD4;
        dstD4 = memcpy(&srcS[0x68], dstD1 - objC2, objC2 & 0xfffffffc);
        memcpy(dstD4, srcS2, objC2 & 3);
    }

    return 0;
}
