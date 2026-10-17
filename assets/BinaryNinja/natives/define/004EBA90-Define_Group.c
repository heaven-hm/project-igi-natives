// Original IGI.EXE function: Define_Group (VA 0x004EBA90; static CFG gate PASS, CFG score 0.976).
#include "Define_Group.h"
int32_t Define_Group(int32_t a1, void* a2, float a3)

// Sig: void Define_Group(...)
// Note: Defines a GROUP entry (sound-group/entity grouping) during definition
// parsing. Parser-context only.
{
    int32_t ctxB = 1;
    void v_60;
    void* flags = &v_60;
    char v_7c = 1;
    int32_t v_84 = 1;
    void v_3e;
    char* kind = Sys_ResolveSymbol_23(a3, 0, &v_3e, 0x20);
    kind = g_54db4a;
    char v_40 = 1;
    struct status_msg* valA = QTask_HandleInput(a2, kind, &flags);
    Script_SetSymbolContext("DefineGroup", valA);
    Script_SetSymbolContext("DefineSound", valA);
    Script_SetSymbolContext("DefineGraph", valA);
    Script_SetSymbolContext("DefineTriggerOnce", valA);

    if (Sys_AllocateMemory_24(a3, 1))
    {
        int32_t i;

        do
        {
            Script_GetArg(a3, ctxB);
            ctxB += 1;
            i = Sys_AllocateMemory_24(a3, ctxB);
        } while (i);
        v_84 = ctxB;
    }

    Script_SetSymbolContext("DefineGroup", a2);
    Script_SetSymbolContext("DefineSound", a2);
    Script_SetSymbolContext("DefineGraph", a2);
    Script_SetSymbolContext("DefineTriggerOnce", a2);
    double v_70 = v_84;
    int32_t v_78 = ctxB;
    char* v_68 = &g_567c74;
    memcpy(a1, &v_78, 0x18);
    return a1;
}
