/* LOGIC NOTE (QTask_UnableToAllocateEven_2 @ 0x00401810)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : Error_
   called by : Level, MenuWindow_Init, Screen, sub_4d0b30, sub_4e6730
   data refs : none
   strings   : Unable to allocate event
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_UnableToAllocateEven_2.h"

int32_t QTask_UnableToAllocateEven_2(int16_t arg1)

{
    int32_t result = 0x20;
    char* i = &data_54f9f2;

    do
    {
        if (!*i)
        {
            int32_t ctx_1 = result * 6;
            *(ctx_1 + &data_54f932) = 1;
            *(ctx_1 + 0x54f930) = arg1;
            *(ctx_1 + 0x54f933) = 0;
            return result;
        }

        i = &i[6];
        result += 1;
    } while (i < &*(data_54ff24 + 2));

    Error_Show("Unable to allocate event");

    while (true)
        /* nop */
}
