#include "00481FF0-ExplodeObject_Cleanup.h"
/* 0x00481ff0 ExplodeObject_Cleanup full linked: callers=0 callees=3 */
int32_t sub_481ff0(void* a1)

{
    char result = *(a1 + 0x191);

    if (result)
    {
        void var_c0;
        sub_4f1270(&var_c0, a1);
        void* var_d0_1 = &var_c0;
        void var_80;
        Game_DataSymbolLoad(&var_80, "%s.isExploded");
        result = Game_DataSymbolRemoveThunk(&var_80);
        *(a1 + 0x191) = 0;
    }

    return result;
}
