#include "00417FF0-Menu_LocalLanguageSS.h"
/* 0x00417ff0 Menu_LocalLanguageSS full linked: callers=2 callees=5 */
int32_t Menu_LocalLanguageSS(void* a1, int32_t a2)

{
    for (int32_t i = 0; i < 6; )
    {
        int32_t var_114_1 = a2;
        void* var_118_1 = Config_English_2(i);
        void var_100;
        int32_t eax_2;
        int32_t edx_1;
        eax_2 = Game_DataSymbolLoad(&var_100, "LOCAL:language/%s/%s");
        void* var_128_1 = &var_100;
        *(a1 + (*(a1 + 0x25c) << 2) + 0x1dc) = Resource_Load(eax_2, edx_1, &var_100, nullptr);
        i += 1;
        *(a1 + 0x25c) += 1;
    }

    return 6;
}
