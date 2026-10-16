#include "0049A450-Display_RestoreDevice_18.h"
/* 0x0049a450 Display_RestoreDevice_18 full linked: callers=6 callees=5 */
struct status_msg* sub_49a450(uint32_t a1, void* a2, int32_t a3, int32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8, uint32_t a9, char* a10, uint32_t a11)

{
    int32_t kind;
    kind = g_543c64;
    struct status_msg* result = QTask_HandleInput(a2, kind, 0);
    result->head[0x1a] = a1;
    result->head[0x1b] = a5;
    result->head[0x27] = a6;
    result->head[0x28] = a7;
    result->head[0x2a] = a8;
    result->head[0x29] = a9;
    result->text = a10;
    result->head[0x2b] = a11;
    result->head[0x26] = 0;

    if (!a2)
    {
        result->sprite[0] = 0;
        result->sprite[1] = 0;
        result->sprite[2] = 0;
        result->sprite[3] = 0;
    }
    else
    {
        int32_t* eax_2 = QTask_LinkEventHandler_2(a2);
        result->sprite[0] = eax_2;
        result->sprite[1] = *(&eax_2 + 1);
        result->sprite[2] = *(&eax_2 + 2);
        result->sprite[3] = *(&eax_2 + 3);
    }

    memcpy(&result->head[8], a3, 0x18);
    memcpy(&result->head[0x1c], a4, 0x28);

    if (a8)
        sub_4c6890(a1, result, 0);

    return result;
}
