#include "gi_platform.h"
#include "004F3EF0-Script_FormatString_14.h"
void* const Script_FormatString_14(int32_t a1, int32_t a2)

{
    void* const valA1;

    if (a2)
        valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x20154));

    if (!a2 || a2 < valA1)
    {
        valA1 = nullptr;
        __builtin_memset(a1 + 0x6c, 0, 0x88);
        (*(int32_t*)(uintptr_t)(a1 + 0x20154)) = 0;

        if (a2 >= 0)
        {
            int32_t i_1 = a2 + 1;
            int32_t i;

            do
            {
                valA1 = Script_SpawnNewTask_15(a1);
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
        }
    }
    else if (a2 > valA1)
    {
        int32_t objC2;

        do
        {
            Script_SpawnNewTask_15(a1);
            objC2 = (*(int32_t*)(uintptr_t)(a1 + 0x20154)) + 1;
            (*(int32_t*)(uintptr_t)(a1 + 0x20154)) = objC2;
        } while (a2 > objC2);

        return objC2;
    }

    return valA1;
}
