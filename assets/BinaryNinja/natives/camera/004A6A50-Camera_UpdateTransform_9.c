// Original IGI.EXE function: Camera_UpdateTransform_9 (VA 0x004A6A50; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateTransform_9.h"
void __fastcall Camera_UpdateTransform_9(void** context)

{
    void** item_8 = context;
    int32_t* lpMem_1;
    int32_t* lpMem = lpMem_1;

    if (!lpMem)
        return;

    int32_t data_1 = g_c3242c;

    if (data_1 != 3)
    {
        char* data_3;

        if (data_1 == 2)
            data_3 = Camera_ApplyBandFilter_22(lpMem, &item_8, &lpMem_1);

        if (data_1 != 2 || !data_3)
            HeapFree(g_c32428, HEAP_NONE, lpMem);
        else
            Camera_ApplyHandiCam_22(item_8, lpMem_1, data_3);
    }
    else
    {
        int32_t* data_2 = Camera_ApplyHandiCam_21(lpMem);

        if (!data_2)
            HeapFree(g_c32428, HEAP_NONE, lpMem);
        else
            Camera_ApplyWideScreen_21(data_2, lpMem);
    }
}
