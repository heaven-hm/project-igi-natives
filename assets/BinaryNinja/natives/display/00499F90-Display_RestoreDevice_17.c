// Original IGI.EXE function: Display_RestoreDevice_17 (VA 0x00499F90; static CFG gate PASS, CFG score 1.000).
#include "Display_RestoreDevice_17.h"
int32_t Display_RestoreDevice_17(void* context, char param_2)

{
    *(context + 0x56ac) = param_2;
    return param_2;
}
