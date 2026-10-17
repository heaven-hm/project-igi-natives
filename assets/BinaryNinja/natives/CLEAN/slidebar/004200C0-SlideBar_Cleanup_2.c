// IGI native provenance: SlideBar_Cleanup_2 - 0x004200C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004200C0-SlideBar_Cleanup_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SlideBar_Cleanup_2.h"
int32_t SlideBar_Cleanup_2(void* context)

{
    char result = *(context + 0xb5);

    if (result)
        return result;

    *(context + 0xb5) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.vValue");
    SymbolRegister_Real32(&item_80, context + 0xa0);
    void* item_e4_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nValue");
    return SymbolRegister_Int32(&item_80, context + 0xb0);
}
