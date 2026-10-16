#include "00405EC0-Config_Gogfxdisp.h"
/* 0x00405ec0 Config_Gogfxdisp full linked: callers=1 callees=5 */
int32_t Config_Gogfxdisp(int32_t* a1, int32_t a2)

{
    int32_t esi_1 = a2 * 0x564;
    int32_t var_20c = *(esi_1 + 0xbc239c);
    int32_t var_210 = *(esi_1 + 0xbc2398);
    char const* const var_214 = *(esi_1 + &g_bc2394);
    char const* const var_218 = "GOGfxDisp";
    void var_200;
    int32_t eax_5 = Game_DataSymbolLoad(&var_200, "%s(%d, %d, %d);\n");
    char const* const var_224 = esi_1 + 0xbc23a7;
    char const* const var_228 = "GOGfxDevice";
    int32_t edi_1 = eax_5 + Game_DataSymbolLoad(&var_228 + eax_5 + 0x28, "%s("%s");\n");
    var_210 = *(esi_1 + 0xbc25a8);
    var_214 = "GOGfxGamma";
    int32_t edi_2 = edi_1 + Game_DataSymbolLoad(&var_214 + edi_1 + 0x14, "%s(%f);\n");
    int32_t var_220_1 = *(esi_1 + 0xbc23a0);
    var_224 = "GOGfxPerformance";
    var_228 = "%s(%d);\n";
    return sub_4b1700(a1, &var_200,
        edi_2 + Game_DataSymbolLoad(&var_224 + edi_2 + 0x24, var_228));
}
