// IGI native provenance: Camera_ApplyHandiCam_8 - 0x004A6467 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A6467-Camera_ApplyHandiCam_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyHandiCam_8.h"
uint32_t Camera_ApplyHandiCam_8()

{
    int32_t* source_val = Camera_ApplyHandiCam_20(0x100);

    if (!source_val)
        Camera_UpdateViewCone_3(0x1b);

    g_c32440 = source_val;
    g_c32540 = 0x20;

    for (void* i = &source_val[0x40]; source_val < i; i = g_c32440 + 0x100)
    {
        source_val[1] = 0;
        *source_val = 0xffffffff;
        *(source_val + 5) = 0xa;
        source_val = &source_val[2];
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
            int32_t* context_1 = i_1 + flagP1;

            if (i_1 >= 0x800)
                i_1 = 0x800;

            if (g_c32540 < i_1)
            {
                int32_t* dest_1 = &g_c32444;

                do
                {
                    int32_t* data_2 = Camera_ApplyHandiCam_20(0x100);

                    if (!data_2)
                    {
                        i_1 = g_c32540;
                        break;
                    }

                    g_c32540 += 0x20;
                    *dest_1 = data_2;

                    for (void* j = &data_2[0x40]; data_2 < j; j = *dest_1 + 0x100)
                    {
                        data_2[1] = 0;
                        *data_2 = 0xffffffff;
                        *(data_2 + 5) = 0xa;
                        data_2 = &data_2[2];
                    }

                    dest_1 = &dest_1[1];
                } while (g_c32540 < i_1);
            }

            int32_t dest_2 = 0;

            if (i_1 > 0)
            {
                do
                {
                    HANDLE hFile = *context_1;

                    if (hFile != 0xffffffff)
                    {
                        char entity_3 = *flagP1;

                        if (entity_3 & 1)
                        {
                            enum FILE_TYPE data_3;

                            if (!(entity_3 & 8))
                                data_3 = GetFileType(hFile);

                            if (entity_3 & 8 || data_3)
                            {
                                int32_t* data_7 = (&g_c32440)[dest_2 >> 5] + ((dest_2 & 0x1f) << 3);
                                *data_7 = *context_1;
                                data_7[1] = *flagP1;
                            }
                        }
                    }

                    dest_2 += 1;
                    flagP1 = &flagP1[1];
                    context_1 = &context_1[1];
                } while (dest_2 < i_1);
            }
        }
    }

    for (int32_t i_2 = 0; i_2 < 3; i_2 += 1)
    {
        int32_t data_8 = g_c32440;
        int32_t* source_1 = data_8 + (i_2 << 3);

        if (*(data_8 + (i_2 << 3)) != 0xffffffff)
            source_1[1] |= 0x80;
        else
        {
            source_1[1] = 0x81;
            enum STD_HANDLE nStdHandle;

            if (i_2)
            {
                int32_t data_11 = -((i_2 - 1));
                nStdHandle = data_11 - data_11 - 0xb;
            }
            else
                nStdHandle = STD_INPUT_HANDLE;

            HANDLE hFile_1 = GetStdHandle(nStdHandle);

            if (hFile_1 == 0xffffffff)
                source_1[1] |= 0x40;
            else
            {
                enum FILE_TYPE data_13 = GetFileType(hFile_1);

                if (!data_13)
                    source_1[1] |= 0x40;
                else
                {
                    int32_t data_14 = data_13 & 0xff;
                    *source_1 = hFile_1;

                    if (data_14 == 2)
                        source_1[1] |= 0x40;
                    else if (data_14 == 3)
                        source_1[1] |= 8;
                }
            }
        }
    }

    return SetHandleCount(g_c32540);
}
