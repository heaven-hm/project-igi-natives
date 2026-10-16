#include "00450CE0-AI_EventBroadcast.h"
/* 0x00450ce0 AI_EventBroadcast full linked: callers=13 callees=5 */
int32_t* sub_450ce0(int32_t a1)

{
    int32_t i = 0;
    int32_t* result = sub_460c60();

    if (*result > 0)
    {
        int32_t esi_1 = 8;

        do
        {
            int32_t ecx_1 = 0;
            ecx_1 = *(*(sub_460c60() + esi_1) + 0x1c);
            uint32_t eax_3 = sub_450c80();
            (*(((ecx_1 + eax_3 * 0x180) << 2) + &g_a96ae0))(*(sub_460c60() + esi_1), a1);
            i += 1;
            esi_1 += 4;
            result = sub_460c60();
        } while (i < *result);
    }

    return result;
}
