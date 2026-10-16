#include "004FDD30-Script_ExecuteLevelScript_30.h"
/* 0x004fdd30 Script_ExecuteLevelScript_30 full linked: callers=2 callees=0 */
void sub_4fdd30(void* a1, int32_t a2)

{
    int32_t esi = *(a1 + 0xf0);

    if (!esi)
        return;

    if (esi - 1 != a2)
    {
        int32_t eax_1 = *(a1 + 0x6c);
        int32_t edi_1 = *(eax_1 + (a2 << 2));
        *(eax_1 + (a2 << 2)) = *(eax_1 + (esi << 2) - 4);
        *(*(a1 + 0x6c) + (*(a1 + 0xf0) << 2) - 4) = edi_1;
    }

    *(a1 + 0xf0) -= 1;
}
