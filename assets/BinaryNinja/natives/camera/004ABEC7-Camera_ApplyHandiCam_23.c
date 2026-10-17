// IGI native provenance: Camera_ApplyHandiCam_23 - 0x004ABEC7 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004ABEC7-Camera_ApplyHandiCam_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyHandiCam_23.h"
int32_t Camera_ApplyHandiCam_23(enum WIN32_ERROR context, char* param_2, uint32_t param_3)

{
    char data_4;
    int32_t* context_1;
    int32_t source_3;

    if (context < g_c32540)
    {
        context_1 = &(&g_c32440)[context >> 5];
        source_3 = (context & ERROR_GEN_FAILURE) << 3;
        data_4 = *(*context_1 + source_3 + 4);
    }

    if (context >= g_c32540 || !(data_4 & 1))
    {
        g_936068 = 0;
        g_936064 = 9;
    }
    else
    {
        uint32_t numberOfBytesWritten_1 = 0;
        int32_t item_14_1 = 0;

        if (!param_3)
            return 0;

        if (data_4 & 0x20)
            Camera_ResetMatrix_9(context, 0, FILE_END);

        int32_t* data_6 = *context_1 + source_3;
        uint32_t numberOfBytesWritten;

        if (!(data_6[1] & 0x80))
        {
            if (!WriteFile(*data_6, param_2, param_3, &numberOfBytesWritten, nullptr))
                context = GetLastError();
            else
            {
                context = NO_ERROR;
                numberOfBytesWritten_1 = numberOfBytesWritten;
            }

        label_4abfc3:

            if (numberOfBytesWritten_1)
                return numberOfBytesWritten_1 - item_14_1;

            if (!context)
                goto label_4ac031;

            if (context != ERROR_ACCESS_DENIED)
                Camera_UpdateViewCone_22(context);
            else
            {
                g_936064 = 9;
                g_936068 = 5;
            }
        }
        else
        {
            char* item_8_1 = param_2;
            context = NO_ERROR;

            if (param_3 > 0)
            {
                do
                {
                    uint8_t buffer[0x404];
                    uint8_t (* data_8)[0x404] = &buffer;

                    while (item_8_1 - param_2 < param_3)
                    {
                        char* entity_3 = item_8_1;
                        item_8_1 = &item_8_1[1];
                        char entity_4 = *entity_3;

                        if (entity_4 == 0xa)
                        {
                            item_14_1 += 1;
                            *data_8 = 0xd;
                            data_8 = &(*data_8)[1];
                        }

                        *data_8 = entity_4;
                        data_8 = &(*data_8)[1];

                        if (data_8 - &buffer >= 0x400)
                            break;
                    }

                    uint32_t nNumberOfBytesToWrite = data_8 - &buffer;

                    if (!WriteFile((*context_1)[(context & 0x1f) * 2], &buffer, nNumberOfBytesToWrite,
                        &numberOfBytesWritten, nullptr))
                    {
                        context = GetLastError();
                        break;
                    }

                    uint32_t numberOfBytesWritten_2 = numberOfBytesWritten;
                    numberOfBytesWritten_1 += numberOfBytesWritten_2;

                    if (numberOfBytesWritten_2 < nNumberOfBytesToWrite)
                        break;
                } while (item_8_1 - param_2 < param_3);

                goto label_4abfc3;
            }

        label_4ac031:

            if (*(*context_1 + source_3 + 4) & 0x40 && *param_2 == 0x1a)
                return 0;

            g_936064 = 0x1c;
            g_936068 = 0;
        }
    }

    return 0xffffffff;
}
