#include "0043F780-Wire_Action.h"
/* 0x0043f780 Wire_Action full linked: callers=0 callees=5 */
int32_t sub_43f780(void* a1)

{
    char result = *(a1 + 0x132);

    if (result)
    {
        void var_c0;
        sub_4f1270(&var_c0, a1);
        void* var_d0_1 = &var_c0;
        *(a1 + 0x132) = 0;
        void var_80;
        Game_DataSymbolLoad(&var_80, "%s.isInUse");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_e0_1 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.isLastInUse");
        result = Game_DataSymbolRemoveThunk(&var_80);
        *(a1 + 0x132) = 0;
    }

    return result;
}
