// Original IGI.EXE function: SoundSys_PlaySoundSample_5 (VA 0x004E6550; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_PlaySoundSample_5.h"
struct status_msg* SoundSys_PlaySoundSample_5(void* a1, int32_t a2)

{
    int32_t kind;
    kind = g_54880e;
    struct status_msg* result = QTask_HandleInput(a1, kind, a2);
    int32_t dstD = a2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    char objC3 = *(~i - 1 + a2 - 1);
    char* v_418_1;
    char* v_414_1;
    void v_400;

    if (objC3 == 0x2f || objC3 == 0x5c)
    {
        int32_t v_410_2 = a2;
        v_414_1 = "%ssounds.qsc";
        v_418_1 = &v_400;
    }
    else
    {
        int32_t v_410_1 = a2;
        v_414_1 = "%s/sounds.qsc";
        v_418_1 = &v_400;
    }

    Game_DataSymbolLoad(v_418_1, v_414_1);
    SoundSys_Update3DPosition_5(result, &v_400);
    return result;
}
