#include "0042FD40-Car_Cleanup_3.h"
/* 0x0042fd40 Car_Cleanup_3 full linked: callers=0 callees=3 */
int32_t Car_Cleanup_3(void* a1)

{
    char result = *(a1 + 0x2ed4);

    if (result)
    {
        void var_c0;
        sub_4f1270(&var_c0, a1);
        void* var_d0_1 = &var_c0;
        *(a1 + 0x2ed4) = 0;
        void var_80;
        Game_DataSymbolLoad(&var_80, "%s.isExploded");
        result = Game_DataSymbolRemoveThunk(&var_80);
        *(a1 + 0x2ed4) = 0;
    }

    return result;
}
