#include "gi_platform.h"
#include "004A8611-Camera_UpdateTransform_13.h"
int32_t Camera_UpdateTransform_13(int32_t a1)

{
    if (a1 == 1)
        g_936064 = 0x21;
    else if (a1 > 1 && a1 <= 3)
        g_936064 = 0x22;

    return a1;
}
