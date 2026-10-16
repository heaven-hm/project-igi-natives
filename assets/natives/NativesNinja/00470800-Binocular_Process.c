#include "00470800-Binocular_Process.h"
/* 0x00470800 Binocular_Process full linked: callers=5 callees=2 */
int32_t* sub_470800(void* a1)

{
    int32_t* result = *(a1 + 0x1c4);

    if (result)
    {
        void* eax = *result;

        if (eax)
            sub_4e6c00(eax);

        result = Qtask_UpdateList(*(a1 + 0x1c4));
        *(a1 + 0x1c4) = 0;
    }

    return result;
}
