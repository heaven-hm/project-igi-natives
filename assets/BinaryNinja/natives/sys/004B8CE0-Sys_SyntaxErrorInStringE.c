// Original IGI.EXE function: Sys_SyntaxErrorInStringE (VA 0x004B8CE0; static CFG gate PASS, CFG score 1.000).
#include "Sys_SyntaxErrorInStringE.h"
char* Sys_SyntaxErrorInStringE(char* a1, int16_t* a2, char* a3)

{
    if (!a1)
    {
        *a2 = g_5474d8;
        return 0;
    }

    int32_t valA2 = a1[1];
    char* v_82c_9;

    if (valA2 > 0x19)
    {
    label_4b8fc0:
        int32_t __saved_ebp_13 = *(a1 + 0x24);
        v_82c_9 = "Syntax error in string expression, line %d";
    label_4b8fc6:
        Sys_FreeMemory_22(v_82c_9);
        *a2 = g_5474d8;
        return 0;
    }

    int32_t tmpD1 = 0;
    tmpD1 = lookup_table_4b9000[valA2];
    void v_800;

    switch (tmpD1)
    {
        case 0:
        {
            int32_t valA6 = *a1 - 1;

            if (valA6 > 5)
            {
                *a2 = g_5474d8;
                return 0;
            }

            char* v_82c_3;
            void* __saved_ebp_3;
            char* valA9;
            char* dstD1;

            switch (valA6)
            {
                case 0:
                case 2:
                {
                    int32_t __saved_ebp_2 = *(a1 + 0x24);
                    Sys_FreeMemory_22("Numeric member in string expression. Line %d.");
                    *a2 = g_5474d8;
                    return 0;
                    break;
                }
                case 1:
                {
                    dstD1 = a3;
                    valA9 = *(a1 + 8);
                    __saved_ebp_3 = &dstD1[0xffffffff];
                label_4b8e57:
                    v_82c_3 = valA9;
                label_4b8e58:
                    char* srcS1 = a2;
                    Camera_ApplyLineFilter_5(srcS1, v_82c_3, __saved_ebp_3);
                    *(srcS1 + dstD1 - 1) = 0;
                    return srcS1;
                    break;
                }
                case 3:
                case 4:
                {
                    if (!*(a1 + 8))
                        *(a1 + 8) = Sys_ExecuteBytecode_25(*(a1 + 0x10));

                    void* valA12 = *(a1 + 8);
                    void* valA13;

                    if (valA12)
                        valA13 = *(valA12 + 8);

                    if (valA12 && valA13)
                    {
                        dstD1 = a3;
                        __saved_ebp_3 = &dstD1[0xffffffff];
                        void v_818;
                        v_82c_3 = *((*(valA13 + 0x10))(&v_818, *(valA13 + 0x18), *(a1 + 0xc),
                            __saved_ebp_3) + 0x10);
                        goto label_4b8e58;
                    }

                    void* valA15 = *(a1 + 0x18);

                    if (!valA15)
                    {
                        int32_t __saved_ebp_6 = *(a1 + 0x24);
                        int32_t v_82c_5 = *(a1 + 0x10);
                        Sys_FreeMemory_22("Unknown identifier '%s' in expression, line %d");
                    }
                    else
                    {
                        int32_t __saved_ebp_5 = *(a1 + 0x24);
                        int32_t v_82c_4 = *(valA15 + 0x10);
                        Sys_FreeMemory_22("Unknown identifier '%s' in expression, line %d");
                    }
                    break;
                }
                case 5:
                {
                    dstD1 = a3;
                    __saved_ebp_3 = &dstD1[0xffffffff];
                    valA9 = Sys_SyntaxErrorInStringE(*(a1 + 8), &v_800, 0x800);
                    goto label_4b8e57;
                }
            }

            *a2 = g_5474d8;
            return 0;
            break;
        }
        case 1:
        {
            Camera_ApplyLineFilter_5(a2, Sys_SyntaxErrorInStringE(*(a1 + 0x18), &v_800, 0x800), &a3[0xffffffff]);
            Terrain_RenderQuadtree_4(a2, Sys_SyntaxErrorInStringE(*(a1 + 0x1c), &v_800, 0x800), &a3[0xffffffff]);
            *(a2 + a3 - 1) = 0;
            return a2;
            break;
        }
        case 2:
        {
            Sys_SyntaxErrorInStringE(*(a1 + 0x18), a2, a3);
            return Sys_SyntaxErrorInStringE(*(a1 + 0x1c), a2, a3);
            break;
        }
        case 3:
        {
            char* valA16 = *(a1 + 0x18);

            if (!valA16)
            {
                *a2 = g_5474d8;
                return 0;
            }

            char objC11 = *valA16;

            if (objC11 != 4)
            {
                if (objC11 != 5)
                {
                    int32_t __saved_ebp_7 = *(a1 + 0x24);
                    Error_Show("Internal script error. Invalid assignment, line %d");

                    while (true)
                        /* nop */
                }
                else if (objC11 != 4 && !*(valA16 + 8))
                    *(*(a1 + 0x18) + 8) = Sys_ExecuteBytecode_25(*(valA16 + 0x10));
            }

            void* objC15 = *(a1 + 0x18);
            void* valA26 = *(objC15 + 8);
            int32_t* valA27;

            if (valA26)
                valA27 = *(valA26 + 8);

            if (!valA26 || !valA27)
            {
                int32_t __saved_ebp_12 = *(a1 + 0x24);
                int32_t v_82c_10 = *(objC15 + 0x10);
                Sys_FreeMemory_22("Unknown identifier '%s' in expression, line %d");
                *a2 = g_5474d8;
                return 0;
            }

            int32_t objC16 = *valA27;

            if (!objC16)
            {
                long double fpu2;
                Sys_OpenFileStream_24(fpu2, *(a1 + 0x1c), valA27);
                return Sys_SyntaxErrorInStringE(*(a1 + 0x1c), a2, a3);
            }

            if (objC16 != 2)
            {
                int32_t __saved_ebp_11 = *(a1 + 0x24);
                v_82c_9 = "Syntax error in assignment, line %d";
            }
            else
            {
                int32_t __saved_ebp_10 = *(a1 + 0x24);
                v_82c_9 = "Expression: Cannot assign to constant, line %d";
            }

            goto label_4b8fc6;
        }
        case 4:
        {
            goto label_4b8fc0;
        }
    }
}
