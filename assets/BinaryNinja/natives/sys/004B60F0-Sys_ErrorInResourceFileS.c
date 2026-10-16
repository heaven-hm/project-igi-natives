#include "Sys_ErrorInResourceFileS.h"
int32_t Sys_ErrorInResourceFileS(int32_t a1, void* a2, void* a3, int32_t* a4)

{
    int32_t* srcS = Sys_ResolveSymbol_19(a3);

    if (srcS)
    {
        while (true)
        {
            if (Sys_OpenFileStream_20(srcS) != 0x454d414e)
            {
                if (Sys_OpenFileStream_20(srcS) == 0x46464c49)
                {
                    if (Sys_FreeMemory_20(srcS) != 0x47554244)
                        goto label_4b636f;

                    goto label_4b6347;
                }

            label_4b636f:
                int32_t v_20_22 = a1;
                Error_Show("Error in resource file: '%s'");

                while (true)
                    /* nop */
            }
            else
            {
                char* valA2 = Sys_CheckHeap_19(srcS, a3);
                srcS = Sys_PopStack_19(srcS);

                if (!srcS)
                    goto label_4b636f;

                void* ctxB1 = nullptr;
                int32_t* valA4 = Sys_PopStack_19(srcS);

                if (valA4 && Sys_OpenFileStream_20(valA4) == 0x46464c49 && Sys_FreeMemory_20(valA4) == 0x47554244)
                {
                    for (int32_t* i = Sys_ResolveSymbol_19(valA4); i; i = Sys_PopStack_19(i))
                    {
                        if (Sys_OpenFileStream_20(i) == 0x52545343)
                            ctxB1 = Sys_CheckHeap_19(i, valA4);
                    }
                }

                int32_t v_c;
                void v_8;

                if (Sys_OpenFileStream_20(srcS) != 0x59444f42)
                {
                    int32_t valA16 = Sys_OpenFileStream_20(srcS);
                    int32_t valA17;

                    if (valA16 == 0x46464c49)
                        valA17 = Sys_FreeMemory_20(srcS);

                    if (valA16 == 0x46464c49 && valA17 == 0x53455249)
                    {
                        Sys_AllocateMemory_20(&v_c, &v_8, srcS);
                        Camera_SetFieldOfView_33(a2 + 0x14, &Sys_PopStack_15(valA2, ctxB1, srcS, 0, 1, a4)[2]);

                        if (!Sys_ErrorInResourceFileS(a1, a2, srcS, a4))
                            return 0;

                        goto label_4b6347;
                    }

                    if (Sys_OpenFileStream_20(srcS) == 0x52545343)
                    {
                        Sys_AllocateMemory_20(&v_c, &v_8, srcS);
                        Camera_SetFieldOfView_33(a2 + 0x14,
                            &Sys_PopStack_15(valA2, nullptr, Sys_CheckHeap_19(srcS, a3), v_c, 1, a4)[2]);
                        goto label_4b6347;
                    }

                    if (Sys_OpenFileStream_20(srcS) != 0x48544150)
                        goto label_4b636f;

                    Sys_AllocateMemory_20(&v_c, &v_8, srcS);
                    Camera_SetFieldOfView_33(a2 + 0x14,
                        &Sys_PopStack_15(valA2, ctxB1, Sys_CheckHeap_19(srcS, a3), v_c, 4, a4)[2]);
                    goto label_4b6347;
                }

                Sys_AllocateMemory_20(&v_c, &v_8, srcS);
                Camera_SetFieldOfView_33(a2 + 0x14,
                    &Sys_PopStack_15(valA2, ctxB1, Sys_CheckHeap_19(srcS, a3), v_c, 1, a4)[2]);
            label_4b6347:
                srcS = Sys_PopStack_19(srcS);

                if (!srcS)
                    break;
            }
        }
    }

    return 1;
}
