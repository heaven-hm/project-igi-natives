// IGI native provenance: Car_Cleanup_3 - 0x0042FD40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042FD40-Car_Cleanup_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Car_Cleanup_3.h"
int32_t Car_Cleanup_3(void* context)

{
    char result = *(context + 0x2ed4);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        *(context + 0x2ed4) = 0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.isExploded");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0x2ed4) = 0;
    }

    return result;
}
