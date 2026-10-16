#include "004ABEC7-Camera_ApplyHandiCam_23.h"
/* 0x004abec7 Camera_ApplyHandiCam_23 full linked: callers=5 callees=6 */
int32_t sub_4abec7(enum WIN32_ERROR a1, char* a2, uint32_t a3)

{
    char eax_4;
    int32_t* ebx_1;
    int32_t esi_3;

    if (a1 < g_c32540)
    {
        ebx_1 = &(&g_c32440)[a1 >> 5];
        esi_3 = (a1 & ERROR_GEN_FAILURE) << 3;
        eax_4 = *(*ebx_1 + esi_3 + 4);
    }

    if (a1 >= g_c32540 || !(eax_4 & 1))
    {
        g_936068 = 0;
        g_936064 = 9;
    }
    else
    {
        uint32_t numberOfBytesWritten_1 = 0;
        int32_t var_14_1 = 0;

        if (!a3)
            return 0;

        if (eax_4 & 0x20)
            sub_4a6d7d(a1, 0, FILE_END);

        int32_t* eax_6 = *ebx_1 + esi_3;
        uint32_t numberOfBytesWritten;

        if (!(eax_6[1] & 0x80))
        {
            if (!WriteFile(*eax_6, a2, a3, &numberOfBytesWritten, nullptr))
                a1 = GetLastError();
            else
            {
                a1 = NO_ERROR;
                numberOfBytesWritten_1 = numberOfBytesWritten;
            }

        label_4abfc3:

            if (numberOfBytesWritten_1)
                return numberOfBytesWritten_1 - var_14_1;

            if (!a1)
                goto label_4ac031;

            if (a1 != ERROR_ACCESS_DENIED)
                sub_4abc46(a1);
            else
            {
                g_936064 = 9;
                g_936068 = 5;
            }
        }
        else
        {
            char* var_8_1 = a2;
            a1 = NO_ERROR;

            if (a3 > 0)
            {
                do
                {
                    uint8_t buffer[0x404];
                    uint8_t (* eax_8)[0x404] = &buffer;

                    while (var_8_1 - a2 < a3)
                    {
                        char* ecx_3 = var_8_1;
                        var_8_1 = &var_8_1[1];
                        char ecx_4 = *ecx_3;

                        if (ecx_4 == 0xa)
                        {
                            var_14_1 += 1;
                            *eax_8 = 0xd;
                            eax_8 = &(*eax_8)[1];
                        }

                        *eax_8 = ecx_4;
                        eax_8 = &(*eax_8)[1];

                        if (eax_8 - &buffer >= 0x400)
                            break;
                    }

                    uint32_t nNumberOfBytesToWrite = eax_8 - &buffer;

                    if (!WriteFile((*ebx_1)[(a1 & 0x1f) * 2], &buffer, nNumberOfBytesToWrite,
                        &numberOfBytesWritten, nullptr))
                    {
                        a1 = GetLastError();
                        break;
                    }

                    uint32_t numberOfBytesWritten_2 = numberOfBytesWritten;
                    numberOfBytesWritten_1 += numberOfBytesWritten_2;

                    if (numberOfBytesWritten_2 < nNumberOfBytesToWrite)
                        break;
                } while (var_8_1 - a2 < a3);

                goto label_4abfc3;
            }

        label_4ac031:

            if (*(*ebx_1 + esi_3 + 4) & 0x40 && *a2 == 0x1a)
                return 0;

            g_936064 = 0x1c;
            g_936068 = 0;
        }
    }

    return 0xffffffff;
}
