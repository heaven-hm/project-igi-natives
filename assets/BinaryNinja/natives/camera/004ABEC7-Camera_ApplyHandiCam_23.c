#include "Camera_ApplyHandiCam_23.h"
int32_t Camera_ApplyHandiCam_23(enum WIN32_ERROR a1, char* a2, uint32_t a3)

{
    char valA4;
    int32_t* ctxB1;
    int32_t srcS3;

    if (a1 < g_c32540)
    {
        ctxB1 = &(&g_c32440)[a1 >> 5];
        srcS3 = (a1 & ERROR_GEN_FAILURE) << 3;
        valA4 = *(*ctxB1 + srcS3 + 4);
    }

    if (a1 >= g_c32540 || !(valA4 & 1))
    {
        g_936068 = 0;
        g_936064 = 9;
    }
    else
    {
        uint32_t numberOfBytesWritten_1 = 0;
        int32_t v_14_1 = 0;

        if (!a3)
            return 0;

        if (valA4 & 0x20)
            Camera_ResetMatrix_9(a1, 0, FILE_END);

        int32_t* valA6 = *ctxB1 + srcS3;
        uint32_t numberOfBytesWritten;

        if (!(valA6[1] & 0x80))
        {
            if (!WriteFile(*valA6, a2, a3, &numberOfBytesWritten, nullptr))
                a1 = GetLastError();
            else
            {
                a1 = NO_ERROR;
                numberOfBytesWritten_1 = numberOfBytesWritten;
            }

        label_4abfc3:

            if (numberOfBytesWritten_1)
                return numberOfBytesWritten_1 - v_14_1;

            if (!a1)
                goto label_4ac031;

            if (a1 != ERROR_ACCESS_DENIED)
                Camera_UpdateViewCone_22(a1);
            else
            {
                g_936064 = 9;
                g_936068 = 5;
            }
        }
        else
        {
            char* v_8_1 = a2;
            a1 = NO_ERROR;

            if (a3 > 0)
            {
                do
                {
                    uint8_t buffer[0x404];
                    uint8_t (* valA8)[0x404] = &buffer;

                    while (v_8_1 - a2 < a3)
                    {
                        char* objC3 = v_8_1;
                        v_8_1 = &v_8_1[1];
                        char objC4 = *objC3;

                        if (objC4 == 0xa)
                        {
                            v_14_1 += 1;
                            *valA8 = 0xd;
                            valA8 = &(*valA8)[1];
                        }

                        *valA8 = objC4;
                        valA8 = &(*valA8)[1];

                        if (valA8 - &buffer >= 0x400)
                            break;
                    }

                    uint32_t nNumberOfBytesToWrite = valA8 - &buffer;

                    if (!WriteFile((*ctxB1)[(a1 & 0x1f) * 2], &buffer, nNumberOfBytesToWrite,
                        &numberOfBytesWritten, nullptr))
                    {
                        a1 = GetLastError();
                        break;
                    }

                    uint32_t numberOfBytesWritten_2 = numberOfBytesWritten;
                    numberOfBytesWritten_1 += numberOfBytesWritten_2;

                    if (numberOfBytesWritten_2 < nNumberOfBytesToWrite)
                        break;
                } while (v_8_1 - a2 < a3);

                goto label_4abfc3;
            }

        label_4ac031:

            if (*(*ctxB1 + srcS3 + 4) & 0x40 && *a2 == 0x1a)
                return 0;

            g_936064 = 0x1c;
            g_936068 = 0;
        }
    }

    return 0xffffffff;
}
