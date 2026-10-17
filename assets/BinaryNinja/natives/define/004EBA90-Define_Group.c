// Original IGI.EXE function: Define_Group (VA 0x004EBA90; static CFG gate PASS, CFG score 0.976).
#include "Define_Group.h"
int32_t Define_Group(int32_t context, void* param_2, float param_3)

// Sig: void Define_Group(...)
// Note: Defines a GROUP entry (sound-group/entity grouping) during definition
// parsing. Parser-context only.
{
    int32_t context_val = 1;
    void item_60;
    void* flags = &item_60;
    char item_7c = 1;
    int32_t item_84 = 1;
    void item_3e;
    char* kind = Sys_ResolveSymbol_23(param_3, 0, &item_3e, 0x20);
    kind = g_54db4a;
    char item_40 = 1;
    struct status_msg* data_val = QTask_HandleInput(param_2, kind, &flags);
    Script_SetSymbolContext("DefineGroup", data_val);
    Script_SetSymbolContext("DefineSound", data_val);
    Script_SetSymbolContext("DefineGraph", data_val);
    Script_SetSymbolContext("DefineTriggerOnce", data_val);

    if (Sys_AllocateMemory_24(param_3, 1))
    {
        int32_t i;

        do
        {
            Script_GetArg(param_3, context_val);
            context_val += 1;
            i = Sys_AllocateMemory_24(param_3, context_val);
        } while (i);
        item_84 = context_val;
    }

    Script_SetSymbolContext("DefineGroup", param_2);
    Script_SetSymbolContext("DefineSound", param_2);
    Script_SetSymbolContext("DefineGraph", param_2);
    Script_SetSymbolContext("DefineTriggerOnce", param_2);
    double item_70 = item_84;
    int32_t item_78 = context_val;
    char* item_68 = &g_567c74;
    memcpy(context, &item_78, 0x18);
    return context;
}
