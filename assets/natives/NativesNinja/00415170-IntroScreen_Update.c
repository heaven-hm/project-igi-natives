#include "00415170-IntroScreen_Update.h"
/* 0x00415170 IntroScreen_Update full linked: callers=0 callees=7 */
int32_t IntroScreen_Update(int32_t a1, void* a2)

{
    Game_DefineOptions("MovieSubtitle_RegisterFont", MovieSubtitle_RegisterFont, a1, 0);
    Game_DefineOptions("MovieSubtitle_RegisterText", MovieSubtitle_RegisterText, a1, 0);
    int32_t* eax_1 = Qvm_Load(a2);

    if (eax_1)
    {
        Qvm_Execute(eax_1);
        Qvm_Cleanup(eax_1);
    }

    sub_4b8920("MovieSubtitle_RegisterFont");
    int32_t result = sub_4b8920("MovieSubtitle_RegisterText");
    result = 1;
    return result;
}
