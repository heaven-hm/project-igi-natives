#include "00416660-Level_CheckQTaskID.h"
/* 0x00416660 Level_CheckQTaskID full linked: callers=1 callees=1 */
int32_t Level_CheckQTaskID()

{
    int32_t result = g_57bab4;
    int32_t esi = 0;

    if (result > 0)
    {
        int32_t* edi_1 = &g_57b600;

        do
        {
            Struct_Clear36(edi_1);
            result = g_57bab4;
            esi += 1;
            edi_1 = &edi_1[0xf];
        } while (esi < result);
    }

    return result;
}
