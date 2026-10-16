#include "004A8611-Camera_UpdateTransform_13.h"
/* 0x004a8611 Camera_UpdateTransform_13 full linked: callers=4 callees=0 */
int32_t sub_4a8611(int32_t a1)

{
    if (a1 == 1)
        g_936064 = 0x21;
    else if (a1 > 1 && a1 <= 3)
        g_936064 = 0x22;

    return a1;
}
