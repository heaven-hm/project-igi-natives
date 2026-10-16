#include "00488B30-EditVariable_Cleanup.h"
/* 0x00488b30 EditVariable_Cleanup full linked: callers=0 callees=3 */
int32_t sub_488b30(void* a1)

{
    char result = *(a1 + 0xdc);

    if (result)
    {
        void var_c0;
        sub_4f1270(&var_c0, a1);
        void* var_d0_1 = &var_c0;
        void var_80;
        Game_DataSymbolLoad(&var_80, "%s.nValue");
        result = Game_DataSymbolRemoveThunk(&var_80);
        *(a1 + 0xdc) = 0;
    }

    return result;
}
