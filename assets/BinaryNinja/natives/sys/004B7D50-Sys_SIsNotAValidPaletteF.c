// Original IGI.EXE function: Sys_SIsNotAValidPaletteF (VA 0x004B7D50; static CFG gate PASS, CFG score 1.000).
#include "Sys_SIsNotAValidPaletteF.h"
int32_t Sys_SIsNotAValidPaletteF(int32_t* context, int32_t* param_2)

{
    int32_t* item_c = param_2;
    int32_t data_val;
    void* entity_val;
    int32_t temp_val;
    int32_t* data_1 = Resource_Load(data_val, temp_val, entity_val, nullptr);

    if (*data_1 == 0x4c && *(data_1 + 1) == 0x4f && *(data_1 + 2) == 0x4f && *(data_1 + 3) == 0x50
        && data_1[1] == 3)
    {
        Sys_PushStack_21(context, &data_1[4], data_1[3]);
        return Resource_Unload(param_2);
    }

    int32_t* item_8_1 = param_2;
    Error_Show("'%s' is not a valid palette file.");

    while (true)
        /* nop */
}
