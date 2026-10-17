// Original IGI.EXE function: Camera_ApplyPostProcess_20 (VA 0x004AA6AE; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_20.h"
void* Camera_ApplyPostProcess_20(int32_t* context)

{
    int32_t data_5 = g_c3242c;
    int32_t* source_val = context;

    if (data_5 == 3)
    {
        if (source_val <= g_c321fc)
        {
            void* data_val = Camera_ApplyPostProcess_21(source_val);

            if (data_val)
                return data_val;
        }

        goto label_4aa706;
    }

    void* dwBytes;

    if (data_5 != 2)
    {
    label_4aa706:

        if (!source_val)
            source_val = 1;

        dwBytes = (source_val + 0xf) & 0xfffffff0;
    }
    else
    {
        dwBytes = !context ? 0x10 : (context + 0xf) & 0xfffffff0;

        if (dwBytes <= g_5466d4)
        {
            void* data_4 = Camera_ApplyWideScreen_22(dwBytes >> 4);

            if (data_4)
                return data_4;
        }
    }

    return HeapAlloc(g_c32428, HEAP_NONE, dwBytes);
}
