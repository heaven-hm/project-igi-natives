/* LOGIC NOTE (Qtask_UpdateList @ 0x00401B20)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : ConditionalSound_Stop, Game_DeleteHandler, HumanPlayer_Setup, Level_InitSprites_6, Level_Load
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Qtask_UpdateList.h"

int32_t Qtask_UpdateList(int32_t* arg1)

// Sig: void Qtask_UpdateList(int* p1)
// Note: Update all QTask list, Params: p1 ??
{
    void* result = *arg1;

    if (result)
        *(result + 0x18) -= 1;

    int32_t* src = data_567c4c;
    int32_t result = data_567c40 - 1;
    int32_t ctx = *(src + arg1);
    data_567c40 = result;

    if (ctx != result)
    {
        int32_t tmp_1 = data_567c3c;
        result = *(tmp_1 + (result << 2)) * data_567c48 + data_567c38;
        int32_t dst_2 = *(tmp_1 + (ctx << 2));
        int32_t src_1 = *(src + result);
        *(tmp_1 + (ctx << 2)) = *(tmp_1 + (src_1 << 2));
        *(data_567c3c + (src_1 << 2)) = dst_2;
        *(data_567c4c + result) = ctx;
    }

    return result;
}
