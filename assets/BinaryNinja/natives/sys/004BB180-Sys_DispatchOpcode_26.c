// Original IGI.EXE function: Sys_DispatchOpcode_26 (VA 0x004BB180; static CFG gate FAIL, CFG score 0.833).
#include "Sys_DispatchOpcode_26.h"
int32_t Sys_DispatchOpcode_26(int32_t* context, char* param_2)

{
    int32_t* data_val = &context[0xb];
    int32_t* dest_val = *data_val;
    int32_t result = 0;
    int32_t* flagP = *dest_val;

    if (!flagP)
    {
    label_4bb1e4:
        int32_t* data_4 = Mem_Alloc(0x88, 4);
        data_4[1] = 0;
        *data_4 = 0;
        Camera_SetFieldOfView_33(data_val, data_4);
        char* dest_1 = param_2;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool flag_0_1 = 0 != *dest_1;
            dest_1 = &dest_1[1];
            i -= 1;

            if (!flag_0_1)
                break;
        }

        int32_t entity_2 = ~i;
        int32_t source_4;
        int32_t dest_4;
        dest_4 = memcpy(&data_4[2], dest_1 - entity_2, entity_2 & 0xfffffffc);
        memcpy(dest_4, source_4, entity_2 & 3);
    }
    else
    {
        while (true)
        {
            char* source_1 = param_2;
            char* data_1 = &dest_val[2];
            int32_t data_3;

            while (true)
            {
                char temp_1 = *data_1;
                char f0_1 = *source_1;
                bool c_1 = temp_1 < f0_1;

                if (temp_1 == f0_1)
                {
                    if (!temp_1)
                    {
                        data_3 = 0;
                        break;
                    }

                    temp_1 = data_1[1];
                    char f3_1 = source_1[1];
                    c_1 = temp_1 < f3_1;

                    if (temp_1 == f3_1)
                    {
                        data_1 = &data_1[2];
                        source_1 = &source_1[2];

                        if (temp_1)
                            continue;

                        data_3 = 0;
                        break;
                    }
                }

                data_3 = data_1 - data_1 + 1;
                break;
            }

            if (!data_3)
                break;

            dest_val = flagP;
            flagP = *flagP;
            result += 1;

            if (!flagP)
                goto label_4bb1e4;
        }

        if (!dest_val)
            goto label_4bb1e4;
    }

    return result;
}
