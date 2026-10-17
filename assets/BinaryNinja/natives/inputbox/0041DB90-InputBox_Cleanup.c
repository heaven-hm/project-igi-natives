// IGI native provenance: InputBox_Cleanup - 0x0041DB90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041DB90-InputBox_Cleanup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "InputBox_Cleanup.h"
int32_t InputBox_Cleanup(void* context)

{
    char result = *(context + 0x194);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.zData");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0x194) = 0;
    }

    return result;
}
