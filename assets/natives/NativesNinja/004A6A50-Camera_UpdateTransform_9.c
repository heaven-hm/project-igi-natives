#include "004A6A50-Camera_UpdateTransform_9.h"
/* 0x004a6a50 Camera_UpdateTransform_9 full linked: callers=7 callees=5 */
void __fastcall sub_4a6a50(void** a1)

{
    void** var_8 = a1;
    int32_t* lpMem_1;
    int32_t* lpMem = lpMem_1;

    if (!lpMem)
        return;

    int32_t eax_1 = g_c3242c;

    if (eax_1 != 3)
    {
        char* eax_3;

        if (eax_1 == 2)
            eax_3 = sub_4ab7f5(lpMem, &var_8, &lpMem_1);

        if (eax_1 != 2 || !eax_3)
            HeapFree(g_c32428, HEAP_NONE, lpMem);
        else
            sub_4ab84c(var_8, lpMem_1, eax_3);
    }
    else
    {
        int32_t* eax_2 = sub_4aad90(lpMem);

        if (!eax_2)
            HeapFree(g_c32428, HEAP_NONE, lpMem);
        else
            sub_4aadbb(eax_2, lpMem);
    }
}
