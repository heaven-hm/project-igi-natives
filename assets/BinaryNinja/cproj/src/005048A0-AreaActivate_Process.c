#include "gi_platform.h"
#include "005048A0-AreaActivate_Process.h"
int32_t AreaActivate_Process(void* a1)

{
    (*(int32_t*)(uintptr_t)(a1 + 0xa8)) = 0;
    void* v_8 = a1;
    int32_t v_4 = 0;
    int32_t ctxB = 0;
    int32_t result;

    for (int32_t i = 0xa7a648; i < &g_a7a7bc; )
    {
        result = 1 << (ctxB & 0x1f);

        if ((*(int32_t*)(uintptr_t)(a1 + 0xac)) & result)
        {
            (*i)(&v_8);
            result = (*(int32_t*)(uintptr_t)(a1 + 0xa8)) + v_4;
            (*(int32_t*)(uintptr_t)(a1 + 0xa8)) = result;
            v_4 = 0;
        }

        i += 0xc;
        ctxB += 1;
    }

    int32_t* i_1 = (*(int32_t*)(uintptr_t)(a1 + 8));

    if (*i_1 && i_1)
    {
        int32_t tmpD2 = g_afa7e0;

        do
        {
            int32_t* srcS1 = *i_1;
            void* valA5;

            if (!srcS1)
                valA5 = nullptr;
            else
            {
                int32_t valA2 = *srcS1;
                int32_t valA3 = -(valA2);
                valA5 = (valA3 - valA3) & srcS1;
            }

            *((tmpD2 << 2) + &g_afa6e0) = valA5;
            int32_t tmpD3 = tmpD2 + 1;
            int32_t valA6 = 0;
            g_afa7e0 = tmpD3;
            valA6 = i_1[7];
            result = *((valA6 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i_1);
                tmpD3 = g_afa7e0;
            }

            i_1 = *((tmpD3 << 2) + &g_afa6dc);
            tmpD2 = tmpD3 - 1;
            g_afa7e0 = tmpD2;
        } while (i_1);
    }

    return result;
}
