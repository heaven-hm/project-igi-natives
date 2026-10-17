// Original IGI.EXE function: Camera_ApplyPostProcess_8 (VA 0x004A6787; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_8.h"
int32_t Camera_ApplyPostProcess_8(int32_t a1)

{
    enum HEAP_FLAGS flOptions = HEAP_NONE;
    flOptions = !a1;
    HANDLE valA = HeapCreate(flOptions, 0x1000, 0);
    g_c32428 = valA;

    if (valA)
    {
        int32_t valA1 = Camera_MsvcrtHeapSelect();
        g_c3242c = valA1;
        void** valA2;

        if (valA1 != 3)
        {
            if (valA1 != 2)
                return 1;

            valA2 = Camera_UpdateTransform_22();
        }
        else
            valA2 = Camera_ApplyBandFilter_21(0x3f8);

        if (valA2)
            return 1;

        HeapDestroy(g_c32428);
    }

    return 0;
}
