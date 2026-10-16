#include "gi_platform.h"
#include "004BB110-Sys_ExecuteBytecode_26.h"
char* Sys_ExecuteBytecode_26(int32_t a1, void* a2)

{
    char* result = nullptr;
    char* srcS = a2 + 1;

    if ((*(int32_t*)(uintptr_t)(a2 + 1)) == 0x22)
    {
        *a1 = 0;
        return 0;
    }

    int32_t ctxB;
    int32_t v_8 = ctxB;
    char i;

    do
    {
        i = *srcS;

        if (i != 0x5c)
            result[a1] = i;
        else
        {
            char ctxB1 = srcS[1];
            srcS = &srcS[1];
            int32_t objC = ctxB1;

            if (objC == 0x6e)
                result[a1] = 0xa;
            else if (objC == 0x72)
                result[a1] = 0xd;
            else if (objC == 0x74)
                result[a1] = 9;
            else
                result[a1] = ctxB1;
        }

        i = srcS[1];
        result = &result[1];
        srcS = &srcS[1];
    } while (i != 0x22);
    result[a1] = 0;
    return result;
}
