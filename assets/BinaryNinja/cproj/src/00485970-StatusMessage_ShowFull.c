#include "gi_platform.h"
#include "00485970-StatusMessage_ShowFull.h"
struct status_msg* StatusMessage_ShowFull(void* ctx, char* message, char* sprite, char* style)

// Sig: void StatusMessage_ShowFull(int timer, char* message, char* sprite, int
// styleByte)
// Note: Full-parameter status message: queues an on-screen HUD message with
// icon and styling (allocates via Mem_Alloc, reads current status word
// 0x540A8C). Params: timer = display duration, message = text, sprite = HUD
// sprite/icon ptr, styleByte = display style byte. Use
// MISC::STATUS_MESSAGE_SHOW wrapper for simple cases.
{
    Qhash_Init(1);
    int32_t kind = g_status_word;
    struct status_msg* result = QTask_HandleInput(ctx, kind, 0);
    char* message_1 = message;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *message_1;
        message_1 = &message_1[1];
        i -= 1;

        if (!cond_0_1)
            break;
    }

    char* valA = Mem_Alloc(~i, 4);
    char* message_2 = message;
    int32_t i_1 = 0xffffffff;
    result->text = valA;

    while (i_1)
    {
        bool cond_1_1 = 0 != *message_2;
        message_2 = &message_2[1];
        i_1 -= 1;

        if (!cond_1_1)
            break;
    }

    int32_t objC2 = ~i_1;
    int32_t srcS2;
    int32_t dstD2;
    dstD2 = memcpy(valA, message_2 - objC2, objC2 & 0xfffffffc);
    memcpy(dstD2, srcS2, objC2 & 3);
    char* sprite_1 = sprite;
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool cond_2_1 = 0 != *sprite_1;
        sprite_1 = &sprite_1[1];
        i_2 -= 1;

        if (!cond_2_1)
            break;
    }

    int32_t objC6 = ~i_2;
    int32_t srcS4;
    int32_t dstD5;
    dstD5 = memcpy(&result->sprite, sprite_1 - objC6, objC6 & 0xfffffffc);
    memcpy(dstD5, srcS4, objC6 & 3);
    char* style_1 = style;
    int32_t i_3 = 0xffffffff;

    while (i_3)
    {
        bool cond_3_1 = 0 != *style_1;
        style_1 = &style_1[1];
        i_3 -= 1;

        if (!cond_3_1)
            break;
    }

    int32_t objC10 = ~i_3;
    int32_t srcS6;
    int32_t dstD8;
    dstD8 = memcpy(&result->style, style_1 - objC10, objC10 & 0xfffffffc);
    memcpy(dstD8, srcS6, objC10 & 3);
    result->style[0x10] = 1;
    result->style[0x11] = 1;
    Qhash_Reset();
    int32_t v_28 = 0;
    StatusMessage_Enqueue(result);
    return result;
}
