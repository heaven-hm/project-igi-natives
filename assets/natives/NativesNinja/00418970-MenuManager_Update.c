#include "00418970-MenuManager_Update.h"
/* 0x00418970 MenuManager_Update full linked: callers=0 callees=5 */
int32_t MenuManager_Update(void* a1)

{
    if (*(a1 + 0x30) && *(a1 + 0x28) != 9)
    {
        sub_497620(a1 + 0x266c, 1);

        if (*(a1 + 0x28) == 2)
        {
            void* edi_1 = *(a1 + 0x27c8);
            int32_t eax_3 = sub_4e7530();
            int32_t edx_1 = 0;
            edx_1 = *(edi_1 + 0x1c);
            (*(((eax_3 * 0x180 + edx_1) << 2) + &g_a96ae0))(edi_1);
        }

        if (*(a1 + 0x34))
        {
            void* edi_2 = *(a1 + 0x34);
            *(a1 + 0xd0) = *(a1 + 0xcc);
            int32_t eax_7 = sub_4e7530();
            int32_t edx_2 = 0;
            edx_2 = *(edi_2 + 0x1c);
            (*(((eax_7 * 0x180 + edx_2) << 2) + &g_a96ae0))(edi_2);
        }

        if (*(a1 + 0x30))
        {
            int32_t eax_10 = *(a1 + 0x28);

            if (eax_10 == 7 || eax_10 == 8 || eax_10 == 0xf)
                *(a1 + 0xd0) = 0x10;
            else
                *(a1 + 0xd0) = *(a1 + 0xcc);

            void* edi_3 = *(a1 + 0x30);
            int32_t eax_12 = sub_4e7530();
            int32_t edx_3 = 0;
            edx_3 = *(edi_3 + 0x1c);
            (*(((eax_12 * 0x180 + edx_3) << 2) + &g_a96ae0))(edi_3);
        }
    }

    int32_t result = *(a1 + 0xc4);
    int32_t ecx_10 = *(a1 + 0xcc);
    *(a1 + 0xc8) = result;
    *(a1 + 0xc4) = ecx_10;
    return result;
}
