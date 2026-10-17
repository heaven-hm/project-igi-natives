// Original IGI.EXE function: Camera_ApplyHandiCam_11 (VA 0x004A760B; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyHandiCam_11.h"
uint32_t Camera_ApplyHandiCam_11(int32_t* a1 @ 0x8)

{
    int32_t* srcS = a1;
    int32_t valA = srcS[3];
    enum WIN32_ERROR ctxB = srcS[4];

    if (!(valA & 0x82) || valA & 0x40)
    {
        valA |= 0x20;
        srcS[3] = valA;
    }
    else
    {
        if (!(valA & 1))
            goto label_4a7643;

        srcS[1] = 0;

        if (!(valA & 0x10))
        {
            valA |= 0x20;
            srcS[3] = valA;
        }
        else
        {
            valA &= 0xfe;
            *srcS = srcS[2];
            srcS[3] = valA;
        label_4a7643:
            int32_t valA1 = srcS[3];
            srcS[1] = 0;
            a1 = nullptr;
            valA1 &= 0xef;
            valA1 |= 2;
            srcS[3] = valA1;

            if (!(valA1 & 0x10c))
            {
                bool cond_3_1;

                if (srcS == 0x546860 || srcS == 0x546880)
                    cond_3_1 = Camera_ApplyPostProcess_26(ctxB);

                if ((srcS != 0x546860 && srcS != 0x546880) || !cond_3_1)
                    Camera_ResetMatrix_23(srcS);
            }

            int32_t arg_4;
            uint32_t dstD2;

            if (!(srcS[3] & 0x108))
            {
                dstD2 = 1;
                a1 = Camera_ApplyHandiCam_23(ctxB, &arg_4, 1);
            }
            else
            {
                char* valA3 = srcS[2];
                dstD2 = *srcS - valA3;
                *srcS = &valA3[1];
                srcS[1] = srcS[6] - 1;

                if (dstD2 <= 0)
                {
                    void* valA8;

                    if (ctxB == ~NO_ERROR)
                        valA8 = &g_543fb0;
                    else
                        valA8 = (&g_c32440)[ctxB >> 5] + ((ctxB & ERROR_GEN_FAILURE) << 3);

                    if (*(valA8 + 4) & 0x20)
                        Camera_ResetMatrix_9(ctxB, 0, FILE_END);
                }
                else
                    a1 = Camera_ApplyHandiCam_23(ctxB, valA3, dstD2);

                *srcS[2] = arg_4;
            }

            if (a1 == dstD2)
                return arg_4;

            srcS[3] |= 0x20;
        }
    }

    return 0xffffffff;
}
