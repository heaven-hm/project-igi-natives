// IGI native provenance: Config_Gogfxdisp - 0x00405EC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00405EC0-Config_Gogfxdisp.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_Gogfxdisp.h"
int32_t Config_Gogfxdisp(int32_t* context, int32_t param_2)

{
    int32_t source_1 = param_2 * 0x564;
    int32_t item_20c = *(source_1 + 0xbc239c);
    int32_t item_210 = *(source_1 + 0xbc2398);
    char const* const item_214 = *(source_1 + &g_bc2394);
    char const* const item_218 = "GOGfxDisp";
    void item_200;
    int32_t data_5 = Game_DataSymbolLoad(&item_200, "%s(%d, %d, %d);\n");
    char const* const item_224 = source_1 + 0xbc23a7;
    char const* const item_228 = "GOGfxDevice";
    int32_t dest_1 = data_5 + Game_DataSymbolLoad(&item_228 + data_5 + 0x28, "%s("%s");\n");
    item_210 = *(source_1 + 0xbc25a8);
    item_214 = "GOGfxGamma";
    int32_t dest_2 = dest_1 + Game_DataSymbolLoad(&item_214 + dest_1 + 0x14, "%s(%f);\n");
    int32_t item_220_1 = *(source_1 + 0xbc23a0);
    item_224 = "GOGfxPerformance";
    item_228 = "%s(%d);\n";
    return Sys_CloseFileStream_4(context, &item_200,
        dest_2 + Game_DataSymbolLoad(&item_224 + dest_2 + 0x24, item_228));
}
