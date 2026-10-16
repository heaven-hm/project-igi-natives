#include "gi_platform.h"
#include "0050AC90-Physics_CouldnTGetSurfaceDes.h"
int32_t Physics_CouldnTGetSurfaceDes(int32_t* a1)

{
    int32_t* valA = a1;
    int32_t result = 0;

    if (valA)
    {
        while (true)
        {
            int32_t v_47c = 0x7c;
            int32_t valA1 = ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)(*valA + 0x58))))(valA, &v_47c);
            char v_400;

            if (valA1)
            {
                Game_DataSymbolLoad(&v_400, "Couldn't get surface description");
                int32_t v_4a4 = DDERR_GENERIC(valA1);
                void* v_4a8 = &v_400;
                Error_Show("%s\n\nDirectX error message: %s");

                while (true)
                    /* nop */
            }
            else
            {
                int32_t (* v_48c)() = nullptr;
                int32_t v_474;
                int32_t v_470;
                int32_t v_428;
                result += (v_428 >> 3) * v_474 * v_470;
                int32_t* valA6 = a1;
                int32_t v_488_1 = 0;
                int32_t v_484_1 = 0;
                v_48c = QTask_CreateTask;
                int32_t v_480_1 = 0;
                int32_t valA7 = ((int(*)())(uintptr_t)(*(*valA6 + 0x30)))(valA6, &v_48c, &a1);

                if (valA7 == 0x887600ff)
                    break;

                if (valA7)
                {
                    Game_DataSymbolLoad(&v_400, "Couldn't get attached surface");
                    int32_t v_4a4_1 = DDERR_GENERIC(valA7);
                    void* v_4a8_1 = &v_400;
                    Error_Show("%s\n\nDirectX error message: %s");

                    while (true)
                        /* nop */
                }
                else
                {
                    valA = a1;

                    if (!valA)
                        break;
                }
            }
        }
    }

    return result;
}
