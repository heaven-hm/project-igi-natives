// Original IGI.EXE function: Env_CheckAmbientArea_9 (VA 0x00447D70; static CFG gate PASS, CFG score 1.000).
#include "Env_CheckAmbientArea_9.h"
int32_t Env_CheckAmbientArea_9(void* context)

{
    void* data_2 = context;

    if (*(data_2 + 0x199))
        return 0;

    if (*(data_2 + 0x19a))
        return 1;

    data_2 = *(data_2 + 0x290);
    char f0 = data_2;
    data_2 = -(data_2);
    return data_2 - data_2 + 3;
}
