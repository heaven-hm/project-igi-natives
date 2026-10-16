#include "00423770-Menu_UpdateLanguage_12.h"
/* 0x00423770 Menu_UpdateLanguage_12 full linked: callers=5 callees=3 */
void* Menu_UpdateLanguage_12(void* a1, void* a2, int32_t a3)

{
    void* esi = a1;
    int32_t* edi = *(esi + (a2 << 2) + 0x154);
    *(esi + (a2 << 2) + 0x254) = a3;

    if (!edi)
        return a2;

    KEY_ANGLE(a3, nullptr, &a1);
    return sub_4b6e90(edi, Menu_LocalSS(*(esi + 0x44), a1));
}
