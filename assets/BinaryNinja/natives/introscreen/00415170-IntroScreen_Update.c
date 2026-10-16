#include "IntroScreen_Update.h"
int32_t IntroScreen_Update(int32_t a1, void* a2)

{
    Game_DefineOptions("MovieSubtitle_RegisterFont", MovieSubtitle_RegisterFont, a1, 0);
    Game_DefineOptions("MovieSubtitle_RegisterText", MovieSubtitle_RegisterText, a1, 0);
    int32_t* valA1 = Qvm_Load(a2);

    if (valA1)
    {
        Qvm_Execute(valA1);
        Qvm_Cleanup(valA1);
    }

    Sys_CloseFileStream_23("MovieSubtitle_RegisterFont");
    int32_t result = Sys_CloseFileStream_23("MovieSubtitle_RegisterText");
    result = 1;
    return result;
}
