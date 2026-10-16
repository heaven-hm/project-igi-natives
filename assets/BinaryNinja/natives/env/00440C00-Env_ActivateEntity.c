#include "Env_ActivateEntity.h"
void* Env_ActivateEntity(void* a1)

{
    void* result = a1;
    result = *(result + 0x2a1);
    return result;
}
