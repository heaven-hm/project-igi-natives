#include "Camera_ApplyLineFilter_4.h"
int32_t Camera_ApplyLineFilter_4(int32_t* a1, void* a2, enum SET_FILE_POINTER_MOVE_METHOD a3)

{
    int32_t valA = a1[3];

    if (valA & 0x83)
    {
        enum SET_FILE_POINTER_MOVE_METHOD dstD1 = a3;

        if (!dstD1 || dstD1 == FILE_CURRENT || dstD1 == FILE_END)
        {
            valA &= 0xef;
            a1[3] = valA;

            if (dstD1 == FILE_CURRENT)
            {
                a2 += Camera_UpdateTransform_10(a1);
                dstD1 = FILE_BEGIN;
            }

            Camera_ApplyHandiCam_9(a1);
            int32_t valA2 = a1[3];

            if (valA2 & 0x80)
            {
                valA2 &= 0xfc;
                a1[3] = valA2;
            }
            else if (valA2 & 1 && valA2 & 8 && !(*(&valA2 + 1) & 4))
                a1[6] = 0x200;

            int32_t objC3 = 0;
            objC3 = Camera_ResetMatrix_9(a1[4], a2, dstD1) != 0xffffffff;
            return objC3 - 1;
        }
    }

    g_936064 = 0x16;
    return 0xffffffff;
}
