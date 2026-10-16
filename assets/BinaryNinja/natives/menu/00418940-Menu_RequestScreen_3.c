#include "Menu_RequestScreen_3.h"
void* Menu_RequestScreen_3(void* a1)

{
    void* result = *(a1 + 0x34);

    if (result)
    {
        result = *(a1 + 0x30);
        *(a1 + 0x34) = 0;

        if (result)
        {
            void* v_c_1 = a1;
            Menu_PlayMusic(result);
            return Menu_PlayMusic_2(a1, *(a1 + 0x30));
        }
    }

    return result;
}
