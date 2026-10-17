// Original IGI.EXE function: AmbientArea_Setup (VA 0x0044C700; static CFG gate PASS, CFG score 1.000).
#include "AmbientArea_Setup.h"
char* AmbientArea_Setup(void* a1)

{
    int32_t* valA = *(a1 + 0x1b8);

    if (valA)
        Qtask_UpdateList(valA);

    return Script_CallNativeHandler_6(a1 + 0x1bc);
}
