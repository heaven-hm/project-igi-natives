#include "Sys_Resource.h"
int32_t* Sys_Resource(char* a1, int32_t* a2, void* a3)

{
    void v_8;
    Sys_AllocateMemory_5(&v_8, a1);

    if (Sys_OpenFileStream_20(a2) == 0x46464c49 && Sys_FreeMemory_20(a2) == 0x53455249)
    {
        int32_t* valA2 = Sys_PopStack_15(a1, 0, a2, 0, 0, &v_8);
        Sys_ErrorInResourceFileS(a1, valA2, a2, &v_8);
        valA2[0xb] = 1;
        return a2;
    }

    if (a3 < 8)
        Sys_PopStack_15(a1, 0, a2, a3, 2, &v_8)[0xb] = 1;
    else if (Camera_ApplyLineFilter_21(a2, "RESOURCE", 8))
        Sys_PopStack_15(a1, 0, a2, a3, 2, &v_8)[0xb] = 1;
    else
    {
        int32_t* valA5 = Sys_PopStack_15(a1, 0, a2, 0, 0, &v_8);
        valA5[0xb] = 1;
        char* objC1 = a2[2];
        void* ctxB2 = &a2[8];

        if (objC1 > 0)
        {
            a1 = objC1;
            bool cond_0_1;

            do
            {
                void* valA7 = *(ctxB2 + 8);
                int32_t tmpD1 = *(ctxB2 + 4);
                int32_t srcS2;
                int32_t dstD1;
                dstD1 = memcpy(0x943c20, ctxB2 + 0xc, valA7 & 0xfffffffc);
                void* valA8 = valA7 + 0x2b;
                memcpy(dstD1, srcS2, valA7 & 3);
                *(valA8 + 0x943bf5) = 0;
                valA8 &= 0xe0;
                int32_t* ctxB3 = ctxB2 + valA8;
                ctxB2 = ctxB3 + ((tmpD1 + 0x1f) & 0xffffffe0);
                Camera_SetFieldOfView_33(&valA5[5], &Sys_PopStack_15(0x943c20, 0, ctxB3, tmpD1, 1, &v_8)[2]);
                cond_0_1 = a1 != 1;
                a1 -= 1;
            } while (cond_0_1);
        }
    }

    return a2;
}
