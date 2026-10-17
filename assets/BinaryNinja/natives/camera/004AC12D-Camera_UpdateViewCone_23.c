// Original IGI.EXE function: Camera_UpdateViewCone_23 (VA 0x004AC12D; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateViewCone_23.h"
void* Camera_UpdateViewCone_23(int32_t a1, uint32_t a2, uint32_t a3)

{
    int32_t valA2;
    void* valA4;
    char tmpD1;
    int32_t srcS2;

    if (a1 < g_c32540)
    {
        valA2 = a1 >> 5;
        srcS2 = (a1 & 0x1f) << 3;
        valA4 = (&g_c32440)[valA2] + srcS2;
        tmpD1 = *(valA4 + 4);
    }

    if (a1 >= g_c32540 || !(tmpD1 & 1))
    {
        g_936068 = 0;
        g_936064 = 9;
    }
    else
    {
        int32_t v_c_1 = 0;
        char* lpBuffer_1 = a2;
        uint8_t* lpBuffer = lpBuffer_1;

        if (!a3 || tmpD1 & 2)
            return nullptr;

        if (tmpD1 & 0x48)
        {
            char valA5 = *(valA4 + 5);

            if (valA5 != 0xa)
            {
                a3 -= 1;
                *lpBuffer_1 = valA5;
                lpBuffer = &lpBuffer_1[1];
                v_c_1 = 1;
                *((&g_c32440)[valA2] + srcS2 + 5) = 0xa;
            }
        }

        uint32_t numberOfBytesRead;

        if (ReadFile((&g_c32440)[valA2][(a1 & 0x1f) * 2], lpBuffer, a3, &numberOfBytesRead,
            nullptr))
        {
            int32_t valA10 = (&g_c32440)[valA2];
            uint32_t numberOfBytesRead_1 = numberOfBytesRead;
            void* result = v_c_1 + numberOfBytesRead_1;
            char valA11 = *(valA10 + srcS2 + 4);

            if (!(valA11 & 0x80))
                return result;

            if (!numberOfBytesRead_1 || *lpBuffer_1 != 0xa)
                valA11 &= 0xfb;
            else
                valA11 |= 4;

            *(valA10 + srcS2 + 4) = valA11;
            a3 = a2;
            void* objC4 = result + a2;
            void* v_c_2 = objC4;

            if (a2 < objC4)
            {
                do
                {
                    char valA14 = *a3;

                    if (valA14 == 0x1a)
                    {
                        char* srcS3 = (&g_c32440)[valA2] + srcS2 + 4;
                        char valA22 = *srcS3;

                        if (!(valA22 & 0x40))
                            *srcS3 = valA22 | 2;

                        break;
                    }

                    if (valA14 != 0xd)
                    {
                        *lpBuffer_1 = valA14;
                        lpBuffer_1 = &lpBuffer_1[1];
                        a3 += 1;
                    }
                    else if (a3 >= objC4 - 1)
                    {
                        a3 += 1;
                        uint8_t buffer;

                        if (ReadFile((&g_c32440)[valA2][(a1 & 0x1f) * 2], &buffer, 1,
                            &numberOfBytesRead, nullptr))
                        {
                            if (numberOfBytesRead)
                                goto label_4ac29e;

                            *lpBuffer_1 = 0xd;
                            lpBuffer_1 = &lpBuffer_1[1];
                        }
                        else if (GetLastError() || !numberOfBytesRead)
                        {
                            *lpBuffer_1 = 0xd;
                            lpBuffer_1 = &lpBuffer_1[1];
                        }
                        else
                        {
                        label_4ac29e:

                            if (*((&g_c32440)[valA2] + srcS2 + 4) & 0x48)
                            {
                                uint8_t buffer_1 = buffer;

                                if (buffer_1 == 0xa)
                                {
                                    *lpBuffer_1 = 0xa;
                                    lpBuffer_1 = &lpBuffer_1[1];
                                }
                                else
                                {
                                    *lpBuffer_1 = 0xd;
                                    lpBuffer_1 = &lpBuffer_1[1];
                                    *((&g_c32440)[valA2] + srcS2 + 5) = buffer_1;
                                }
                            }
                            else if (lpBuffer_1 != a2 || buffer != 0xa)
                            {
                                Camera_ResetMatrix_9(a1, 0xffffffff, FILE_CURRENT);

                                if (buffer != 0xa)
                                {
                                    *lpBuffer_1 = 0xd;
                                    lpBuffer_1 = &lpBuffer_1[1];
                                }
                            }
                            else
                            {
                                *lpBuffer_1 = 0xa;
                                lpBuffer_1 = &lpBuffer_1[1];
                            }
                        }
                    }
                    else if (*(a3 + 1) != 0xa)
                    {
                        *lpBuffer_1 = 0xd;
                        lpBuffer_1 = &lpBuffer_1[1];
                        a3 += 1;
                    }
                    else
                    {
                        a3 += 2;
                        *lpBuffer_1 = 0xa;
                        lpBuffer_1 = &lpBuffer_1[1];
                    }

                    objC4 = v_c_2;
                } while (a3 < objC4);
            }

            return lpBuffer_1 - a2;
        }

        enum WIN32_ERROR valA9 = GetLastError();

        if (valA9 != ERROR_ACCESS_DENIED)
        {
            if (valA9 == ERROR_BROKEN_PIPE)
                return nullptr;

            Camera_UpdateViewCone_22(valA9);
        }
        else
        {
            g_936064 = 9;
            g_936068 = 5;
        }
    }

    return 0xffffffff;
}
