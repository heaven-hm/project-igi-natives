// Original IGI.EXE function: Menu_HandleInput_4 (VA 0x00419070; static CFG gate PASS, CFG score 1.000).
#include "Menu_HandleInput_4.h"
int32_t Menu_HandleInput_4(void* context)

{
    char* entity_val = *(context + 8);

    if (!entity_val)
        return 0;

    return Sys_ReadFileBlock_24(entity_val);
}
