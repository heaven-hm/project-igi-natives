#include "004F1340-Script_CallNativeHandler_6.h"
/* 0x004f1340 Script_CallNativeHandler_6 full linked: callers=94 callees=4 */
char* sub_4f1340(int32_t* a1)

{
    int32_t i = 0;

    if (a1[0x13] > 0)
    {
        int32_t* ebx_1 = &a1[3];

        do
        {
            Qtask_UpdateList(*ebx_1);
            i += 1;
            ebx_1 = &ebx_1[1];
        } while (i < a1[0x13]);
    }

    void* eax_3 = *a1;
    a1[0x13] = 0;

    if (eax_3)
    {
        sub_4b0d10(eax_3);
        *a1 = 0;
    }

    void* eax_4 = a1[1];

    if (eax_4)
    {
        sub_4b0d10(eax_4);
        a1[1] = 0;
    }

    char* result = a1[2];

    if (result)
    {
        result = sub_4b9be0(result);
        a1[2] = 0;
    }

    return result;
}
