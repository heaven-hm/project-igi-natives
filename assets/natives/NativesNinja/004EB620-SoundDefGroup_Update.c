#include "004EB620-SoundDefGroup_Update.h"
/* 0x004eb620 SoundDefGroup_Update full linked: callers=0 callees=1 */
int32_t sub_4eb620(void* a1, void** a2)

{
    void* esi = *(a1 + 0x14);
    uint32_t eax_1 = sub_4e6610();
    int32_t ecx = 0;
    ecx = *(esi + 0x1c);
    int32_t result = *(((eax_1 * 0x180 + ecx) << 2) + &g_a96ae0);

    if (result)
        result = result(esi, a2);

    if (!*a2)
        *a2 = a1 + 0x48;

    return result;
}
