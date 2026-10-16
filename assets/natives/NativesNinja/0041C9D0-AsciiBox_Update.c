#include "0041C9D0-AsciiBox_Update.h"
/* 0x0041c9d0 AsciiBox_Update full linked: callers=1 callees=12 */
int32_t* AsciiBox_Update(void* a1)

{
    if (*(a1 + 0xdc))
    {
        Qhash_Init(1);
        sub_4b0d10(*(a1 + 0xdc));
        *(a1 + 0xdc) = 0;
        Qhash_Reset();
    }

    int32_t* result = *(a1 + 0x44);
    *(a1 + 0xdc) = 0;
    *(a1 + 0xe4) = 0;

    if (result && *(a1 + 0xd4))
    {
        result = QFile_ReadWrite(a1 + 0x94, "r");

        if (result)
        {
            int32_t eax_2 = sub_4b1780(result);
            Qhash_Init(1);
            *(a1 + 0xdc) = Mem_Alloc(eax_2 + 2, 4);
            Qhash_Reset();
            Resource_Unpack(result, *(a1 + 0xdc) + 1, eax_2);
            sub_4b1690(result);
            *(*(a1 + 0xdc) + eax_2 + 1) = 0;
            **(a1 + 0xdc) = 0;
            int32_t var_3c_1 = *(a1 + 0xd4);
            result =
                Menu_UpdateLanguage_8(*(a1 + 0xd8), *(a1 + 0xdc) + 1, *(a1 + 0x28) - 0x1c);
            *(a1 + 0xe4) = result;
        }
    }

    int32_t ecx_5 = *(a1 + 0xdc);
    *(a1 + 0xe8) = 0;
    *(a1 + 0xe0) = ecx_5 + 1;
    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t ecx_7 = g_afa7e0;

        do
        {
            int32_t* edx_4 = *i;
            void* eax_12;

            if (!edx_4)
                eax_12 = nullptr;
            else
            {
                int32_t eax_9 = *edx_4;
                int32_t eax_10 = -(eax_9);
                eax_12 = (eax_10 - eax_10) & edx_4;
            }

            *((ecx_7 << 2) + &g_afa6e0) = eax_12;
            g_afa7e0 = ecx_7 + 1;
            int32_t eax_13 = Menu_LeaveMenus_14();
            int32_t eax_14 = 0;
            eax_14 = i[7];
            result = *(((eax_13 * 0x180 + eax_14) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            ecx_7 = g_afa7e0 - 1;
            g_afa7e0 = ecx_7;
            i = *((ecx_7 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
