// Original IGI.EXE function: QTask_ChangeParent_2 (VA 0x00401C10; static CFG gate PASS, CFG score 1.000).
#include "QTask_ChangeParent_2.h"
void* const QTask_ChangeParent_2(void* context, int16_t param_2)

{
    void* const result = *(context + 0x10);

    for (void* i = *(result + 4); i; i = *(i + 4))
    {
        if (*(result + 0x1c) == param_2)
            return result;

        result = i;
    }

    return nullptr;
}
