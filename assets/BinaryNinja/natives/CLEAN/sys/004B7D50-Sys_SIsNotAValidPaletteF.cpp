// IGI native provenance: Sys_SIsNotAValidPaletteF - 0x004B7D50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7D50-Sys_SIsNotAValidPaletteF.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
