#include "gi_platform.h"
#include "004B24C0-Sys_SIsNotAValidTextureF.h"
int32_t Sys_SIsNotAValidTextureF(int32_t* a1, int32_t a2, int32_t* a3)

{
    int32_t* v_10 = a3;
    int32_t valA;
    void* objC;
    int32_t tmpD;
    int32_t* valA1 = Resource_Load(valA, tmpD, objC, nullptr);
    char valA2 = *valA1;

    if (valA2 == 0x4c)
    {
        int32_t* v_2c;
        int32_t v_28;
        int32_t v_24;
        int32_t v_20;
        int32_t v_1c;
        int32_t v_18;
        int32_t v_14;
        int32_t v_10_1;
        void* v_c;

        if (*(valA1 + 1) == 0x4f && *(valA1 + 2) == 0x4f && *(valA1 + 3) == 0x50 && valA1[1] == 2)
        {
            Sys_PopStack_8();
            int32_t objC3 = 0;
            objC3 = valA1[2];
            int32_t tmpD3 = 0;
            tmpD3 = *(valA1 + 0x16);
            v_c = &valA1[6];
            v_10_1 = 0;
            v_14 = objC3;
            int32_t valA4 = 0;
            v_18 = tmpD3;
            valA4 = valA1[5];
            int32_t objC4 = 0;
            objC4 = *(valA1 + 0x12);
            int32_t tmpD4 = 0;
            tmpD4 = valA1[4];
            v_1c = valA4;
            v_20 = objC4;
            v_24 = tmpD4;
            v_28 = a2;
            v_2c = a1;
    label_4b252e: ;
            Sys_FreeMemory_8(v_2c, v_28, v_24, v_20, v_1c, v_18, v_14, v_10_1, v_c);
            int32_t result = Resource_Unload(a3);
            Sys_ResolveSymbol_8();
            return result;
        }

        if (valA2 == 0x4c && *(valA1 + 1) == 0x4f && *(valA1 + 2) == 0x4f && *(valA1 + 3) == 0x50
            && valA1[1] == 0xb)
        {
            Sys_PopStack_8();
            v_c = &valA1[8];
            int32_t objC6 = 0;
            v_10_1 = valA1[3];
            objC6 = valA1[5];
            int32_t valA7 = 0;
            valA7 = valA1[6];
            v_14 = objC6;
            v_18 = valA1[2];
            v_1c = valA7;
            int32_t tmpD7 = 0;
            int32_t valA8 = 0;
            tmpD7 = *(valA1 + 0x1e);
            valA8 = *(valA1 + 0x1a);
            int32_t objC7 = 0;
            objC7 = *(valA1 + 0x16);
            v_20 = objC7;
            v_24 = tmpD7 * valA8;
            v_28 = a2;
            v_2c = a1;
            goto label_4b252e;
        }
    }

    int32_t* v_c_1 = a3;
    Error_Show("'%s' is not a valid Texture file.");

    while (true)
        /* nop */
}
