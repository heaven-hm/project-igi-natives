#include "004A6467-Camera_ApplyHandiCam_8.h"
/* 0x004a6467 Camera_ApplyHandiCam_8 full linked: callers=1 callees=8 */
uint32_t sub_4a6467()

{
    int32_t* esi = sub_4aa670(0x100);

    if (!esi)
        sub_4a51eb(0x1b);

    g_c32440 = esi;
    g_c32540 = 0x20;

    for (void* i = &esi[0x40]; esi < i; i = g_c32440 + 0x100)
    {
        esi[1] = 0;
        *esi = 0xffffffff;
        *(esi + 5) = 0xa;
        esi = &esi[2];
    }

    STARTUPINFOA startupInfo;
    GetStartupInfoA(&startupInfo);

    if (startupInfo.cbReserved2)
    {
        LPBYTE lpReserved2 = startupInfo.lpReserved2;

        if (lpReserved2)
        {
            void* const i_1 = *lpReserved2;
            char* ebp_1 = &lpReserved2[4];
            int32_t* ebx_1 = i_1 + ebp_1;

            if (i_1 >= 0x800)
                i_1 = 0x800;

            if (g_c32540 < i_1)
            {
                int32_t* edi_1 = &g_c32444;

                do
                {
                    int32_t* eax_2 = sub_4aa670(0x100);

                    if (!eax_2)
                    {
                        i_1 = g_c32540;
                        break;
                    }

                    g_c32540 += 0x20;
                    *edi_1 = eax_2;

                    for (void* j = &eax_2[0x40]; eax_2 < j; j = *edi_1 + 0x100)
                    {
                        eax_2[1] = 0;
                        *eax_2 = 0xffffffff;
                        *(eax_2 + 5) = 0xa;
                        eax_2 = &eax_2[2];
                    }

                    edi_1 = &edi_1[1];
                } while (g_c32540 < i_1);
            }

            int32_t edi_2 = 0;

            if (i_1 > 0)
            {
                do
                {
                    HANDLE hFile = *ebx_1;

                    if (hFile != 0xffffffff)
                    {
                        char ecx_3 = *ebp_1;

                        if (ecx_3 & 1)
                        {
                            enum FILE_TYPE eax_3;

                            if (!(ecx_3 & 8))
                                eax_3 = GetFileType(hFile);

                            if (ecx_3 & 8 || eax_3)
                            {
                                int32_t* eax_7 = (&g_c32440)[edi_2 >> 5] + ((edi_2 & 0x1f) << 3);
                                *eax_7 = *ebx_1;
                                eax_7[1] = *ebp_1;
                            }
                        }
                    }

                    edi_2 += 1;
                    ebp_1 = &ebp_1[1];
                    ebx_1 = &ebx_1[1];
                } while (edi_2 < i_1);
            }
        }
    }

    for (int32_t i_2 = 0; i_2 < 3; i_2 += 1)
    {
        int32_t eax_8 = g_c32440;
        int32_t* esi_1 = eax_8 + (i_2 << 3);

        if (*(eax_8 + (i_2 << 3)) != 0xffffffff)
            esi_1[1] |= 0x80;
        else
        {
            esi_1[1] = 0x81;
            enum STD_HANDLE nStdHandle;

            if (i_2)
            {
                int32_t eax_11 = -((i_2 - 1));
                nStdHandle = eax_11 - eax_11 - 0xb;
            }
            else
                nStdHandle = STD_INPUT_HANDLE;

            HANDLE hFile_1 = GetStdHandle(nStdHandle);

            if (hFile_1 == 0xffffffff)
                esi_1[1] |= 0x40;
            else
            {
                enum FILE_TYPE eax_13 = GetFileType(hFile_1);

                if (!eax_13)
                    esi_1[1] |= 0x40;
                else
                {
                    int32_t eax_14 = eax_13 & 0xff;
                    *esi_1 = hFile_1;

                    if (eax_14 == 2)
                        esi_1[1] |= 0x40;
                    else if (eax_14 == 3)
                        esi_1[1] |= 8;
                }
            }
        }
    }

    return SetHandleCount(g_c32540);
}
