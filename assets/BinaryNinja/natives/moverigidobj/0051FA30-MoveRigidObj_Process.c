// Original IGI.EXE function: MoveRigidObj_Process (VA 0x0051FA30; static CFG gate PASS, CFG score 1.000).
#include "MoveRigidObj_Process.h"
int32_t MoveRigidObj_Process(void* context)

{
    if (Script_EvaluateCondition_4(context) >= 0)
    {
        int32_t data_1 = Script_SpawnNewTask_6();
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        int32_t data_5 = *(((data_1 * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (data_5)
            data_5(context);
    }

    Script_CallNativeHandler_6(context + 0x1b4);
    DynObj_RegisterSymbol_9(*(context + 0x68), context);
    return QTask_FindType(*(context + 0xe8));
}
