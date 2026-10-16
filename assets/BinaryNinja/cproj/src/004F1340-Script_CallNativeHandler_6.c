#include "gi_platform.h"
#include "004F1340-Script_CallNativeHandler_6.h"
char* Script_CallNativeHandler_6(int32_t* a1)

{
    int32_t i = 0;

    if (a1[0x13] > 0)
    {
        int32_t* ctxB1 = &a1[3];

        do
        {
            Qtask_UpdateList(*ctxB1);
            i += 1;
            ctxB1 = &ctxB1[1];
        } while (i < a1[0x13]);
    }

    void* valA3 = *a1;
    a1[0x13] = 0;

    if (valA3)
    {
        Sys_ExecuteBytecode_2(valA3);
        *a1 = 0;
    }

    void* valA4 = a1[1];

    if (valA4)
    {
        Sys_ExecuteBytecode_2(valA4);
        a1[1] = 0;
    }

    char* result = a1[2];

    if (result)
    {
        result = Sys_PushStack_24(result);
        a1[2] = 0;
    }

    return result;
}
