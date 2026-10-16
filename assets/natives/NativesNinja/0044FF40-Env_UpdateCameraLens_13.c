#include "0044FF40-Env_UpdateCameraLens_13.h"
/* 0x0044ff40 Env_UpdateCameraLens_13 full linked: callers=4 callees=2 */
int32_t* sub_44ff40(void* a1)

{
    int32_t* result = sub_44ff80(a1);
    result = *(a1 + 0x3e4a);

    if (result)
    {
        result = *(a1 + 0x3e4c);

        if (result)
        {
            result = Qtask_UpdateList(result);
            *(a1 + 0x3e4c) = 0;
        }

        *(a1 + 0x3e4a) = 0;
    }

    return result;
}
