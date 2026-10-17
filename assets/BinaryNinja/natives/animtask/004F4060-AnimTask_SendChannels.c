// Original IGI.EXE function: AnimTask_SendChannels (VA 0x004F4060; static CFG gate PASS, CFG score 1.000).
#include "AnimTask_SendChannels.h"
void* AnimTask_SendChannels(void* a1)

{
    void* result = Script_ExecuteLevelScript_4(*(a1 + 0x2014c));
    void* result_1 = result;

    if (result_1)
    {
        int32_t v_8 = *(a1 + 0x20154);
        void* v_4_1 = a1 + 0x6c;
        uint32_t valA2 = Script_ParseEnumReal32_15();
        int32_t valA3 = 0;
        valA3 = *(result_1 + 0x1c);
        result = *(((valA2 * 0x180 + valA3) << 2) + &g_a96ae0);

        if (result)
            return result(result_1, &v_8);
    }

    return result;
}
