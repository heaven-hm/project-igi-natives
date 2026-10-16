#include "004EBA90-Define_Group.h"
/* 0x004eba90 Define_Group full linked: callers=0 callees=14 */
int32_t Define_Group(int32_t a1, void* a2, float a3)

// Sig: void Define_Group(...)
// Note: Defines a GROUP entry (sound-group/entity grouping) during definition
// parsing. Parser-context only.
{
    int32_t ebx = 1;
    void var_60;
    void* flags = &var_60;
    char var_7c = 1;
    int32_t var_84 = 1;
    void var_3e;
    char* kind = sub_4b8a80(a3, 0, &var_3e, 0x20);
    kind = g_54db4a;
    char var_40 = 1;
    struct status_msg* eax = QTask_HandleInput(a2, kind, &flags);
    Script_SetSymbolContext("DefineGroup", eax);
    Script_SetSymbolContext("DefineSound", eax);
    Script_SetSymbolContext("DefineGraph", eax);
    Script_SetSymbolContext("DefineTriggerOnce", eax);

    if (sub_4b8b00(a3, 1))
    {
        int32_t i;

        do
        {
            sub_4b8a20(a3, ebx);
            ebx += 1;
            i = sub_4b8b00(a3, ebx);
        } while (i);
        var_84 = ebx;
    }

    Script_SetSymbolContext("DefineGroup", a2);
    Script_SetSymbolContext("DefineSound", a2);
    Script_SetSymbolContext("DefineGraph", a2);
    Script_SetSymbolContext("DefineTriggerOnce", a2);
    double var_70 = var_84;
    int32_t var_78 = ebx;
    char* var_68 = &g_567c74;
    memcpy(a1, &var_78, 0x18);
    return a1;
}
