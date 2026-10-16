#include "00485970-StatusMessage_ShowFull.h"
/* 0x00485970 StatusMessage_ShowFull full linked: callers=2 callees=11 */
struct status_msg* StatusMessage_ShowFull(void* ctx, char* message, char* sprite, char* style)

// Sig: void StatusMessage_ShowFull(int timer, char* message, char* sprite, int
// styleByte)
// Note: Full-parameter status message: queues an on-screen HUD message with
// icon and styling (allocates via Mem_Alloc, reads current status word
// 0x540A8C). Params: timer = display duration, message = text, sprite = HUD
// sprite/icon ptr, styleByte = display style byte. Use
// MISC::STATUS_MESSAGE_SHOW wrapper for simple cases.
{
    int32_t kind = Qhash_Init(1);
    kind = g_status_word;
    struct status_msg* result = QTask_HandleInput(ctx, kind, 0);
    char* message_1 = message;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *message_1;
        message_1 = &message_1[1];
        i -= 1;

        if (!cond:0_1)
            break;
    }

    char* eax = Mem_Alloc(~i, 4);
    char* message_2 = message;
    int32_t i_1 = 0xffffffff;
    result->text = eax;

    while (i_1)
    {
        bool cond:1_1 = 0 != *message_2;
        message_2 = &message_2[1];
        i_1 -= 1;

        if (!cond:1_1)
            break;
    }

    int32_t ecx_2 = ~i_1;
    int32_t esi_2;
    int32_t edi_2;
    edi_2 = memcpy(eax, message_2 - ecx_2, ecx_2 & 0xfffffffc);
    memcpy(edi_2, esi_2, ecx_2 & 3);
    char* sprite_1 = sprite;
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool cond:2_1 = 0 != *sprite_1;
        sprite_1 = &sprite_1[1];
        i_2 -= 1;

        if (!cond:2_1)
            break;
    }

    int32_t ecx_6 = ~i_2;
    int32_t esi_4;
    int32_t edi_5;
    edi_5 = memcpy(&result->sprite, sprite_1 - ecx_6, ecx_6 & 0xfffffffc);
    memcpy(edi_5, esi_4, ecx_6 & 3);
    char* style_1 = style;
    int32_t i_3 = 0xffffffff;

    while (i_3)
    {
        bool cond:3_1 = 0 != *style_1;
        style_1 = &style_1[1];
        i_3 -= 1;

        if (!cond:3_1)
            break;
    }

    int32_t ecx_10 = ~i_3;
    int32_t esi_6;
    int32_t edi_8;
    edi_8 = memcpy(&result->style, style_1 - ecx_10, ecx_10 & 0xfffffffc);
    memcpy(edi_8, esi_6, ecx_10 & 3);
    result->style[0x10] = 1;
    result->style[0x11] = 1;
    Qhash_Reset();
    int32_t var_28 = 0;
    StatusMessage_Enqueue(result);
    return result;
}
