#include "004018C0-QTask_InitContext.h"
/* 0x004018c0 QTask_InitContext full linked: callers=169 callees=0 */
uint32_t QTask_InitContext(char a1)

{
    uint32_t result = a1 * 3;
    *((result << 1) + &g_54f932) = 0;
    return result;
}
