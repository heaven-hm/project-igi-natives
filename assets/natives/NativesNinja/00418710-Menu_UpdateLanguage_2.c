#include "00418710-Menu_UpdateLanguage_2.h"
/* 0x00418710 Menu_UpdateLanguage_2 full linked: callers=1 callees=4 */
void* Menu_UpdateLanguage_2(void* a1, int32_t a2, int32_t a3)

{
    *(a1 + 0x20) = a2;
    void* result = sub_4f1030(a2);
    *(a1 + 0x30) = result;

    if (result)
    {
        void* var_10_1 = a1;
        Menu_PlayMusic(result);

        if (a3)
            Menu_FormatScreen_2(a1);

        Menu_PlayMusic_2(a1, *(a1 + 0x30));
        void* eax_2 = *(a1 + 0x30);
        int32_t ecx_1 = 0;
        *(a1 + 0x27cd) = 0;
        *(a1 + 0x27ce) = 0;
        *(a1 + 0x27cc) = 0;
        *(a1 + 0x27cf) = 1;
        ecx_1 = *(eax_2 + 0x1c);
        result = (*((ecx_1 << 2) + &g_a970e0))(eax_2);
        *(a1 + 0x27cf) = 0;
    }

    return result;
}
