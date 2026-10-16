#include "004AC12D-Camera_UpdateViewCone_23.h"
/* 0x004ac12d Camera_UpdateViewCone_23 full linked: callers=3 callees=6 */
void* sub_4ac12d(int32_t a1, uint32_t a2, uint32_t a3)

{
    int32_t eax_2;
    void* eax_4;
    char edx_1;
    int32_t esi_2;

    if (a1 < g_c32540)
    {
        eax_2 = a1 >> 5;
        esi_2 = (a1 & 0x1f) << 3;
        eax_4 = (&g_c32440)[eax_2] + esi_2;
        edx_1 = *(eax_4 + 4);
    }

    if (a1 >= g_c32540 || !(edx_1 & 1))
    {
        g_936068 = 0;
        g_936064 = 9;
    }
    else
    {
        int32_t var_c_1 = 0;
        char* lpBuffer_1 = a2;
        uint8_t* lpBuffer = lpBuffer_1;

        if (!a3 || edx_1 & 2)
            return nullptr;

        if (edx_1 & 0x48)
        {
            char eax_5 = *(eax_4 + 5);

            if (eax_5 != 0xa)
            {
                a3 -= 1;
                *lpBuffer_1 = eax_5;
                lpBuffer = &lpBuffer_1[1];
                var_c_1 = 1;
                *((&g_c32440)[eax_2] + esi_2 + 5) = 0xa;
            }
        }

        uint32_t numberOfBytesRead;

        if (ReadFile((&g_c32440)[eax_2][(a1 & 0x1f) * 2], lpBuffer, a3, &numberOfBytesRead,
            nullptr))
        {
            int32_t eax_10 = (&g_c32440)[eax_2];
            uint32_t numberOfBytesRead_1 = numberOfBytesRead;
            void* result = var_c_1 + numberOfBytesRead_1;
            char eax_11 = *(eax_10 + esi_2 + 4);

            if (!(eax_11 & 0x80))
                return result;

            if (!numberOfBytesRead_1 || *lpBuffer_1 != 0xa)
                eax_11 &= 0xfb;
            else
                eax_11 |= 4;

            *(eax_10 + esi_2 + 4) = eax_11;
            a3 = a2;
            void* ecx_4 = result + a2;
            void* var_c_2 = ecx_4;

            if (a2 < ecx_4)
            {
                do
                {
                    char eax_14 = *a3;

                    if (eax_14 == 0x1a)
                    {
                        char* esi_3 = (&g_c32440)[eax_2] + esi_2 + 4;
                        char eax_22 = *esi_3;

                        if (!(eax_22 & 0x40))
                            *esi_3 = eax_22 | 2;

                        break;
                    }

                    if (eax_14 != 0xd)
                    {
                        *lpBuffer_1 = eax_14;
                        lpBuffer_1 = &lpBuffer_1[1];
                        a3 += 1;
                    }
                    else if (a3 >= ecx_4 - 1)
                    {
                        a3 += 1;
                        uint8_t buffer;

                        if (ReadFile((&g_c32440)[eax_2][(a1 & 0x1f) * 2], &buffer, 1,
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

                            if (*((&g_c32440)[eax_2] + esi_2 + 4) & 0x48)
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
                                    *((&g_c32440)[eax_2] + esi_2 + 5) = buffer_1;
                                }
                            }
                            else if (lpBuffer_1 != a2 || buffer != 0xa)
                            {
                                sub_4a6d7d(a1, 0xffffffff, FILE_CURRENT);

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

                    ecx_4 = var_c_2;
                } while (a3 < ecx_4);
            }

            return lpBuffer_1 - a2;
        }

        enum WIN32_ERROR eax_9 = GetLastError();

        if (eax_9 != ERROR_ACCESS_DENIED)
        {
            if (eax_9 == ERROR_BROKEN_PIPE)
                return nullptr;

            sub_4abc46(eax_9);
        }
        else
        {
            g_936064 = 9;
            g_936068 = 5;
        }
    }

    return 0xffffffff;
}
