// IGI native provenance: MenuScreen_OnEvent - 0x00422200 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00422200-MenuScreen_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuScreen_OnEvent.h"
int32_t MenuScreen_OnEvent(void* context)

{
    int32_t result = *(context + 0x1a0);

    if (result)
    {
        void item_100;
        Script_ParseEnumString_6(&item_100, context);
        void* item_110_1 = &item_100;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.nUserData");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0x1a0) = 0;
    }

    return result;
}
