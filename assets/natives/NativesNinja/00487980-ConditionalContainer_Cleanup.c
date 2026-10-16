#include "00487980-ConditionalContainer_Cleanup.h"
/* 0x00487980 ConditionalContainer_Cleanup full linked: callers=0 callees=3 */
int32_t sub_487980(void* a1)

{
    char result = *(a1 + 0x111);

    if (result)
    {
        void var_c0;
        sub_4f1270(&var_c0, a1);
        void* var_d0_1 = &var_c0;
        *(a1 + 0x111) = 0;
        void var_80;
        Game_DataSymbolLoad(&var_80, "%s.isRun");
        result = Game_DataSymbolRemoveThunk(&var_80);
        *(a1 + 0x111) = 0;
    }

    return result;
}
