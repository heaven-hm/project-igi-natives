// Original IGI.EXE function: Script_ExecuteLevelScript_14 (VA 0x004F3D30; static CFG gate FAIL, CFG score 0.833).
#include "Script_ExecuteLevelScript_14.h"
int32_t Script_ExecuteLevelScript_14(void* a1, int32_t* a2)

{
    int32_t* v_28 = *(a1 + 0x2014c);
    void* valA1 = Script_ExecuteLevelScript_4(v_28);
    int32_t result = *a2;
    int32_t v_14;
    memcpy(&v_14, a2, 0x14);
    v_14 = result + 0xe8;
    memcpy(result, a1 + 0x6c, 0xe8);

    if (valA1)
    {
        uint32_t valA3 = Script_FormatString_15();
        int32_t valA4 = 0;
        valA4 = *(valA1 + 0x1c);
        result = *(((valA3 * 0x180 + valA4) << 2) + &g_a96ae0);

        if (result)
        {
            v_28 = &v_14;
            return result(valA1, v_28);
        }
    }

    return result;
}
