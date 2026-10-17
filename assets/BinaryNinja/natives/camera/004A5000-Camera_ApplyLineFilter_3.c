// IGI native provenance: Camera_ApplyLineFilter_3 - 0x004A5000 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004A5000-Camera_ApplyLineFilter_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyLineFilter_3.h"
int32_t Camera_ApplyLineFilter_3(int32_t context , int32_t param_2 , int32_t param_3 , int32_t* param_4, int32_t param_5, struct _EXCEPTION_REGISTRATION_RECORD* param_6, int32_t param_7)

{
    *param_4 = context;
    int32_t entry_ebx;
    param_4[1] = entry_ebx;
    param_4[2] = param_3;
    param_4[3] = param_2;
    param_4[4] = &return_addr;
    param_4[5] = return_addr;
    strncpy(&param_4[8], "02CV", 8);
    TEB* fsbase;
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList;
    param_4[6] = ExceptionList;

    if (ExceptionList == 0xffffffff)
        param_4[7] = 0xffffffff;
    else if (!param_5)
        param_4[7] = *(ExceptionList + 0xc);
    else
    {
        param_4[9] = param_6;

        if (param_5 != 1)
        {
            param_4[7] = param_7;
            int32_t entity_4 = param_5 - 2;

            if (param_5 != 2)
            {
                int32_t item_4_1 = param_2;
                int32_t item_8_1 = param_3;

                if (entity_4 > 6)
                    entity_4 = 6;

                void arg_14;
                memcpy(&param_4[0xa], &arg_14, entity_4 << 2);
            }
        }
        else
            param_4[7] = *(param_6 + 0xc);
    }

    return 0;
}
