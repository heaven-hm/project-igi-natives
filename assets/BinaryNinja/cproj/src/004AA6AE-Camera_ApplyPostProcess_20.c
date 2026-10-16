#include "gi_platform.h"
#include "004AA6AE-Camera_ApplyPostProcess_20.h"
void* Camera_ApplyPostProcess_20(int32_t* a1)

{
    int32_t valA5 = g_c3242c;
    int32_t* srcS = a1;

    if (valA5 == 3)
    {
        if (srcS <= g_c321fc)
        {
            void* valA = Camera_ApplyPostProcess_21(srcS);

            if (valA)
                return valA;
        }

        goto label_4aa706;
    }

    void* dwBytes;

    if (valA5 != 2)
    {
    label_4aa706: ;
        if (!srcS)
            srcS = 1;

        dwBytes = (srcS + 0xf) & 0xfffffff0;
    }
    else
    {
        dwBytes = !a1 ? 0x10 : (a1 + 0xf) & 0xfffffff0;

        if (dwBytes <= g_5466d4)
        {
            void* valA4 = Camera_ApplyWideScreen_22(dwBytes >> 4);

            if (valA4)
                return valA4;
        }
    }

    return HeapAlloc(g_c32428, HEAP_NONE, dwBytes);
}
