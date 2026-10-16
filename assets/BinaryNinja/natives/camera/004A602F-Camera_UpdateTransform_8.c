#include "Camera_UpdateTransform_8.h"
int32_t Camera_UpdateTransform_8()

{
    if (!g_c32548)
        Camera_SetFieldOfView_20();

    char* srcS = g_93604c;
    int32_t dstD = 0;

    while (true)
    {
        char valA1 = *srcS;

        if (!valA1)
            break;

        if (valA1 != 0x3d)
            dstD += 1;

        srcS = srcS + Camera_UpdateViewCone_20(srcS) + 1;
    }

    void** srcS1 = Camera_ApplyHandiCam_20((dstD << 2) + 4);
    int32_t* objC2 = (dstD << 2) + 4;
    g_93608c = srcS1;

    if (!srcS1)
    {
        Camera_UpdateViewCone_3(9);
        objC2 = 9;
    }

    char* dstD1 = g_93604c;

    while (*dstD1)
    {
        objC2 = dstD1;
        int32_t* flagP2 = Camera_UpdateViewCone_20(dstD1) + 1;

        if (*dstD1 != 0x3d)
        {
            void* valA5 = Camera_ApplyHandiCam_20(flagP2);
            *srcS1 = valA5;

            if (!valA5)
                Camera_UpdateViewCone_3(9);

            int32_t* v_14_3 = dstD1;
            Camera_ApplyLineFilter_20(*srcS1, v_14_3);
            srcS1 = &srcS1[1];
            objC2 = v_14_3;
        }

        dstD1 += flagP2;
    }

    int32_t __saved_ebp_3 = g_93604c;
    int32_t result = Camera_UpdateTransform_9(objC2);
    g_93604c = 0;
    *srcS1 = nullptr;
    g_c32544 = 1;
    return result;
}
