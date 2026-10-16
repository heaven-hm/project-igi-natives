#include "Camera_ApplyPostProcess_23.h"
int32_t Camera_ApplyPostProcess_23()

{
    int32_t result = Camera_ApplyWideScreen_9();

    if (!g_9360a4)
        return result;

    /* tailcall */
    return sub_4ad8ba();
}
