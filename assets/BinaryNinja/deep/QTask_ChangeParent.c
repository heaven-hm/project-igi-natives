/* LOGIC NOTE (QTask_ChangeParent @ 0x004014E0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : QTask_DeleteTask
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_ChangeParent.h"

int32_t QTask_ChangeParent(int16_t arg1)

{
    int32_t result = 0;

    for (int32_t i = 0; i < 0x10; i += 1)
    {
        char tmp_1 = *(i + &data_54ff24);

        if (tmp_1 != 0xff)
        {
            uint32_t tmp_5 = tmp_1 * 0x180 + arg1;
            tmp_5 = *((tmp_5 << 2) + &data_a96ae0);
            tmp_5 = tmp_5;
            result |= tmp_5 << (i & 0x1f);
        }
    }

    *(&result + 1) |= 0x80;
    return result;
}
