#include "gi_platform.h"
#include "004BF620-Sys_UnexpectedEndOfFile_2.h"
int32_t Sys_UnexpectedEndOfFile_2(int32_t* a1, int32_t* a2)

{
    Sys_While(a1);
    int32_t* valA = Mem_Alloc(0x24, 4);
    __builtin_memset(valA, 0, 0x24);
    valA[1] = 0;
    *valA = 0;
    valA[2] = 2;
    valA[5] = &valA[6];
    valA[6] = 0;
    valA[7] = &valA[5];
    *a2 = valA;

    if (!Sys_CloseFileStream_31(a1, &a1[2]))
    {
    label_4bf7e7: ;
        Sys_FreeMemory_22("Unexpected end of file.");
    }
    else if (*a1[7] == 0x28)
    {
        int32_t v_14_1 = 0;

        if (Sys_PopStack_24(a1, &valA[3]))
        {
            if (!Sys_CloseFileStream_31(a1, &a1[2]))
            {
            label_4bf7e7_1:
                Sys_FreeMemory_22("Unexpected end of file.");
            }
            else if (Sys_UnexpectedEndOfFile(a1, &valA[4]))
            {
                if (!Sys_CloseFileStream_31(a1, &a1[2]))
                    return 1;

                int32_t* v_14_6 = &a1[2];

                if (Sys_While(a1) != 4)
                {
    label_4bf83e: ;
                    Sys_ReadFileBlock_31(&a1[2], v_14_6);
                    return 1;
                }

                if (!Sys_CloseFileStream_31(a1, v_14_6))
                {
                    Sys_FreeMemory_22("Unexpected end of file.");
                    return 1;
                }

                if (Sys_While(a1) != 3)
                {
    label_4bf810: ;
                    if (Sys_UnexpectedEndOfFile(a1, &valA[8]))
                        return 1;
                }
                else
                {
                    if (Sys_CloseFileStream_31(a1, &a1[2]))
                    {
                        while (true)
                        {
                            if (*a1[7] != 0x28)
                                goto label_4bf7f6;

                            int32_t* valA13 = Mem_Alloc(0x14, 4);
                            void** srcS1 = valA13;
                            *valA13 = 0;
                            valA13[1] = 0;
                            __builtin_memset(srcS1, 0, 0x14);
                            srcS1[2] = 3;
                            Camera_SetFieldOfView_33(&valA[5], srcS1);
                            int32_t v_24_1 = 0;

                            if (!Sys_PopStack_24(a1, &srcS1[3]))
                                goto label_4bf7f6;

                            if (!Sys_CloseFileStream_31(a1, &a1[2]))
                                goto label_4bf7e7_2;

                            if (!Sys_UnexpectedEndOfFile(a1, &srcS1[4]))
                                goto label_4bf7f6;

                            if (!Sys_CloseFileStream_31(a1, &a1[2]))
                                return 1;

                            v_14_6 = &a1[2];

                            if (Sys_While(a1) != 4)
                                goto label_4bf83e;

                            if (!Sys_CloseFileStream_31(a1, v_14_6))
                                goto label_4bf7e7_2;

                            if (Sys_While(a1) != 3)
                                break;

                            if (!Sys_CloseFileStream_31(a1, &a1[2]))
                                goto label_4bf7e7_2;
                        }

                        goto label_4bf810;
                    }

                label_4bf7e7_2:
                    Sys_FreeMemory_22("Unexpected end of file.");
                }
            }
        }
    }
    label_4bf7f6: ;
    Sys_UnknownBlockType(*a2);
    *a2 = 0;
    return 0;
}
