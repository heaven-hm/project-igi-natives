#include "0043B790-Generator_Process.h"
/* 0x0043b790 Generator_Process full linked: callers=0 callees=7 */
int32_t Generator_Process(void* a1)

{
    char result = *(a1 + 0x23d);

    if (result)
    {
        (*(((sub_481340() + sub_4f1220() * 0x180) << 2) + &g_a96ae0))(a1);
        void var_c0;
        sub_4f1270(&var_c0, a1);
        void* var_d8_1 = &var_c0;
        void var_80;
        Game_DataSymbolLoad(&var_80, "%s.isOn");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_e8_1 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.nBackupTimer");
        result = Game_DataSymbolRemoveThunk(&var_80);
        *(a1 + 0x23d) = 0;
    }

    return result;
}
