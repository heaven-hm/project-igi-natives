// Original IGI.EXE function: Camera_ApplyHandiCam_11 (VA 0x004A760B; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyHandiCam_11.h"
uint32_t Camera_ApplyHandiCam_11(int32_t* context )

{
    int32_t* source_val = context;
    int32_t data_val = source_val[3];
    enum WIN32_ERROR context_val = source_val[4];

    if (!(data_val & 0x82) || data_val & 0x40)
    {
        data_val |= 0x20;
        source_val[3] = data_val;
    }
    else
    {
        if (!(data_val & 1))
            goto label_4a7643;

        source_val[1] = 0;

        if (!(data_val & 0x10))
        {
            data_val |= 0x20;
            source_val[3] = data_val;
        }
        else
        {
            data_val &= 0xfe;
            *source_val = source_val[2];
            source_val[3] = data_val;
        label_4a7643:
            int32_t data_1 = source_val[3];
            source_val[1] = 0;
            context = nullptr;
            data_1 &= 0xef;
            data_1 |= 2;
            source_val[3] = data_1;

            if (!(data_1 & 0x10c))
            {
                bool flag_3_1;

                if (source_val == 0x546860 || source_val == 0x546880)
                    flag_3_1 = Camera_ApplyPostProcess_26(context_val);

                if ((source_val != 0x546860 && source_val != 0x546880) || !flag_3_1)
                    Camera_ResetMatrix_23(source_val);
            }

            int32_t arg_4;
            uint32_t dest_2;

            if (!(source_val[3] & 0x108))
            {
                dest_2 = 1;
                context = Camera_ApplyHandiCam_23(context_val, &arg_4, 1);
            }
            else
            {
                char* data_3 = source_val[2];
                dest_2 = *source_val - data_3;
                *source_val = &data_3[1];
                source_val[1] = source_val[6] - 1;

                if (dest_2 <= 0)
                {
                    void* data_8;

                    if (context_val == ~NO_ERROR)
                        data_8 = &g_543fb0;
                    else
                        data_8 = (&g_c32440)[context_val >> 5] + ((context_val & ERROR_GEN_FAILURE) << 3);

                    if (*(data_8 + 4) & 0x20)
                        Camera_ResetMatrix_9(context_val, 0, FILE_END);
                }
                else
                    context = Camera_ApplyHandiCam_23(context_val, data_3, dest_2);

                *source_val[2] = arg_4;
            }

            if (context == dest_2)
                return arg_4;

            source_val[3] |= 0x20;
        }
    }

    return 0xffffffff;
}
