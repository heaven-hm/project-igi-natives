#include "00416EF0-Level_CheckQTaskID_6.h"
/* 0x00416ef0 Level_CheckQTaskID_6 full linked: callers=2 callees=3 */
void* Level_CheckQTaskID_6(void* a1)

{
    void* result = a1;
    int32_t* i = *(result + 8);

    if (*i && i)
    {
        do
        {
            int32_t* eax = *i;
            int32_t* i_1 = i;

            if (!eax)
                i = nullptr;
            else
            {
                int32_t esi = *eax;
                int32_t esi_1 = -(esi);
                i = (esi_1 - esi_1) & eax;
            }

            int16_t eax_1 = sub_4f8fd0();

            if (i_1[7] != eax_1)
                result = Level_CheckQTaskID_6(i_1);
            else
                result = QTask_FindType(i_1);
        } while (i);
    }

    return result;
}
