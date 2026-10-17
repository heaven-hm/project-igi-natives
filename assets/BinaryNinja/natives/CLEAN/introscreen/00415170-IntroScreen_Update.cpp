// IGI native provenance: IntroScreen_Update - 0x00415170 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00415170-IntroScreen_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "IntroScreen_Update.h"
int32_t IntroScreen_Update(int32_t context, void* param_2)

{
    Game_DefineOptions("MovieSubtitle_RegisterFont", MovieSubtitle_RegisterFont, context, 0);
    Game_DefineOptions("MovieSubtitle_RegisterText", MovieSubtitle_RegisterText, context, 0);
    int32_t* data_1 = Qvm_Load(param_2);

    if (data_1)
    {
        Qvm_Execute(data_1);
        Qvm_Cleanup(data_1);
    }

    Sys_CloseFileStream_23("MovieSubtitle_RegisterFont");
    int32_t result = Sys_CloseFileStream_23("MovieSubtitle_RegisterText");
    result = 1;
    return result;
}
