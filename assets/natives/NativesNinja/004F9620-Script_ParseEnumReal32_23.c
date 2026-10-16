#include "004F9620-Script_ParseEnumReal32_23.h"
/* 0x004f9620 Script_ParseEnumReal32_23 full linked: callers=1 callees=7 */
int32_t sub_4f9620(void* a1, int32_t a2)

{
    int32_t ebp = *(a1 + 0x58);
    void* esi = *(a1 + 0x6c);
    int32_t ebp_1 = ebp + ((a2 - ebp) / 0x64 + 1) * 0x64;
    int32_t eax_4 = sub_4f94d0(a1);
    *(a1 + 0x6c) = Mem_Alloc(eax_4 * ebp_1, 4);
    sub_4f96e0(a1, ebp_1);

    if (esi)
    {
        int32_t ecx_3 = *(a1 + 0x58) * eax_4;
        int32_t esi_1;
        int32_t edi_2;
        edi_2 = memcpy(*(a1 + 0x6c), esi, ecx_3 & 0xfffffffc);
        memcpy(edi_2, esi_1, ecx_3 & 3);
        sub_4b0d10(esi);
    }

    *(a1 + 0x58) = ebp_1;
    uint32_t eax_8 = sub_4f9280();
    int32_t eax_9 = 0;
    eax_9 = *(a1 + 0x1c);
    int32_t result = *(((eax_8 * 0x180 + eax_9) << 2) + &g_a96ae0);

    if (!result)
        return result;

    return result(a1, 0);
}
