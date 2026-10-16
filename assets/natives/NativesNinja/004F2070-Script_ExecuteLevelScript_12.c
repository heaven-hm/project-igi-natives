#include "004F2070-Script_ExecuteLevelScript_12.h"
/* 0x004f2070 Script_ExecuteLevelScript_12 full linked: callers=18 callees=3 */
void* sub_4f2070(int32_t a1, char* a2, void* a3)

{
    char* edi = a2;
    void* result = Table_GetAt(a1, edi);
    void* result_1 = result;

    if (result_1)
    {
        int32_t eax = 0;
        int32_t ecx_1 = 0;
        eax = g_a76c03;
        ecx_1 = *(result_1 + 0x1c);
        (*(((eax * 0x180 + ecx_1) << 2) + &g_a96ae0))(result_1, &a2);
        *a2 = 0;
        int32_t eax_5 = sub_4f2030();
        int32_t edx_1 = 0;
        edx_1 = *(result_1 + 0x1c);
        result = *(((eax_5 * 0x180 + edx_1) << 2) + &g_a96ae0);

        if (result)
            result = result(result_1);
    }

    if (a3)
    {
        int32_t eax_6 = 0;
        int32_t ecx_5 = 0;
        eax_6 = g_a76c03;
        ecx_5 = *(a3 + 0x1c);
        (*(((eax_6 * 0x180 + ecx_5) << 2) + &g_a96ae0))(a3, &a2);
        *a2 = 1;
        int32_t eax_11 = sub_4f2020();
        int32_t edx_2 = 0;
        edx_2 = *(a3 + 0x1c);
        result = (*(((eax_11 * 0x180 + edx_2) << 2) + &g_a96ae0))(a3);
    }

    *(a1 + (edi << 2)) = a3;
    return result;
}
