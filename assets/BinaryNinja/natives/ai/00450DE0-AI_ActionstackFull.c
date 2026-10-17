// Original IGI.EXE function: AI_ActionstackFull (VA 0x00450DE0; static CFG gate PASS, CFG score 1.000).
#include "AI_ActionstackFull.h"
void* AI_ActionstackFull(void* a1)

{
    int32_t i = 0;
    void* result = a1 + 0x908;

    do
    {
        if (!*(result + 0x2c))
            return result;

        i += 1;
        result += 0x30;
    } while (i < 0x20);

    Error_Show("ActionStack full");

    while (true)
        /* nop */
}
