#include "Camera_SetFieldOfView_20.h"
void Camera_SetFieldOfView_20()

{
    if (!g_c32548)
    {
        Camera_ApplyWideScreen_19(0xfffffffd);
        g_c32548 = 1;
    }
}
