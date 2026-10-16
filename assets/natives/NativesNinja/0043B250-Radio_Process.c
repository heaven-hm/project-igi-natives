#include "0043B250-Radio_Process.h"
/* 0x0043b250 Radio_Process full linked: callers=0 callees=5 */
int32_t Radio_Process(void* a1)

{
    char result = *(a1 + 0x241);

    if (result)
    {
        (*(((sub_481340() + sub_4f1220() * 0x180) << 2) + &g_a96ae0))(a1);
        void var_c0;
        sub_4f1270(&var_c0, a1);
        void* var_d8_1 = &var_c0;
        void var_80;
        Game_DataSymbolLoad(&var_80, "%s.isOn");
        result = Game_DataSymbolRemoveThunk(&var_80);
        *(a1 + 0x241) = 0;
    }

    return result;
}
