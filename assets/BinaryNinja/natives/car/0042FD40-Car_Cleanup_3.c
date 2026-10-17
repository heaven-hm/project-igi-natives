// Original IGI.EXE function: Car_Cleanup_3 (VA 0x0042FD40; static CFG gate PASS, CFG score 1.000).
#include "Car_Cleanup_3.h"
int32_t Car_Cleanup_3(void* a1)

{
    char result = *(a1 + 0x2ed4);

    if (result)
    {
        void v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        *(a1 + 0x2ed4) = 0;
        void v_80;
        Game_DataSymbolLoad(&v_80, "%s.isExploded");
        result = Game_DataSymbolRemoveThunk(&v_80);
        *(a1 + 0x2ed4) = 0;
    }

    return result;
}
