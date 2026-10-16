#include "0050AC90-Physics_CouldnTGetSurfaceDes.h"
/* 0x0050ac90 Physics_CouldnTGetSurfaceDes full linked: callers=3 callees=6 */
int32_t sub_50ac90(int32_t* a1)

{
    int32_t* eax = a1;
    int32_t result = 0;

    if (eax)
    {
        while (true)
        {
            int32_t var_47c = 0x7c;
            int32_t eax_1 = (*(*eax + 0x58))(eax, &var_47c);
            void var_400;

            if (eax_1)
            {
                Game_DataSymbolLoad(&var_400, "Couldn't get surface description");
                int32_t var_4a4 = sub_492be0(eax_1);
                void* var_4a8 = &var_400;
                Error_Show("%s\n\nDirectX error message: %s");

                while (true)
                    /* nop */
            }
            else
            {
                int32_t (* var_48c)() = nullptr;
                int32_t var_474;
                int32_t var_470;
                int32_t var_428;
                result += (var_428 >> 3) * var_474 * var_470;
                int32_t* eax_6 = a1;
                int32_t var_488_1 = 0;
                int32_t var_484_1 = 0;
                var_48c = QTask_CreateTask;
                int32_t var_480_1 = 0;
                int32_t eax_7 = (*(*eax_6 + 0x30))(eax_6, &var_48c, &a1);

                if (eax_7 == 0x887600ff)
                    break;

                if (eax_7)
                {
                    Game_DataSymbolLoad(&var_400, "Couldn't get attached surface");
                    int32_t var_4a4_1 = sub_492be0(eax_7);
                    void* var_4a8_1 = &var_400;
                    Error_Show("%s\n\nDirectX error message: %s");

                    while (true)
                        /* nop */
                }
                else
                {
                    eax = a1;

                    if (!eax)
                        break;
                }
            }
        }
    }

    return result;
}
