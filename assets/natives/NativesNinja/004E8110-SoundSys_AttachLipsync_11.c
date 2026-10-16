#include "004E8110-SoundSys_AttachLipsync_11.h"
/* 0x004e8110 SoundSys_AttachLipsync_11 full linked: callers=3 callees=6 */
struct status_msg* sub_4e8110(void* a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8 @ 0x24, uint32_t a9, uint32_t a10, uint32_t a11)

{
    struct status_msg* result = QTask_HandleInput(a1, sub_4e8100(), 0);
    result->sprite[0xc] = 1;
    result->sprite[0xd] = 0;
    result->sprite[0xe] = 0;
    result->sprite[0xf] = 0;
    result->sprite[8] = 1;
    result->sprite[9] = 0;
    result->sprite[0xa] = 0;
    result->sprite[0xb] = 0;
    result->text = 0x1010101;
    result->sprite[0] = 1;
    result->sprite[1] = 1;
    result->sprite[2] = 1;
    result->sprite[3] = 1;
    result->sprite[4] = 1;
    sub_5181f0(&result->head[0x2b]);
    g_a5ec60;
    g_a5ec60 += 1;
    result->head[9] = a3;
    result->head[8] = a2;
    result->head[0x28] = a8;
    result->head[0xa] = a4;
    result->head[0xb] = a5;
    result->head[0xc] = a11;
    result->head[0x29] = a9;
    result->head[0x2a] = a10;
    result->head[0x13] = a6;
    result->head[0x14] = a7;
    sub_497570(&result->head[0x15], 0x100);
    int32_t* eax_7 = sub_4b7330(0x1388);
    result->sprite[0x10] = eax_7;
    result->sprite[0x11] = *(&eax_7 + 1);
    result->sprite[0x12] = *(&eax_7 + 2);
    result->sprite[0x13] = *(&eax_7 + 3);
    return result;
}
