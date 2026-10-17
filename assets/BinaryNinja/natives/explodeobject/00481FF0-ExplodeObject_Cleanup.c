// Original IGI.EXE function: ExplodeObject_Cleanup (VA 0x00481FF0; static CFG gate PASS, CFG score 1.000).
#include "ExplodeObject_Cleanup.h"
int32_t ExplodeObject_Cleanup(void* a1)

{
    char result = *(a1 + 0x191);

    if (result)
    {
        void v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        void v_80;
        Game_DataSymbolLoad(&v_80, "%s.isExploded");
        result = Game_DataSymbolRemoveThunk(&v_80);
        *(a1 + 0x191) = 0;
    }

    return result;
}
