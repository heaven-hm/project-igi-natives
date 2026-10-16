#include "0041DB90-InputBox_Cleanup.h"
/* 0x0041db90 InputBox_Cleanup full linked: callers=0 callees=3 */
int32_t InputBox_Cleanup(void* a1)

{
    char result = *(a1 + 0x194);

    if (result)
    {
        void var_c0;
        sub_4f1270(&var_c0, a1);
        void* var_d0_1 = &var_c0;
        void var_80;
        Game_DataSymbolLoad(&var_80, "%s.zData");
        result = Game_DataSymbolRemoveThunk(&var_80);
        *(a1 + 0x194) = 0;
    }

    return result;
}
