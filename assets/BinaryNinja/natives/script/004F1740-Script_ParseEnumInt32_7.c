#include "Script_ParseEnumInt32_7.h"
char* Script_ParseEnumInt32_7(void* a1)

{
    int32_t tmpD = 1;
    char* result = *(a1 + 0x4c);

    if (result > 0)
    {
        int32_t* ctxB1 = a1 + 0xc;
        int32_t* objC1 = ctxB1;
        char* i;

        do
        {
            if (!**objC1)
                tmpD = 0;

            objC1 = &objC1[1];
            i = result;
            result -= 1;
        } while (i != 1);

        if (!tmpD)
        {
            int32_t i_1 = 0;

            do
            {
                Qtask_UpdateList(*ctxB1);
                i_1 += 1;
                ctxB1 = &ctxB1[1];
            } while (i_1 < *(a1 + 0x4c));

            void* objC2 = *(a1 + 4);
            *(a1 + 0x4c) = 0;
            Sys_ExecuteBytecode_2(objC2);
            result = *(a1 + 8);
            *(a1 + 4) = 0;

            if (result)
            {
                result = Sys_PushStack_24(result);
                *(a1 + 8) = 0;
            }
        }
    }

    return result;
}
