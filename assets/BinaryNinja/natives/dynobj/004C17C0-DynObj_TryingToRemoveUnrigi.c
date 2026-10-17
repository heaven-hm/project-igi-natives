// Original IGI.EXE function: DynObj_TryingToRemoveUnrigi (VA 0x004C17C0; static CFG gate PASS, CFG score 1.000).
#include "DynObj_TryingToRemoveUnrigi.h"
int32_t DynObj_TryingToRemoveUnrigi(int32_t* context, int32_t param_2)

{
    int32_t result = 0;
    int32_t entity_val = *context;

    if (entity_val > 0)
    {
        int32_t* temp_1 = &context[2];

        do
        {
            if (*temp_1 == param_2)
            {
                *context = entity_val - 1;
                context[result + 2] = context[entity_val + 1];
                return result;
            }

            result += 1;
            temp_1 = &temp_1[1];
        } while (result < entity_val);
    }

    Error_Show("Trying to remove unrigistered QTask from QTaskList");

    while (true)
        /* nop */
}
