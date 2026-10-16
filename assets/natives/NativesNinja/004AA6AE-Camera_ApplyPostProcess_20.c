#include "004AA6AE-Camera_ApplyPostProcess_20.h"
/* 0x004aa6ae Camera_ApplyPostProcess_20 full linked: callers=1 callees=3 */
void* sub_4aa6ae(int32_t* a1)

{
    int32_t eax_5 = g_c3242c;
    int32_t* esi = a1;

    if (eax_5 == 3)
    {
        if (esi <= g_c321fc)
        {
            void* eax = sub_4ab0e4(esi);

            if (eax)
                return eax;
        }

        goto label_4aa706;
    }

    void* dwBytes;

    if (eax_5 != 2)
    {
    label_4aa706:

        if (!esi)
            esi = 1;

        dwBytes = (esi + 0xf) & 0xfffffff0;
    }
    else
    {
        dwBytes = !a1 ? 0x10 : (a1 + 0xf) & 0xfffffff0;

        if (dwBytes <= g_5466d4)
        {
            void* eax_4 = sub_4ab891(dwBytes >> 4);

            if (eax_4)
                return eax_4;
        }
    }

    return HeapAlloc(g_c32428, HEAP_NONE, dwBytes);
}
