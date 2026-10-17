// Original IGI.EXE function: Camera_UpdateViewCone_23 (VA 0x004AC12D; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateViewCone_23.h"
void* Camera_UpdateViewCone_23(int32_t context, uint32_t param_2, uint32_t param_3)

{
    int32_t data_2;
    void* data_4;
    char temp_1;
    int32_t source_2;

    if (context < g_c32540)
    {
        data_2 = context >> 5;
        source_2 = (context & 0x1f) << 3;
        data_4 = (&g_c32440)[data_2] + source_2;
        temp_1 = *(data_4 + 4);
    }

    if (context >= g_c32540 || !(temp_1 & 1))
    {
        g_936068 = 0;
        g_936064 = 9;
    }
    else
    {
        int32_t item_c_1 = 0;
        char* lpBuffer_1 = param_2;
        uint8_t* lpBuffer = lpBuffer_1;

        if (!param_3 || temp_1 & 2)
            return nullptr;

        if (temp_1 & 0x48)
        {
            char data_5 = *(data_4 + 5);

            if (data_5 != 0xa)
            {
                param_3 -= 1;
                *lpBuffer_1 = data_5;
                lpBuffer = &lpBuffer_1[1];
                item_c_1 = 1;
                *((&g_c32440)[data_2] + source_2 + 5) = 0xa;
            }
        }

        uint32_t numberOfBytesRead;

        if (ReadFile((&g_c32440)[data_2][(context & 0x1f) * 2], lpBuffer, param_3, &numberOfBytesRead,
            nullptr))
        {
            int32_t data_10 = (&g_c32440)[data_2];
            uint32_t numberOfBytesRead_1 = numberOfBytesRead;
            void* result = item_c_1 + numberOfBytesRead_1;
            char data_11 = *(data_10 + source_2 + 4);

            if (!(data_11 & 0x80))
                return result;

            if (!numberOfBytesRead_1 || *lpBuffer_1 != 0xa)
                data_11 &= 0xfb;
            else
                data_11 |= 4;

            *(data_10 + source_2 + 4) = data_11;
            param_3 = param_2;
            void* entity_4 = result + param_2;
            void* item_c_2 = entity_4;

            if (param_2 < entity_4)
            {
                do
                {
                    char data_14 = *param_3;

                    if (data_14 == 0x1a)
                    {
                        char* source_3 = (&g_c32440)[data_2] + source_2 + 4;
                        char data_22 = *source_3;

                        if (!(data_22 & 0x40))
                            *source_3 = data_22 | 2;

                        break;
                    }

                    if (data_14 != 0xd)
                    {
                        *lpBuffer_1 = data_14;
                        lpBuffer_1 = &lpBuffer_1[1];
                        param_3 += 1;
                    }
                    else if (param_3 >= entity_4 - 1)
                    {
                        param_3 += 1;
                        uint8_t buffer;

                        if (ReadFile((&g_c32440)[data_2][(context & 0x1f) * 2], &buffer, 1,
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

                            if (*((&g_c32440)[data_2] + source_2 + 4) & 0x48)
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
                                    *((&g_c32440)[data_2] + source_2 + 5) = buffer_1;
                                }
                            }
                            else if (lpBuffer_1 != param_2 || buffer != 0xa)
                            {
                                Camera_ResetMatrix_9(context, 0xffffffff, FILE_CURRENT);

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
                    else if (*(param_3 + 1) != 0xa)
                    {
                        *lpBuffer_1 = 0xd;
                        lpBuffer_1 = &lpBuffer_1[1];
                        param_3 += 1;
                    }
                    else
                    {
                        param_3 += 2;
                        *lpBuffer_1 = 0xa;
                        lpBuffer_1 = &lpBuffer_1[1];
                    }

                    entity_4 = item_c_2;
                } while (param_3 < entity_4);
            }

            return lpBuffer_1 - param_2;
        }

        enum WIN32_ERROR data_9 = GetLastError();

        if (data_9 != ERROR_ACCESS_DENIED)
        {
            if (data_9 == ERROR_BROKEN_PIPE)
                return nullptr;

            Camera_UpdateViewCone_22(data_9);
        }
        else
        {
            g_936064 = 9;
            g_936068 = 5;
        }
    }

    return 0xffffffff;
}
