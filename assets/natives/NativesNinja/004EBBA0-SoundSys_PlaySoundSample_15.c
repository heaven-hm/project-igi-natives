#include "004EBBA0-SoundSys_PlaySoundSample_15.h"
/* 0x004ebba0 SoundSys_PlaySoundSample_15 full linked: callers=1 callees=1 */
struct status_msg* sub_4ebba0(void* a1, uint32_t a2)

{
    int32_t kind;
    kind = g_54db68;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);

    if (result)
    {
        result->head[8] = 0x3f800000;
        result->head[9] = 0;
        result->head[0xa] = 0;
        result->head[0xb] = 0;
        result->head[0xc] = 0x3f800000;
        result->head[0xd] = 0;
        result->head[0xe] = 0;
        result->head[0xf] = 0;
        result->head[0x10] = 0x3f800000;
        result->head[0x11] = 0;
        result->head[0x18] = a2;
    }

    return result;
}
