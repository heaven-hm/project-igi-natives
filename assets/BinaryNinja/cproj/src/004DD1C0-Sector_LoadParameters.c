#include "gi_platform.h"
#include "004DD1C0-Sector_LoadParameters.h"
int32_t Sector_LoadParameters(void* a1)

{
    int32_t objC = g_a5e334;
    int32_t tmpD = g_a5e330;
    int32_t v_50 = g_a5e35c;
    int32_t valA1 = g_a5e310;
    void* v_54 = a1;
    int32_t v_4c = objC;
    int32_t v_48 = tmpD;
    int32_t v_44 = valA1;
    ((int(*)())(uintptr_t)(*((DynObj_ParseConfigFile_15() << 2) + &g_a94e84)))(&v_54);
    void* tmpD1 = (*(int32_t*)(uintptr_t)(a1 + 0xe8));
    char v_40;
    memcpy(&v_40, a1 + 0x20, 0x18);
    char v_28;
    memcpy(&v_28, a1 + 0x70, 0x28);
    int32_t* i = *(tmpD1 + 8);

    if (*i && i)
    {
        do
        {
            uint32_t valA4 = DynObj_FindSymbol_6();
            int32_t objC1 = 0;
            objC1 = i[7];
            ((int(*)())(uintptr_t)(*(((valA4 * 0x180 + objC1) << 2) + &g_a96ae0)))(i, &v_40);
            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        } while (i);
    }

    int32_t* i_1 = (*(int32_t*)(uintptr_t)(a1 + 8));

    if (*i_1 && i_1)
    {
        do
        {
            uint32_t valA10 = DynObj_FindSymbol_6();
            int32_t objC2 = 0;
            objC2 = i_1[7];
            int32_t valA14 = *(((valA10 * 0x180 + objC2) << 2) + &g_a96ae0);

            if (valA14)
                valA14(i_1, &v_40);

            i_1 = *i_1;

            if (!i_1)
                break;

            if (!*i_1)
                break;
        } while (i_1);
    }

    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0x138));
    int32_t srcS2 = 0;

    if (result > 0)
    {
        do
        {
            void* valA16 = (*(int32_t*)(uintptr_t)(*(*(a1 + 0x134) + (srcS2 << 2)) * *(a1 + 0x140) + *(a1 + 0x130)));
            int32_t objC5 = 0;
            objC5 = *(valA16 + 0x1c);
            int32_t objC6 = *((objC5 << 2) + &g_a982e0);

            if (objC6)
                objC6(valA16, 0);

            result = (*(int32_t*)(uintptr_t)(a1 + 0x138));
            srcS2 += 1;
        } while (srcS2 < result);
    }

    return result;
}
