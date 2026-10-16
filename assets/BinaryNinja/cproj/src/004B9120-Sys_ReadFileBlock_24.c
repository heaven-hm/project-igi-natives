#include "gi_platform.h"
#include "004B9120-Sys_ReadFileBlock_24.h"
int32_t Sys_ReadFileBlock_24(char* a1)

{
    if (a1)
        switch (a1[1])
        {
            case 0:
            {
                switch (*a1 - 1)
                {
                    case 0:
                    {
                        return (*(int32_t*)(uintptr_t)(a1 + 8));
                        break;
                    }
                    case 2:
                    {
                        return (*(int32_t*)(uintptr_t)(a1 + 8));
                        break;
                    }
                    case 3:
                    case 4:
                    {
                        if (!(*(int32_t*)(uintptr_t)(a1 + 8)))
                            (*(int32_t*)(uintptr_t)(a1 + 8)) = Sys_ExecuteBytecode_25((*(int32_t*)(uintptr_t)(a1 + 0x10)));

                        void* valA10 = (*(int32_t*)(uintptr_t)(a1 + 8));

                        if (valA10)
                        {
                            void* valA11 = *(valA10 + 8);
                            char v_18;

                            if (valA11)
                                return
                                    *((int(*)())(uintptr_t)(*(valA11 + 0x10)))(&v_18, *(valA11 + 0x18), (*(int32_t*)(uintptr_t)(a1 + 0xc)));
                        }

                        void* valA14 = (*(int32_t*)(uintptr_t)(a1 + 0x18));

                        if (!valA14)
                        {
                            int32_t v_2c_5 = (*(int32_t*)(uintptr_t)(a1 + 0x24));
                            int32_t v_30_4 = (*(int32_t*)(uintptr_t)(a1 + 0x10));
                        }
                        else
                        {
                            int32_t v_2c_4 = (*(int32_t*)(uintptr_t)(a1 + 0x24));
                            int32_t v_30_3 = *(valA14 + 0x10);
                        }

                        Sys_FreeMemory_22("Unknown identifier '%s' in expression, line %d");
                        break;
                    }
                    case 5:
                    {
                        return Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 8)));
                        break;
                    }
                }
                break;
            }
            case 1:
            {
                int32_t valA33 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));
                return Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x18))) + valA33;
                break;
            }
            case 2:
            {
                int32_t valA37 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));
                return Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x18))) - valA37;
                break;
            }
            case 3:
            {
                return Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));
                break;
            }
            case 4:
            {
                return -(Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c))));
                break;
            }
            case 5:
            {
                int32_t valA41 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));
                return Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x18))) * valA41;
                break;
            }
            case 6:
            {
                int32_t valA44 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));

                if (!valA44)
                {
                    g_a965a8 = 1;
                    return 0;
                }

                return Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x18))) / valA44;
                break;
            }
            case 8:
            {
                int32_t valA50 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));
                return Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x18))) | valA50;
                break;
            }
            case 9:
            {
                int32_t valA54 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));
                return Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x18))) ^ valA54;
                break;
            }
            case 0xa:
            {
                int32_t valA57 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));
                return Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x18))) & valA57;
                break;
            }
            case 0xb:
            {
                char valA61 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));
                return Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x18))) << (valA61 & 0x1f);
                break;
            }
            case 0xc:
            {
                char valA65 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));
                return Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x18))) >> (valA65 & 0x1f);
                break;
            }
            case 0xd:
            {
                return ~Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));
                break;
            }
            case 0xe:
            {
                int32_t valA84 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));
                int32_t objC19 = 0;
                objC19 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x18))) == valA84;
                return objC19;
                break;
            }
            case 0xf:
            {
                int32_t valA88 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));
                int32_t objC20 = 0;
                objC20 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x18))) != valA88;
                return objC20;
                break;
            }
            case 0x10:
            {
                int32_t valA68 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));
                int32_t objC15 = 0;
                objC15 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x18))) < valA68;
                return objC15;
                break;
            }
            case 0x11:
            {
                int32_t valA72 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));
                int32_t objC16 = 0;
                objC16 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x18))) > valA72;
                return objC16;
                break;
            }
            case 0x12:
            {
                int32_t valA76 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));
                int32_t objC17 = 0;
                objC17 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x18))) <= valA76;
                return objC17;
                break;
            }
            case 0x13:
            {
                int32_t valA80 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));
                int32_t objC18 = 0;
                objC18 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x18))) >= valA80;
                return objC18;
                break;
            }
            case 0x14:
            {
                int32_t valA29 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));
                int32_t valA30 = -(valA29);
                return valA30 - valA30 + 1;
                break;
            }
            case 0x18:
            {
                Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x18)));
                return Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));
                break;
            }
            case 0x19:
            {
                char* valA98 = (*(int32_t*)(uintptr_t)(a1 + 0x18));

                if (!valA98)
                {
    label_4b95b4: ;
                    int32_t v_2c_39 = (*(int32_t*)(uintptr_t)(a1 + 0x24));
                    Error_Show("Internal script error. Invalid assignment, line %d");

                    while (true)
                        /* nop */
                }
                else
                {
                    char objC22 = *valA98;

                    if (objC22 != 4)
                    {
                        if (objC22 != 5)
                            goto label_4b95b4;

                        if (objC22 != 4 && !*(valA98 + 8))
                            (*(int32_t*)(uintptr_t)(*(a1 + 0x18) + 8)) = Sys_ExecuteBytecode_25(*(valA98 + 0x10));

                        goto label_4b953a;
                    }
    label_4b953a: ;
                    void* objC25 = (*(int32_t*)(uintptr_t)(a1 + 0x18));
                    void* valA101 = *(objC25 + 8);

                    if (valA101)
                    {
                        int32_t* valA102 = *(valA101 + 8);

                        if (valA102)
                        {
                            int32_t objC26 = *valA102;

                            if (!objC26)
                            {
                                long double fpu2;
                                Sys_OpenFileStream_24(fpu2, (*(int32_t*)(uintptr_t)(a1 + 0x1c)), valA102);
                                return Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));
                            }

                            if (objC26 != 2)
                            {
                                int32_t v_2c_37 = (*(int32_t*)(uintptr_t)(a1 + 0x24));
                                Sys_FreeMemory_22("Syntax error in assignment, line %d");
                                return 0;
                            }

                            int32_t v_2c_36 = (*(int32_t*)(uintptr_t)(a1 + 0x24));
                            Sys_FreeMemory_22("Expression: Cannot assign to constant, line %d");
                            return 0;
                        }
                    }

                    int32_t v_2c_38 = (*(int32_t*)(uintptr_t)(a1 + 0x24));
                    int32_t v_30_20 = *(objC25 + 0x10);
                }

                Sys_FreeMemory_22("Unknown identifier '%s' in expression, line %d");
                break;
            }
            case 0x1b:
            {
                if (!Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x18))))
                {
                    int32_t valA94 = Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));

                    if (!valA94)
                        return valA94;
                }

                return 1;
                break;
            }
            case 0x1c:
            {
                if (Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x18))) && Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c))))
                    return 1;
                break;
            }
            case 0x1d:
            {
                if (!Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 8))))
                    return Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x1c)));

                return Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(a1 + 0x18)));
                break;
            }
        }

    return 0;
}
