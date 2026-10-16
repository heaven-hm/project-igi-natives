#include "Camera_UpdateTransform_9.h"
void __fastcall Camera_UpdateTransform_9(void** a1)

{
    void** v_8 = a1;
    int32_t* lpMem_1;
    int32_t* lpMem = lpMem_1;

    if (!lpMem)
        return;

    int32_t valA1 = g_c3242c;

    if (valA1 != 3)
    {
        char* valA3;

        if (valA1 == 2)
            valA3 = Camera_ApplyBandFilter_22(lpMem, &v_8, &lpMem_1);

        if (valA1 != 2 || !valA3)
            HeapFree(g_c32428, HEAP_NONE, lpMem);
        else
            Camera_ApplyHandiCam_22(v_8, lpMem_1, valA3);
    }
    else
    {
        int32_t* valA2 = Camera_ApplyHandiCam_21(lpMem);

        if (!valA2)
            HeapFree(g_c32428, HEAP_NONE, lpMem);
        else
            Camera_ApplyWideScreen_21(valA2, lpMem);
    }
}
