#include "gi_platform.h"
#include "0052C900-LevelScript_LoadParameters.h"
void* LevelScript_LoadParameters(void* a1)

{
    if (!(*(int32_t*)(uintptr_t)(a1 + 0x24)))
    {
        int32_t* i = (*(int32_t*)(uintptr_t)(a1 + 8));
        int32_t valA1 = *i;
        int32_t valA2 = -(valA1);
        (*(int32_t*)(uintptr_t)(a1 + 0x24)) = (valA2 - valA2) & i;

        if (*i && i)
        {
            int32_t objC1 = g_afa7e0;

            do
            {
                int32_t* tmpD1 = *i;
                void* valA9;

                if (!tmpD1)
                    valA9 = nullptr;
                else
                {
                    int32_t valA6 = *tmpD1;
                    int32_t valA7 = -(valA6);
                    valA9 = (valA7 - valA7) & tmpD1;
                }

                *((objC1 << 2) + &g_afa6e0) = valA9;
                g_afa7e0 = objC1 + 1;
                uint32_t valA11 = Script_ParseEnumReal32_8();
                int32_t objC3 = 0;
                objC3 = i[7];
                int32_t valA15 = *(((valA11 * 0x180 + objC3) << 2) + &g_a96ae0);

                if (valA15)
                    valA15(i, 0);

                objC1 = g_afa7e0 - 1;
                g_afa7e0 = objC1;
                i = *((objC1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    while (true)
    {
        void* result = (*(int32_t*)(uintptr_t)(a1 + 0x24));
        int32_t v_8 = (*(int32_t*)(uintptr_t)(a1 + 0x20));
        char v_4_1 = 0;

        if (!result)
            return result;

        int32_t objC5 = 0;
        objC5 = *(result + 0x1c);
        int32_t objC6 = 0;
        objC6 = g_54f6f2;
        result = ((int(*)())(uintptr_t)(*(((objC5 + objC6 * 0x180) << 2) + &g_a96ae0)))(result, &v_8);
        result = v_4_1;

        if (!result)
            return result;

        int32_t* objC9 = *(*(int32_t*)(uintptr_t)(a1 + 0x24));

        if (!objC9)
            (*(int32_t*)(uintptr_t)(a1 + 0x24)) = 0;
        else
        {
            int32_t valA16 = *objC9;
            int32_t valA17 = -(valA16);
            (*(int32_t*)(uintptr_t)(a1 + 0x24)) = (valA17 - valA17) & objC9;
        }
    }
}
