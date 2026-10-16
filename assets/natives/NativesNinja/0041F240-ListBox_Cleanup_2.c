#include "0041F240-ListBox_Cleanup_2.h"
/* 0x0041f240 ListBox_Cleanup_2 full linked: callers=0 callees=3 */
int32_t ListBox_Cleanup_2(void* a1)

{
    char result = *(a1 + 0xbf0);

    if (result)
    {
        void var_c0;
        sub_4f1270(&var_c0, a1);
        void* var_d0_1 = &var_c0;
        void var_80;
        Game_DataSymbolLoad(&var_80, "%s.nActiveID");
        result = Game_DataSymbolRemoveThunk(&var_80);
        *(a1 + 0xbf0) = 0;
    }

    return result;
}
