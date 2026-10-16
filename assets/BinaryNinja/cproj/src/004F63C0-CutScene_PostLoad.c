#include "gi_platform.h"
#include "004F63C0-CutScene_PostLoad.h"
int32_t CutScene_PostLoad(void* a1, char* a2)

{
    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0x74));
    long double f0 = 0.0f;
    fpu7 - f0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1)
        (*(int32_t*)(uintptr_t)(a1 + 0x74)) = 0;

    long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x78));
    long double f1 = 0.0f;
    x87_r7_1 - f1;

    if (*(&((x87_r7_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f1 ? 1 : 0) << 0xe) + 1) & 1)
        (*(int32_t*)(uintptr_t)(a1 + 0x78)) = 0;

    (*(int32_t*)(uintptr_t)(a1 + 0x64)) = g_a76c54 * (*(int32_t*)(uintptr_t)(a1 + 0x68));

    if (!a2 || !*a2)
    {
        int32_t* i = (*(int32_t*)(uintptr_t)(a1 + 8));

        if (*i && i)
        {
            int32_t objC1 = g_afa7e0;

            do
            {
                int32_t* tmpD1 = *i;
                void* valA6;

                if (!tmpD1)
                    valA6 = nullptr;
                else
                {
                    int32_t valA3 = *tmpD1;
                    int32_t valA4 = -(valA3);
                    valA6 = (valA4 - valA4) & tmpD1;
                }

                *((objC1 << 2) + &g_afa6e0) = valA6;
                g_afa7e0 = objC1 + 1;
                uint32_t valA8 = Script_ParseEnumReal32_8();
                int32_t tmpD2 = 0;
                tmpD2 = i[7];
                int32_t valA9 = *(((valA8 * 0x180 + tmpD2) << 2) + &g_a96ae0);

                if (valA9)
                    valA9(i, 0);

                objC1 = g_afa7e0 - 1;
                g_afa7e0 = objC1;
                i = *((objC1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    Script_Isexists(a1 + 0x7c, a1);
    Script_Isexists(a1 + 0xcc, a1);
    Script_Isexists(a1 + 0x11c, a1);
    Script_Isexists(a1 + 0x16c, a1);
    Script_Isexists(a1 + 0x1bc, a1);
    return 0;
}
