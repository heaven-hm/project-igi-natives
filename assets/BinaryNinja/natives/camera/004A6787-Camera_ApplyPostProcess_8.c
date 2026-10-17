// Original IGI.EXE function: Camera_ApplyPostProcess_8 (VA 0x004A6787; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_8.h"
int32_t Camera_ApplyPostProcess_8(int32_t context)

{
    enum HEAP_FLAGS flOptions = HEAP_NONE;
    flOptions = !context;
    HANDLE data_val = HeapCreate(flOptions, 0x1000, 0);
    g_c32428 = data_val;

    if (data_val)
    {
        int32_t data_1 = Camera_MsvcrtHeapSelect();
        g_c3242c = data_1;
        void** data_2;

        if (data_1 != 3)
        {
            if (data_1 != 2)
                return 1;

            data_2 = Camera_UpdateTransform_22();
        }
        else
            data_2 = Camera_ApplyBandFilter_21(0x3f8);

        if (data_2)
            return 1;

        HeapDestroy(g_c32428);
    }

    return 0;
}
