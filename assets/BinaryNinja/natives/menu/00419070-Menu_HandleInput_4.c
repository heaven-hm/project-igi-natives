#include "Menu_HandleInput_4.h"
int32_t Menu_HandleInput_4(void* a1)

{
    char* objC = *(a1 + 8);

    if (!objC)
        return 0;

    return Sys_ReadFileBlock_24(objC);
}
