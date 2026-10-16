#include "00431A80-Vehicle_InitPlane_2.h"
/* 0x00431a80 Vehicle_InitPlane_2 full linked: callers=2 callees=2 */
int32_t* Vehicle_InitPlane_2(void* a1)

{
    int32_t* result = *(a1 + 0x74c);

    if (result)
    {
        void* eax = *result;

        if (eax)
            sub_4e6c00(eax);

        result = Qtask_UpdateList(*(a1 + 0x74c));
        *(a1 + 0x74c) = 0;
    }

    return result;
}
