#include "Script_ExecuteLevelScript_12.h"
void* Script_ExecuteLevelScript_12(int32_t a1, char* a2, void* a3)

{
    char* dstD = a2;
    void* result = Table_GetAt(a1, dstD);
    void* result_1 = result;

    if (result_1)
    {
        int32_t valA = 0;
        int32_t objC1 = 0;
        valA = g_a76c03;
        objC1 = *(result_1 + 0x1c);
        (*(((valA * 0x180 + objC1) << 2) + &g_a96ae0))(result_1, &a2);
        *a2 = 0;
        int32_t valA5 = Script_SpawnNewTask_12();
        int32_t tmpD1 = 0;
        tmpD1 = *(result_1 + 0x1c);
        result = *(((valA5 * 0x180 + tmpD1) << 2) + &g_a96ae0);

        if (result)
            result = result(result_1);
    }

    if (a3)
    {
        int32_t valA6 = 0;
        int32_t objC5 = 0;
        valA6 = g_a76c03;
        objC5 = *(a3 + 0x1c);
        (*(((valA6 * 0x180 + objC5) << 2) + &g_a96ae0))(a3, &a2);
        *a2 = 1;
        int32_t valA11 = Script_FormatString_11();
        int32_t tmpD2 = 0;
        tmpD2 = *(a3 + 0x1c);
        result = (*(((valA11 * 0x180 + tmpD2) << 2) + &g_a96ae0))(a3);
    }

    *(a1 + (dstD << 2)) = a3;
    return result;
}
