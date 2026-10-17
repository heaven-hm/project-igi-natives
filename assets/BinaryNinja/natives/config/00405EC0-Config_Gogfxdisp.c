// Original IGI.EXE function: Config_Gogfxdisp (VA 0x00405EC0; static CFG gate PASS, CFG score 1.000).
#include "Config_Gogfxdisp.h"
int32_t Config_Gogfxdisp(int32_t* a1, int32_t a2)

{
    int32_t srcS1 = a2 * 0x564;
    int32_t v_20c = *(srcS1 + 0xbc239c);
    int32_t v_210 = *(srcS1 + 0xbc2398);
    char const* const v_214 = *(srcS1 + &g_bc2394);
    char const* const v_218 = "GOGfxDisp";
    void v_200;
    int32_t valA5 = Game_DataSymbolLoad(&v_200, "%s(%d, %d, %d);\n");
    char const* const v_224 = srcS1 + 0xbc23a7;
    char const* const v_228 = "GOGfxDevice";
    int32_t dstD1 = valA5 + Game_DataSymbolLoad(&v_228 + valA5 + 0x28, "%s("%s");\n");
    v_210 = *(srcS1 + 0xbc25a8);
    v_214 = "GOGfxGamma";
    int32_t dstD2 = dstD1 + Game_DataSymbolLoad(&v_214 + dstD1 + 0x14, "%s(%f);\n");
    int32_t v_220_1 = *(srcS1 + 0xbc23a0);
    v_224 = "GOGfxPerformance";
    v_228 = "%s(%d);\n";
    return Sys_CloseFileStream_4(a1, &v_200,
        dstD2 + Game_DataSymbolLoad(&v_224 + dstD2 + 0x24, v_228));
}
