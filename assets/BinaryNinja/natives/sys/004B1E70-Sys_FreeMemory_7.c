#include "Sys_FreeMemory_7.h"
char* Sys_FreeMemory_7(char* a1)

{
    return Sys_AllocateMemory_7(nullptr, 0, a1);
}
