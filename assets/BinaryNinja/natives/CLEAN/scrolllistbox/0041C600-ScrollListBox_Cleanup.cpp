// IGI native provenance: ScrollListBox_Cleanup - 0x0041C600 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041C600-ScrollListBox_Cleanup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ScrollListBox_Cleanup.h"
int32_t ScrollListBox_Cleanup(void* context)

{
    char result = *(context + 0x12a8);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.nActiveID");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0x12a8) = 0;
    }

    return result;
}
