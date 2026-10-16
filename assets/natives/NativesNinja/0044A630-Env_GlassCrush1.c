#include "0044A630-Env_GlassCrush1.h"
/* 0x0044a630 Env_GlassCrush1 full linked: callers=2 callees=5 */
struct status_msg* sub_44a630(int32_t a1)

{
    char* eax_3 = &g_53c880[sub_4b47c0(Level_SetMission_5(), 3) << 5];
    struct status_msg* result = sub_4e6b00(sub_4f0ee0(), eax_3);

    if (!result)
        return result;

    return sub_4e6c30(result, a1);
}
