#include "Sys_TooManyArgumentsToFu.h"
int32_t* Sys_TooManyArgumentsToFu(int32_t* a1, void* a2)

{
    int32_t objC;
    int32_t v_4_1 = objC;
    char** flagP = Mem_Alloc(g_a969c0 << 2, 4);
    char** v_4 = flagP;
    int32_t valA2;
    int32_t objC2;

    if (a2)
    {
        valA2 = *(a2 + 0xc);
        objC2 = 0;
        objC2 = valA2 == 0xffffffff;
    }

    if (a2 && !objC2)
    {
        int32_t i_3 = 0;

        if (valA2 > 0)
        {
            while (true)
            {
                if (!Sys_CloseFileStream_31(a1, &a1[2]))
                {
                    int32_t v_18_17 = DynObj_CreateMagicObject(a1);
                    int32_t v_1c_15 = DynObj_LookupHashItem(a1);
                    Sys_FreeMemory_22("Parse error (missing " ?) in line %d: '%s'");
                }
                else if (Sys_ResolveSymbol_24(a1, flagP, 0, 1))
                {
                    if (a1[6] == 0x18 || i_3 >= *(a2 + 0xc) - 1)
                    {
                        i_3 += 1;
                        flagP = &flagP[1];

                        if (i_3 < *(a2 + 0xc))
                            continue;

                        flagP = v_4;
                        break;
                    }
                    else
                    {
                        int32_t v_18_15 = DynObj_CreateMagicObject(a1);
                        int32_t v_1c_13 = DynObj_LookupHashItem(a1);
                    }

                    Sys_FreeMemory_22("Too few arguments to functions in line %d: '%s'");
                }

                if (i_3 > 0)
                {
                    char** srcS5 = v_4;
                    int32_t i;

                    do
                    {
                        Sys_PushStack_24(*srcS5);
                        srcS5 = &srcS5[1];
                        i = i_3;
                        i_3 -= 1;
                    } while (i != 1);
                }

                Sys_ExecuteBytecode_2(v_4);
                return 0;
            }
        }

        int32_t valA24 = *(a2 + 0xc);

        if (valA24)
        {
            int32_t objC14 = a1[6];

            if (objC14 == 0x18)
            {
                int32_t v_18_13 = DynObj_CreateMagicObject(a1);
                int32_t v_1c_11 = DynObj_LookupHashItem(a1);
                Sys_FreeMemory_22("Too many arguments to function in line %d: '%s'");
                Sys_ExecuteBytecode_2(flagP);
                return 0;
            }

            if (objC14 != 0x16)
            {
                int32_t v_18_21 = DynObj_CreateMagicObject(a1);
                int32_t v_1c_17 = DynObj_LookupHashItem(a1);
                Sys_FreeMemory_22("Syntax error in line %d: '%s'");
                Sys_ExecuteBytecode_2(flagP);
                return 0;
            }

            void* valA37 = Mem_Alloc((valA24 << 2) + 4, 4);
            void* objC19 = (*(a2 + 0xc) << 2) + 4;
            __builtin_memset(__builtin_memset(valA37, 0, objC19 & 0xfffffffc), 0, objC19 & 3);
            int32_t objC24 = *(a2 + 0xc) << 2;
            int32_t srcS7;
            int32_t dstD8;
            dstD8 = memcpy(valA37, v_4, objC24 & 0xfffffffc);
            memcpy(dstD8, srcS7, objC24 & 3);
            Sys_ExecuteBytecode_2(v_4);
            int32_t* valA39 = Mem_Alloc(0xc, 4);
            valA39[2] = valA37;
            valA39[1] = 0;
            *valA39 = *(a2 + 0xc);
            return valA39;
        }

        if (Sys_CloseFileStream_31(a1, &a1[2]))
        {
            if (a1[6] != 0x16)
            {
                int32_t v_18_24 = DynObj_CreateMagicObject(a1);
                int32_t v_1c_21 = DynObj_LookupHashItem(a1);
                Sys_FreeMemory_22("Too many arguments to function in line %d: '%s'");
                Sys_ExecuteBytecode_2(flagP);
                return 0;
            }

            Sys_ExecuteBytecode_2(flagP);
            int32_t* valA44 = Mem_Alloc(0xc, 4);
            valA44[2] = 0;
            valA44[1] = 0;
            *valA44 = 0;
            return valA44;
        }
    }
    else
    {
        int32_t i_2 = 0;

        if (g_a969c0 <= 0)
        {
        label_4ba564:
            int32_t v_18_3 = DynObj_CreateMagicObject(a1);
            int32_t v_1c_3 = DynObj_LookupHashItem(a1);
            Sys_FreeMemory_22("Too many arguments to function in line %d: '%s'");
            Sys_ExecuteBytecode_2(flagP);
            return 0;
        }

        char** dstD1 = flagP;

        while (true)
        {
            *dstD1 = nullptr;

            if (!Sys_CloseFileStream_31(a1, &a1[2]))
            {
                int32_t v_18_5 = DynObj_CreateMagicObject(a1);
                int32_t v_1c_5 = DynObj_LookupHashItem(a1);
                Sys_FreeMemory_22("Parse error (missing " ?) in line %d: '%s'");

                if (i_2 > 0)
                {
                    char** srcS1 = flagP;
                    int32_t i_1;

                    do
                    {
                        Sys_PushStack_24(*srcS1);
                        srcS1 = &srcS1[1];
                        i_1 = i_2;
                        i_2 -= 1;
                    } while (i_1 != 1);
                }

                break;
            }

            if (a1[6] != 0x16)
            {
                if (!Sys_ResolveSymbol_24(a1, dstD1, 0, 1) || a1[6] == 0x18)
                {
                    i_2 += 1;
                    dstD1 = &dstD1[1];

                    if (i_2 >= g_a969c0)
                        goto label_4ba564;

                    continue;
                }
                else
                    i_2 += 1;
            }

            if (i_2 >= g_a969c0)
                goto label_4ba564;

            if (a1[6] != 0x16)
            {
                int32_t v_18_9 = DynObj_CreateMagicObject(a1);
                int32_t v_1c_7 = DynObj_LookupHashItem(a1);
                Sys_FreeMemory_22("Syntax error in line %d: '%s'");
                Sys_ExecuteBytecode_2(flagP);
                return 0;
            }

            void* valA17 = Mem_Alloc((i_2 << 2) + 4, 4);
            __builtin_memset(__builtin_memset(valA17, 0, ((i_2 << 2) + 4) & 0xfffffffc), 0,
                ((i_2 << 2) + 4) & 3);

            if (i_2)
                memcpy(valA17, v_4, i_2 << 2);

            Sys_ExecuteBytecode_2(v_4);
            int32_t* valA19 = Mem_Alloc(0xc, 4);
            valA19[2] = valA17;
            *valA19 = i_2;
            valA19[1] = 0;
            return valA19;
        }
    }

    Sys_ExecuteBytecode_2(flagP);
    return 0;
}
