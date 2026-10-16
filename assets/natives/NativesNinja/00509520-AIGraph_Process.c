#include "00509520-AIGraph_Process.h"
/* 0x00509520 AIGraph_Process full linked: callers=0 callees=2 */
int32_t sub_509520(void* a1, int32_t* a2)

{
    if (!*(a1 + 0xb8))
        sub_5092e0(a1);

    int32_t eax_1 = *(a1 + 0x58);
    return sub_4f9eb0(*a2, "RouteTable", 0xa, *(a1 + 0xb8), (eax_1 * eax_1) << 3);
}
