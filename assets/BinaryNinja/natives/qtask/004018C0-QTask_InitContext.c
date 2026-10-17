// Original IGI.EXE function: QTask_InitContext (VA 0x004018C0; static CFG gate PASS, CFG score 1.000).
#include "QTask_InitContext.h"
uint32_t QTask_InitContext(char a1)

{
    uint32_t result = a1 * 3;
    *((result << 1) + &g_54f932) = 0;
    return result;
}
