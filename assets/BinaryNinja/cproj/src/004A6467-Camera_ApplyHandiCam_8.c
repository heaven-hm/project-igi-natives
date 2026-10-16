#include "gi_platform.h"
#include "004A6467-Camera_ApplyHandiCam_8.h"
uint32_t Camera_ApplyHandiCam_8()

{
    int32_t* srcS = Camera_ApplyHandiCam_20(0x100);

    if (!srcS)
        Camera_UpdateViewCone_3(0x1b);

    g_c32440 = srcS;
    g_c32540 = 0x20;

    for (void* i = &srcS[0x40]; srcS < i; i = g_c32440 + 0x100)
    {
        srcS[1] = 0;
        *srcS = 0xffffffff;
        (*(int32_t*)(uintptr_t)(srcS + 5)) = 0xa;
        srcS = &srcS[2];
    }

    STARTUPINFOA startupInfo;
    GetStartupInfoA(&startupInfo);

    if (startupInfo.cbReserved2)
    {
        LPBYTE lpReserved2 = startupInfo.lpReserved2;

        if (lpReserved2)
        {
            void* const i_1 = *lpReserved2;
            char* flagP1 = &lpReserved2[4];
            int32_t* ctxB1 = i_1 + flagP1;

            if (i_1 >= 0x800)
                i_1 = 0x800;

            if (g_c32540 < i_1)
            {
                int32_t* dstD1 = &g_c32444;

                do
                {
                    int32_t* valA2 = Camera_ApplyHandiCam_20(0x100);

                    if (!valA2)
                    {
                        i_1 = g_c32540;
                        break;
                    }

                    g_c32540 += 0x20;
                    *dstD1 = valA2;

                    for (void* j = &valA2[0x40]; valA2 < j; j = *dstD1 + 0x100)
                    {
                        valA2[1] = 0;
                        *valA2 = 0xffffffff;
                        *(valA2 + 5) = 0xa;
                        valA2 = &valA2[2];
                    }

                    dstD1 = &dstD1[1];
                } while (g_c32540 < i_1);
            }

            int32_t dstD2 = 0;

            if (i_1 > 0)
            {
                do
                {
                    HANDLE hFile = *ctxB1;

                    if (hFile != 0xffffffff)
                    {
                        char objC3 = *flagP1;

                        if (objC3 & 1)
                        {
                            enum FILE_TYPE valA3;

                            if (!(objC3 & 8))
                                valA3 = GetFileType(hFile);

                            if (objC3 & 8 || valA3)
                            {
                                int32_t* valA7 = (&g_c32440)[dstD2 >> 5] + ((dstD2 & 0x1f) << 3);
                                *valA7 = *ctxB1;
                                valA7[1] = *flagP1;
                            }
                        }
                    }

                    dstD2 += 1;
                    flagP1 = &flagP1[1];
                    ctxB1 = &ctxB1[1];
                } while (dstD2 < i_1);
            }
        }
    }

    for (int32_t i_2 = 0; i_2 < 3; i_2 += 1)
    {
        int32_t valA8 = g_c32440;
        int32_t* srcS1 = valA8 + (i_2 << 3);

        if (*(valA8 + (i_2 << 3)) != 0xffffffff)
            srcS1[1] |= 0x80;
        else
        {
            srcS1[1] = 0x81;
            enum STD_HANDLE nStdHandle;

            if (i_2)
            {
                int32_t valA11 = -((i_2 - 1));
                nStdHandle = valA11 - valA11 - 0xb;
            }
            else
                nStdHandle = STD_INPUT_HANDLE;

            HANDLE hFile_1 = GetStdHandle(nStdHandle);

            if (hFile_1 == 0xffffffff)
                srcS1[1] |= 0x40;
            else
            {
                enum FILE_TYPE valA13 = GetFileType(hFile_1);

                if (!valA13)
                    srcS1[1] |= 0x40;
                else
                {
                    int32_t valA14 = valA13 & 0xff;
                    *srcS1 = hFile_1;

                    if (valA14 == 2)
                        srcS1[1] |= 0x40;
                    else if (valA14 == 3)
                        srcS1[1] |= 8;
                }
            }
        }
    }

    return SetHandleCount(g_c32540);
}
