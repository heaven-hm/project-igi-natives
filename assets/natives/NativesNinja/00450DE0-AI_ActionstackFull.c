#include "00450DE0-AI_ActionstackFull.h"
/* 0x00450de0 AI_ActionstackFull full linked: callers=1 callees=1 */
void* sub_450de0(void* a1)

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
