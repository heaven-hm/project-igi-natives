#include "gi_platform.h"
#include "004B6720-Sys_IlfFileCorruptS.h"
int32_t* Sys_IlfFileCorruptS(int32_t* a1, int32_t* a2)

{
    int32_t* flagP = nullptr;
    int32_t* v_28 = a2;
    int32_t* ctxB = nullptr;
    int32_t valA;
    void* objC;
    int32_t tmpD;
    int32_t* valA1 = Resource_Load(valA, tmpD, objC, nullptr);

    if (valA1)
    {
        if (Sys_OpenFileStream_20(valA1) == 0x46464c49 && Sys_FreeMemory_20(valA1) == 0x544e4f46)
        {
            int32_t* valA4 = Sys_ResolveSymbol_19(valA1);

            if (valA4)
            {
                int32_t* valA5 = Sys_ReadFileBlock_20(valA4, 0x48544e46);
                int32_t* valA6 = Sys_ReadFileBlock_20(valA4, 0x4e415254);
                int32_t* valA7 = Sys_ReadFileBlock_20(valA4, 0x464d4e41);

                if (valA5 && valA6 && valA7)
                {
                    int32_t* valA8 = Sys_CheckHeap_19(valA5, valA1);
                    char* valA9 = Sys_CheckHeap_19(valA6, valA1);
                    void* valA10 = Sys_CheckHeap_19(valA7, valA1);
                    char v_8;
                    Sys_AllocateMemory_20(&v_8, nullptr, valA6);
                    char v_4;
                    Sys_AllocateMemory_20(&v_4, nullptr, valA7);

                    if (valA8)
                    {
                        char* ctxB2 = valA9;

                        if (ctxB2 && valA10)
                        {
                            int32_t valA11 = Sys_PushStack_7(valA1);
                            int32_t valA12 = *valA8;
                            int32_t valA13 = -(valA12);
                            Sys_OpenFileStream_17(a1, 0, 0, 0, valA8[4], valA8[5], valA8[3],
                                ((valA13 - valA13) & 0xffff0000) + 0x10000, 0, valA8[1], valA11);
                            int32_t valA18 = a1[4];

                            if (valA18 > 0)
                            {
                                Sys_PopStack_7(valA1, a1[1], valA18, 0);
                                int32_t* valA19 = Sys_DispatchOpcode_20(0x100, 1, a1);
                                a1[3] = valA19;

                                for (int32_t i = 0; i < 0x100; )
                                {
                                    valA19 = *ctxB2;
                                    valA19 = Sys_PopStack_20(a1[3], i, 0, valA19);
                                    i += 1;
                                    ctxB2 = &ctxB2[2];
                                }

                                int32_t ctxB3 = 0;

                                if (a1[5] > 0)
                                {
                                    int32_t* srcS1 = valA10 + 0xc;
                                    int32_t objC8;

                                    do
                                    {
                                        Sys_FreeMemory_17(a1, ctxB3, srcS1[2], *(srcS1 + 0xa), srcS1[3],
                                            *(srcS1 + 0x16), srcS1[6], *(srcS1 + 0xe), srcS1[-3],
                                            srcS1[-2], srcS1[-1], *srcS1, srcS1[1]);
                                        objC8 = 0;
                                        objC8 = a1[5];
                                        ctxB3 += 1;
                                        srcS1 = &srcS1[0xa];
                                    } while (ctxB3 < objC8);
                                }

                                return a1;
                            }

                            int32_t* v_24_7 = a2;
                            Error_Show("ILF file corrupt: %s");

                            while (true)
                                /* nop */
                        }
                    }

                    int32_t* v_24_10 = a2;
                    Error_Show("ILF file corrupt: %s");

                    while (true)
                        /* nop */
                }

                int32_t* v_24_11 = a2;
                Error_Show("ILF file corrupt: %s");

                while (true)
                    /* nop */
            }
            else
            {
                int32_t* v_24_4 = a2;
                Error_Show("ILF file corrupt: %s");

                while (true)
                    /* nop */
            }
        }

        char objC9 = *valA1;

        if (objC9 != 0x4c)
        {
    label_4b6cd0: ;
            int32_t* v_24_19 = a2;
            Error_Show("Invalid sprite file: %s");

            while (true)
                /* nop */
        }
        else if (*(valA1 + 1) != 0x4f || *(valA1 + 2) != 0x4f || *(valA1 + 3) != 0x50
            || valA1[1] != 1)
        {
            if (objC9 != 0x4c)
                goto label_4b6cd0;

            if (*(valA1 + 1) != 0x4f || *(valA1 + 2) != 0x4f || *(valA1 + 3) != 0x50
                || valA1[1] != 7)
            {
                if (objC9 != 0x4c)
                    goto label_4b6cd0;

                if (*(valA1 + 1) != 0x4f || *(valA1 + 2) != 0x4f || *(valA1 + 3) != 0x50
                    || valA1[1] != 9)
                {
                    if (objC9 != 0x4c)
                        goto label_4b6cd0;

                    if (*(valA1 + 1) == 0x4f && *(valA1 + 2) == 0x4f && *(valA1 + 3) == 0x50
                        && valA1[1] == 5)
                    {
                        int32_t* v_24_17 = a2;
                        Error_Show("The font '%s' must be packed. Ask Stein.");

                        while (true)
                            /* nop */
                    }

                    if (objC9 == 0x4c && *(valA1 + 1) == 0x4f && *(valA1 + 2) == 0x4f
                        && *(valA1 + 3) == 0x50 && valA1[1] == 0xa)
                    {
                        int32_t* v_24_18 = a2;
                        Error_Show("The font '%s' must be packed. Ask Stein.");

                        while (true)
                            /* nop */
                    }

                    goto label_4b6cd0;
                }

                int32_t flagP6 = valA1[6];
                int32_t dstD8;

                if (!flagP6)
                    dstD8 = valA1[0xc];
                else
                {
                    int32_t* valA47 = Mem_Alloc(0xc, 4);
                    dstD8 = *(valA1 + flagP6 + 0xc);
                    ctxB = valA47;
                    Sys_PushStack_21(ctxB, valA1 + flagP6 + 0x10, dstD8);
                }

                int32_t valA48 = valA1[8];
                flagP = a1;
                int32_t valA50 = -((valA48 - 1));
                Sys_OpenFileStream_17(flagP, dstD8, 0, 0, valA1[0xa], valA1[0xb], 0,
                    ((valA50 - valA50) & 0xffff0000) + 0x10000, ctxB, valA48, valA48);
                int32_t i_1 = 0;

                if (valA1[8] > 0)
                {
                    int32_t* dstD9 = &valA1[0x14];

                    do
                    {
                        int32_t objC21 = 0;
                        objC21 = dstD9[-4];
                        int32_t tmpD21 = 0;
                        tmpD21 = *(dstD9 - 0x12);
                        int32_t valA57 = 0;
                        valA57 = dstD9[-5];
                        Sys_AllocateMemory_17(flagP, i_1, dstD9[-7] + valA1, valA57, tmpD21, objC21, dstD9[-6],
                            *(valA1 + 0x12), *dstD9);
                        Sys_FreeMemory_17(flagP, i_1, i_1, *(dstD9 - 0x12), dstD9[-4], *(dstD9 - 6),
                            dstD9[-1], *(dstD9 - 0xe), *dstD9, 0.0f, 0.0f, 1.0f, 1.0f);
                        i_1 += 1;
                        dstD9 = &dstD9[8];
                    } while (i_1 < valA1[8]);
                }

                int32_t valA61 = valA1[7];

                if (!valA61)
                    Resource_Unload(a2);
                else
                {
                    flagP[3] = Sys_CloseFileStream_20(valA1 + valA61, flagP);
                    Resource_Unload(a2);
                }
            }
            else
            {
                int32_t flagP5 = valA1[6];
                int32_t v_10_2;
                int32_t dstD6;

                if (!flagP5)
                {
                    int32_t tmpD14 = valA1[0xc];
                    v_10_2 = tmpD14;
                    dstD6 = tmpD14;
                }
                else
                {
                    int32_t* valA31 = Mem_Alloc(0xc, 4);
                    dstD6 = *(valA1 + flagP5 + 0xc);
                    ctxB = valA31;
                    v_10_2 = dstD6;
                    Sys_PushStack_21(ctxB, valA1 + flagP5 + 0x10, dstD6);
                }

                int32_t valA32 = valA1[8];
                flagP = a1;
                int32_t valA34 = -((valA32 - 1));
                Sys_OpenFileStream_17(flagP, dstD6, 0, 0, valA1[0xa], valA1[0xb], 0,
                    ((valA34 - valA34) & 0xffff0000) + 0x10000, ctxB, valA32, valA32);
                int32_t i_2 = 0;

                if (valA1[8] > 0)
                {
                    int32_t* dstD7 = &valA1[0x11];

                    do
                    {
                        Sys_AllocateMemory_17(flagP, i_2, dstD7[-4] + valA1, dstD7[-3], dstD7[-2], dstD7[-1],
                            v_10_2, *(valA1 + 0x12), 0);
                        Sys_FreeMemory_17(flagP, i_2, i_2, dstD7[-2], dstD7[-1], dstD7[4], dstD7[5], *dstD7,
                            0, 0.0f, 0.0f, 1.0f, 1.0f);
                        i_2 += 1;
                        dstD7 = &dstD7[0xa];
                    } while (i_2 < valA1[8]);
                }

                void* valA45 = valA1[7];

                if (!valA45)
                    Resource_Unload(a2);
                else
                {
                    flagP[3] = Sys_CloseFileStream_20(valA45 + valA1, flagP);
                    Resource_Unload(a2);
                }
            }
        }
        else
        {
            int32_t dstD4 = valA1[3];
            int32_t flagP4;

            if (!dstD4)
                flagP4 = 2;
            else
            {
                int32_t* valA27 = Mem_Alloc(0xc, 4);
                flagP4 = *(dstD4 + valA1 + 0xc);
                ctxB = valA27;
                Sys_PushStack_21(ctxB, dstD4 + valA1 + 0x10, flagP4);
            }

            Sys_OpenFileStream_17(a1, flagP4, 0, 0, valA1[6], *(valA1 + 0x1a), 0, 0x10000, ctxB, 1, 1);
            int32_t objC11 = 0;
            objC11 = *(valA1 + 0x1a);
            int32_t tmpD12 = 0;
            tmpD12 = valA1[6];
            int32_t valA29 = 0;
            valA29 = *(valA1 + 0x16);
            Sys_AllocateMemory_17(a1, 0, &valA1[7], valA29, tmpD12, objC11, flagP4, 0, 0);
            Sys_FreeMemory_17(a1, 0, 0, valA1[6], *(valA1 + 0x1a), 0, 0, 0, 0, 0.0f, 0.0f, 1.0f, 1.0f);
            flagP = a1;
            Resource_Unload(a2);
        }
    }

    return flagP;
}
