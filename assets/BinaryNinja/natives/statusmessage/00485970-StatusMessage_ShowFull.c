// Original IGI.EXE function: StatusMessage_ShowFull (VA 0x00485970; static CFG gate FAIL, CFG score 0.818).
#include "StatusMessage_ShowFull.h"
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
        bool flag_0_1 = 0 != *message_1;
        message_1 = &message_1[1];
        i -= 1;

        if (!flag_0_1)
            break;
    }

    char* data_val = Mem_Alloc(~i, 4);
    char* message_2 = message;
    int32_t i_1 = 0xffffffff;
    result->text = data_val;

    while (i_1)
    {
        bool flag_1_1 = 0 != *message_2;
        message_2 = &message_2[1];
        i_1 -= 1;

        if (!flag_1_1)
            break;
    }

    int32_t entity_2 = ~i_1;
    int32_t source_2;
    int32_t dest_2;
    dest_2 = memcpy(data_val, message_2 - entity_2, entity_2 & 0xfffffffc);
    memcpy(dest_2, source_2, entity_2 & 3);
    char* sprite_1 = sprite;
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool flag_2_1 = 0 != *sprite_1;
        sprite_1 = &sprite_1[1];
        i_2 -= 1;

        if (!flag_2_1)
            break;
    }

    int32_t entity_6 = ~i_2;
    int32_t source_4;
    int32_t dest_5;
    dest_5 = memcpy(&result->sprite, sprite_1 - entity_6, entity_6 & 0xfffffffc);
    memcpy(dest_5, source_4, entity_6 & 3);
    char* style_1 = style;
    int32_t i_3 = 0xffffffff;

    while (i_3)
    {
        bool flag_3_1 = 0 != *style_1;
        style_1 = &style_1[1];
        i_3 -= 1;

        if (!flag_3_1)
            break;
    }

    int32_t entity_10 = ~i_3;
    int32_t source_6;
    int32_t dest_8;
    dest_8 = memcpy(&result->style, style_1 - entity_10, entity_10 & 0xfffffffc);
    memcpy(dest_8, source_6, entity_10 & 3);
    result->style[0x10] = 1;
    result->style[0x11] = 1;
    Qhash_Reset();
    int32_t item_28 = 0;
    StatusMessage_Enqueue(result);
    return result;
}
