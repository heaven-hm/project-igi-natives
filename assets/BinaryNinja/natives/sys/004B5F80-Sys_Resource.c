// Original IGI.EXE function: Sys_Resource (VA 0x004B5F80; static CFG gate PASS, CFG score 0.944).
#include "Sys_Resource.h"
int32_t* Sys_Resource(char* context, int32_t* param_2, void* param_3)

{
    void item_8;
    Sys_AllocateMemory_5(&item_8, context);

    if (Sys_OpenFileStream_20(param_2) == 0x46464c49 && Sys_FreeMemory_20(param_2) == 0x53455249)
    {
        int32_t* data_2 = Sys_PopStack_15(context, 0, param_2, 0, 0, &item_8);
        Sys_ErrorInResourceFileS(context, data_2, param_2, &item_8);
        data_2[0xb] = 1;
        return param_2;
    }

    if (param_3 < 8)
        Sys_PopStack_15(context, 0, param_2, param_3, 2, &item_8)[0xb] = 1;
    else if (Camera_ApplyLineFilter_21(param_2, "RESOURCE", 8))
        Sys_PopStack_15(context, 0, param_2, param_3, 2, &item_8)[0xb] = 1;
    else
    {
        int32_t* data_5 = Sys_PopStack_15(context, 0, param_2, 0, 0, &item_8);
        data_5[0xb] = 1;
        char* entity_1 = param_2[2];
        void* context_2 = &param_2[8];

        if (entity_1 > 0)
        {
            context = entity_1;
            bool flag_0_1;

            do
            {
                void* data_7 = *(context_2 + 8);
                int32_t temp_1 = *(context_2 + 4);
                int32_t source_2;
                int32_t dest_1;
                dest_1 = memcpy(0x943c20, context_2 + 0xc, data_7 & 0xfffffffc);
                void* data_8 = data_7 + 0x2b;
                memcpy(dest_1, source_2, data_7 & 3);
                *(data_8 + 0x943bf5) = 0;
                data_8 &= 0xe0;
                int32_t* context_3 = context_2 + data_8;
                context_2 = context_3 + ((temp_1 + 0x1f) & 0xffffffe0);
                Camera_SetFieldOfView_33(&data_5[5], &Sys_PopStack_15(0x943c20, 0, context_3, temp_1, 1, &item_8)[2]);
                flag_0_1 = context != 1;
                context -= 1;
            } while (flag_0_1);
        }
    }

    return param_2;
}
