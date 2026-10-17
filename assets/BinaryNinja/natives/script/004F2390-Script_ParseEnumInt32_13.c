// Original IGI.EXE function: Script_ParseEnumInt32_13 (VA 0x004F2390; static CFG gate FAIL, CFG score 0.667).
#include "Script_ParseEnumInt32_13.h"
void* Script_ParseEnumInt32_13(void* context)

{
    int32_t temp_val = 0;
    void* data_1 = context;
    temp_val = *(data_1 + 0x1c);
    (*(((*g_a76c08 * 0x180 + temp_val) << 2) + &g_a96ae0))(data_1, &context);
    return context;
}
