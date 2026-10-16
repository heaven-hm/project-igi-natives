#include "004A6787-Camera_ApplyPostProcess_8.h"
/* 0x004a6787 Camera_ApplyPostProcess_8 full linked: callers=1 callees=5 */
int32_t sub_4a6787(int32_t a1)

{
    enum HEAP_FLAGS flOptions = HEAP_NONE;
    flOptions = !a1;
    HANDLE eax = HeapCreate(flOptions, 0x1000, 0);
    g_c32428 = eax;

    if (eax)
    {
        int32_t eax_1 = sub_4a663f();
        g_c3242c = eax_1;
        void** eax_2;

        if (eax_1 != 3)
        {
            if (eax_1 != 2)
                return 1;

            eax_2 = sub_4ab599();
        }
        else
            eax_2 = sub_4aad48(0x3f8);

        if (eax_2)
            return 1;

        HeapDestroy(g_c32428);
    }

    return 0;
}
