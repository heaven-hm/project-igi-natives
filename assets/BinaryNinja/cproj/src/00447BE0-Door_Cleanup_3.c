#include "gi_platform.h"
#include "00447BE0-Door_Cleanup_3.h"
int32_t Door_Cleanup_3(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x19e));

    if (result)
    {
        char v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        (*(int32_t*)(uintptr_t)(a1 + 0x19e)) = 0;
        char v_80;
        Game_DataSymbolLoad(&v_80, "%s.isLocked");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_e0_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isOpen");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_f0_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isClosed");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_100_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isLastClosed");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_cc_2 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isLastOpen");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_dc_2 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isPicked");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_ec_2 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.nDoorOpenTicks");
        result = Game_DataSymbolRemoveThunk(&v_80);
        (*(int32_t*)(uintptr_t)(a1 + 0x19e)) = 0;
    }

    return result;
}
