// Original IGI.EXE function: Env_ActivateEntity (VA 0x00440C00; static CFG gate PASS, CFG score 1.000).
#include "Env_ActivateEntity.h"
void* Env_ActivateEntity(void* context)

{
    void* result = context;
    result = *(result + 0x2a1);
    return result;
}
