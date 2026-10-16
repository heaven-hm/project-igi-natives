#include "00452C60-AI_TakeCover_4.h"
/* 0x00452c60 AI_TakeCover_4 full linked: callers=2 callees=5 */
int32_t* sub_452c60(void* a1, int32_t a2, int32_t a3, int32_t a4)

{
    int32_t* result = sub_452be0(*(a1 + 0x50), a2);

    if (!result)
    {
        result = g_58a9e8;

        if (*result)
        {
            sub_4af960(result);
            result[1] = 0;
            *result = 0;
            sub_4af8f0(&g_57d768, result);
            void* eax_2 = sub_4f9720(a1, a2);
            result[4] = 0;
            result[2] = *(a1 + 0x50);
            result[3] = a2;
            result[5] = *(eax_2 + 0x28) * 0.5f;
            result[6] = *(eax_2 + 0x28) * 0.5f;
        }

        if (!*result || !result)
            return 0;
    }

    result[4] += 1;
    sub_452b80(result, a3, a4, 1);
    return result;
}
