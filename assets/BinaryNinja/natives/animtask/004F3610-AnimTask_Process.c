#include "AnimTask_Process.h"
int32_t AnimTask_Process(int32_t* a1 @ 0x8)

{
    int32_t result = Script_GetArg(a1[2], a1[1]);
    *a1 = result * 2 + 1;
    return result;
}
