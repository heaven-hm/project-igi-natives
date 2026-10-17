// Original IGI.EXE function: ConditionalContainer_Cleanup (VA 0x00487980; static CFG gate PASS, CFG score 1.000).
#include "ConditionalContainer_Cleanup.h"
int32_t ConditionalContainer_Cleanup(void* a1)

{
    char result = *(a1 + 0x111);

    if (result)
    {
        void v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        *(a1 + 0x111) = 0;
        void v_80;
        Game_DataSymbolLoad(&v_80, "%s.isRun");
        result = Game_DataSymbolRemoveThunk(&v_80);
        *(a1 + 0x111) = 0;
    }

    return result;
}
