#include "00423810-Menu_PlayMusic_12.h"
/* 0x00423810 Menu_PlayMusic_12 full linked: callers=3 callees=3 */
int32_t __convention("regparm") Menu_PlayMusic_12(int32_t a1, int32_t a2, int32_t a3, int32_t a4)

{
    int32_t var_4 = a3;
    int32_t eax = Config_SetResolution();
    int32_t* esi = Config_SetGamma();
    Config_Moveleft(a4, &var_4, nullptr);
    int32_t result = 0;

    if (eax > 0)
    {
        do
        {
            if (*esi == var_4)
                return result;

            esi = &esi[3];
            result += 1;
        } while (result < eax);
    }

    return 0xffffffff;
}
