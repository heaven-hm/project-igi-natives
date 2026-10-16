#include "004608D0-Human_Cleanup_8.h"
/* 0x004608d0 Human_Cleanup_8 full linked: callers=0 callees=5 */
int32_t sub_4608d0(void* a1)

{
    char result = *(a1 + 0xcf4);

    if (result)
    {
        void var_c0;
        sub_4f1270(&var_c0, a1);
        void* var_d0_1 = &var_c0;
        void var_80;
        Game_DataSymbolLoad(&var_80, "%s.isDead");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_e0_1 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.eTeam");
        result = Game_DataSymbolRemoveThunk(&var_80);
        *(a1 + 0xcf4) = 0;
    }

    return result;
}
