// Original IGI.EXE function: Wire_Action (VA 0x0043F780; static CFG gate PASS, CFG score 1.000).
#include "Wire_Action.h"
int32_t Wire_Action(void* a1)

{
    char result = *(a1 + 0x132);

    if (result)
    {
        void v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        *(a1 + 0x132) = 0;
        void v_80;
        Game_DataSymbolLoad(&v_80, "%s.isInUse");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_e0_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isLastInUse");
        result = Game_DataSymbolRemoveThunk(&v_80);
        *(a1 + 0x132) = 0;
    }

    return result;
}
