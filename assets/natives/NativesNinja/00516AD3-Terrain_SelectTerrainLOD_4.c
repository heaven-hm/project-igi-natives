#include "00516AD3-Terrain_SelectTerrainLOD_4.h"
/* 0x00516ad3 Terrain_SelectTerrainLOD_4 full linked: callers=2 callees=3 */
long double sub_516ad3(char* a1)

{
    char* esi = a1;

    while (true)
    {
        BOOL eax_2;
        wchar16 (* ecx)[0x21];

        if (g_54427c <= 1)
        {
            uint32_t eax_3 = *esi;
            ecx = g_544070;
            eax_3 = (*ecx)[eax_3];
            eax_2 = eax_3 & 8;
        }
        else
        {
            uint32_t eax_1 = *esi;
            uint32_t var_c_1 = eax_1;
            int32_t edx;
            eax_2 = sub_4a7f2a(eax_1, edx, ecx, 8);
            ecx = 8;
        }

        if (!eax_2)
            break;

        esi = &esi[1];
    }

    int32_t var_8 = 0;
    int32_t var_c_2 = 0;
    void* var_10_1 = sub_4aa730(esi);
    return *(sub_516e83(esi) + 0x10);
}
