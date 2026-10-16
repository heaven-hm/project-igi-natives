#include "00418940-Menu_RequestScreen_3.h"
/* 0x00418940 Menu_RequestScreen_3 full linked: callers=1 callees=2 */
void* Menu_RequestScreen_3(void* a1)

{
    void* result = *(a1 + 0x34);

    if (result)
    {
        result = *(a1 + 0x30);
        *(a1 + 0x34) = 0;

        if (result)
        {
            void* var_c_1 = a1;
            Menu_PlayMusic(result);
            return Menu_PlayMusic_2(a1, *(a1 + 0x30));
        }
    }

    return result;
}
