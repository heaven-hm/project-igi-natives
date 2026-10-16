#include "004F1740-Script_ParseEnumInt32_7.h"
/* 0x004f1740 Script_ParseEnumInt32_7 full linked: callers=1 callees=3 */
char* sub_4f1740(void* a1)

{
    int32_t edx = 1;
    char* result = *(a1 + 0x4c);

    if (result > 0)
    {
        int32_t* ebx_1 = a1 + 0xc;
        int32_t* ecx_1 = ebx_1;
        char* i;

        do
        {
            if (!**ecx_1)
                edx = 0;

            ecx_1 = &ecx_1[1];
            i = result;
            result -= 1;
        } while (i != 1);

        if (!edx)
        {
            int32_t i_1 = 0;

            do
            {
                Qtask_UpdateList(*ebx_1);
                i_1 += 1;
                ebx_1 = &ebx_1[1];
            } while (i_1 < *(a1 + 0x4c));

            void* ecx_2 = *(a1 + 4);
            *(a1 + 0x4c) = 0;
            sub_4b0d10(ecx_2);
            result = *(a1 + 8);
            *(a1 + 4) = 0;

            if (result)
            {
                result = sub_4b9be0(result);
                *(a1 + 8) = 0;
            }
        }
    }

    return result;
}
