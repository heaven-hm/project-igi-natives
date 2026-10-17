// Original IGI.EXE function: EditVariable_Cleanup (VA 0x00488B30; static CFG gate PASS, CFG score 1.000).
#include "EditVariable_Cleanup.h"
int32_t EditVariable_Cleanup(void* a1)

{
    char result = *(a1 + 0xdc);

    if (result)
    {
        void v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        void v_80;
        Game_DataSymbolLoad(&v_80, "%s.nValue");
        result = Game_DataSymbolRemoveThunk(&v_80);
        *(a1 + 0xdc) = 0;
    }

    return result;
}
