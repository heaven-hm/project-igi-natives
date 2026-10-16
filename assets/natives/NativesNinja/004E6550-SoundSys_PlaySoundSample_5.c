#include "004E6550-SoundSys_PlaySoundSample_5.h"
/* 0x004e6550 SoundSys_PlaySoundSample_5 full linked: callers=2 callees=3 */
struct status_msg* sub_4e6550(void* a1, int32_t a2)

{
    int32_t kind;
    kind = g_54880e;
    struct status_msg* result = QTask_HandleInput(a1, kind, a2);
    int32_t edi = a2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    char ecx_3 = *(~i - 1 + a2 - 1);
    char* var_418_1;
    char* var_414_1;
    void var_400;

    if (ecx_3 == 0x2f || ecx_3 == 0x5c)
    {
        int32_t var_410_2 = a2;
        var_414_1 = "%ssounds.qsc";
        var_418_1 = &var_400;
    }
    else
    {
        int32_t var_410_1 = a2;
        var_414_1 = "%s/sounds.qsc";
        var_418_1 = &var_400;
    }

    Game_DataSymbolLoad(var_418_1, var_414_1);
    sub_4e65d0(result, &var_400);
    return result;
}
