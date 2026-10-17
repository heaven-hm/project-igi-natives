// IGI native provenance: Sys_ErrorInResourceFileS - 0x004B60F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B60F0-Sys_ErrorInResourceFileS.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ErrorInResourceFileS.h"
int32_t Sys_ErrorInResourceFileS(int32_t context, void* param_2, void* param_3, int32_t* param_4)

{
    int32_t* source_val = Sys_ResolveSymbol_19(param_3);

    if (source_val)
    {
        while (true)
        {
            if (Sys_OpenFileStream_20(source_val) != 0x454d414e)
            {
                if (Sys_OpenFileStream_20(source_val) == 0x46464c49)
                {
                    if (Sys_FreeMemory_20(source_val) != 0x47554244)
                        goto label_4b636f;

                    goto label_4b6347;
                }

            label_4b636f:
                int32_t item_20_22 = context;
                Error_Show("Error in resource file: '%s'");

                while (true)
                    /* nop */
            }
            else
            {
                char* data_2 = Sys_CheckHeap_19(source_val, param_3);
                source_val = Sys_PopStack_19(source_val);

                if (!source_val)
                    goto label_4b636f;

                void* context_1 = nullptr;
                int32_t* data_4 = Sys_PopStack_19(source_val);

                if (data_4 && Sys_OpenFileStream_20(data_4) == 0x46464c49 && Sys_FreeMemory_20(data_4) == 0x47554244)
                {
                    for (int32_t* i = Sys_ResolveSymbol_19(data_4); i; i = Sys_PopStack_19(i))
                    {
                        if (Sys_OpenFileStream_20(i) == 0x52545343)
                            context_1 = Sys_CheckHeap_19(i, data_4);
                    }
                }

                int32_t item_c;
                void item_8;

                if (Sys_OpenFileStream_20(source_val) != 0x59444f42)
                {
                    int32_t data_16 = Sys_OpenFileStream_20(source_val);
                    int32_t data_17;

                    if (data_16 == 0x46464c49)
                        data_17 = Sys_FreeMemory_20(source_val);

                    if (data_16 == 0x46464c49 && data_17 == 0x53455249)
                    {
                        Sys_AllocateMemory_20(&item_c, &item_8, source_val);
                        Camera_SetFieldOfView_33(param_2 + 0x14, &Sys_PopStack_15(data_2, context_1, source_val, 0, 1, param_4)[2]);

                        if (!Sys_ErrorInResourceFileS(context, param_2, source_val, param_4))
                            return 0;

                        goto label_4b6347;
                    }

                    if (Sys_OpenFileStream_20(source_val) == 0x52545343)
                    {
                        Sys_AllocateMemory_20(&item_c, &item_8, source_val);
                        Camera_SetFieldOfView_33(param_2 + 0x14,
                            &Sys_PopStack_15(data_2, nullptr, Sys_CheckHeap_19(source_val, param_3), item_c, 1, param_4)[2]);
                        goto label_4b6347;
                    }

                    if (Sys_OpenFileStream_20(source_val) != 0x48544150)
                        goto label_4b636f;

                    Sys_AllocateMemory_20(&item_c, &item_8, source_val);
                    Camera_SetFieldOfView_33(param_2 + 0x14,
                        &Sys_PopStack_15(data_2, context_1, Sys_CheckHeap_19(source_val, param_3), item_c, 4, param_4)[2]);
                    goto label_4b6347;
                }

                Sys_AllocateMemory_20(&item_c, &item_8, source_val);
                Camera_SetFieldOfView_33(param_2 + 0x14,
                    &Sys_PopStack_15(data_2, context_1, Sys_CheckHeap_19(source_val, param_3), item_c, 1, param_4)[2]);
            label_4b6347:
                source_val = Sys_PopStack_19(source_val);

                if (!source_val)
                    break;
            }
        }
    }

    return 1;
}
