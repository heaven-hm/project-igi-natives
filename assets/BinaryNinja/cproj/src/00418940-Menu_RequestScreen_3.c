#include "gi_platform.h"
#include "00418940-Menu_RequestScreen_3.h"
void* Menu_RequestScreen_3(void* a1)

{
    void* result = (*(int32_t*)(uintptr_t)(a1 + 0x34));

    if (result)
    {
        result = (*(int32_t*)(uintptr_t)(a1 + 0x30));
        (*(int32_t*)(uintptr_t)(a1 + 0x34)) = 0;

        if (result)
        {
            void* v_c_1 = a1;
            Menu_PlayMusic(result);
            return Menu_PlayMusic_2(a1, (*(int32_t*)(uintptr_t)(a1 + 0x30)));
        }
    }

    return result;
}
