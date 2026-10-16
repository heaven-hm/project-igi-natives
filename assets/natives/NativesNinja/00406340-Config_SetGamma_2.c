#include "00406340-Config_SetGamma_2.h"
/* 0x00406340 Config_SetGamma_2 full linked: callers=1 callees=4 */
void* Config_SetGamma_2(int32_t a1)

{
    void* result = Level_InitTextures_7();
    int32_t esi = 1;

    while (esi != a1)
    {
        void* eax = sub_485170(esi);
        result = Config_GetActivePlayerProfileRecord();

        if (esi == *(result + 0x560))
        {
            result = Config_GetActivePlayerProfileRecord();
            *(result + 0x560) = a1;
        }

        esi = *(eax + 0x4a4);

        if (esi == 0xffffffff)
            break;
    }

    return result;
}
