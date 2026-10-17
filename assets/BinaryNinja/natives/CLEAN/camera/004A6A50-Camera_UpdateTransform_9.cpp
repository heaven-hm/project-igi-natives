// IGI native provenance: Camera_UpdateTransform_9 - 0x004A6A50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A6A50-Camera_UpdateTransform_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
