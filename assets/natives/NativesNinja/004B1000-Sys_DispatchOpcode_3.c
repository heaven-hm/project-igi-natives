#include "004B1000-Sys_DispatchOpcode_3.h"
/* 0x004b1000 Sys_DispatchOpcode_3 full linked: callers=5 callees=0 */
int32_t sub_4b1000(int32_t a1, int32_t a2, int32_t a3)

{
    return (*(((a2 + a1 * 0x82) << 2) + &g_a950a4))(a3);
}
