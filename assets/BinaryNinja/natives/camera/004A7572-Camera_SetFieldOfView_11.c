#include "Camera_SetFieldOfView_11.h"
char* Camera_SetFieldOfView_11(double* a1, char* a2, int32_t a3)

{
    g_9361c4 = 1;
    char* result = Camera_UpdateViewCone_10(a1, a2, a3);
    g_9361c4 = 0;
    return result;
}
