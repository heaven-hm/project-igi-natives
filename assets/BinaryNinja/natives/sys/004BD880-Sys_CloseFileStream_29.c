#include "Sys_CloseFileStream_29.h"
void* Sys_CloseFileStream_29(int32_t* a1)

{
    char* ctxB = a1;
    Sys_ExecuteBytecode_29(ctxB);

    if (!Sys_OpenFileStream_28(ctxB, &a1))
        goto label_4bd99c;

    int32_t* objC1 = a1;
    void* result;

    if (*objC1 != 1)
    {
        int32_t tmpD6 = *(ctxB + 0x14);
        *(ctxB + 0x20) = 9;
        *(ctxB + 0x10) = tmpD6;
    label_4bd99c:
        result = *(ctxB + 0x20);

        if (!result)
        {
            int32_t valA10 = *(ctxB + 0x14);
            *(ctxB + 0x20) = 0xa;
            *(ctxB + 0x10) = valA10;
            return Sys_DispatchOpcode_29(ctxB);
        }
    }
    else
    {
        int32_t flagP1 = *(ctxB + 0x14);
        int32_t srcS1 = *(ctxB + 0x1c);
        void* valA1 = *ctxB + flagP1;
        int32_t __saved_esi_8 = *(ctxB + 0x18);
        int32_t tmpD2 = *(valA1 + 1);
        void* v_1c_1 = valA1 + 5;
        int32_t v_24_1 = 0;
        int32_t v_28_1 = 1;
        int32_t v_2c = tmpD2;
        char* v_20_1 = ctxB;
        int32_t tmpD3 = objC1[6];
        int32_t __saved_esi_7 = __saved_esi_8;
        int32_t v_18;
        int32_t valA3 = objC1[4](&v_18, tmpD3, &v_2c);
        result = *(ctxB + 0x20);
        memcpy(&v_18, valA3, 0x18);

        if (!result)
        {
            *(ctxB + 0x2c) = 0;
            *(ctxB + 0x1c) = srcS1;
            int32_t __saved_esi_6 = __saved_esi_7;
            *(ctxB + 0x14) = flagP1 + (tmpD2 << 2) + 5;
            int32_t* tmpD5 = a1;
            *(ctxB + 0x18) = __saved_esi_6;
            int32_t valA5 = tmpD5[1];

            if (valA5 == 3)
            {
                int32_t v_8;
                return Sys_ReadFileBlock_28(ctxB, v_8, valA5);
            }

            if (valA5 != 2)
                return Sys_PushStack_29(ctxB, v_18);

            int32_t __saved_esi_2 = __saved_esi_6;
            double v_10;
            return Sys_PopStack_29(ctxB, v_10);
        }
    }

    return result;
}
