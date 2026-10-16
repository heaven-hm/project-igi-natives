#include "gi_platform.h"
#include "00442740-SCamera_Parsed.h"
char* SCamera_Parsed(float a1, char* a2)

{
    DynObj_CreateMagicObject_5(a1, DynObj_Missing(a1 + 0x10c));
    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    long double fpu6 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    fpu6 - fpu7;
    long double x87_r7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    else
        x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

    long double x87_r6_1 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double x87_r6_2 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        else
            x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    }
    else
        x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0x98));

    long double x87_r7_6 = Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_3;
    WorldObject_CommitTransform((*(int32_t*)(uintptr_t)(a1 + 0x68)), a1, a1 + 0xf0, x87_r7_6);
    double* valA4 = DynObj_UpdateDynTree_4(a1);
    Render_BindTexture_14((*(int32_t*)(uintptr_t)(a1 + 0x68)), a1, valA4);
    Sys_DispatchOpcode_12(a1 + 0x70, (*(int32_t*)(uintptr_t)(a1 + 0x108)));
    Script_Isexists(a1 + 0x174, a1);
    char* result = a2;

    if (!result || !*result)
    {
        int32_t* i = (*(int32_t*)(uintptr_t)(a1 + 8));

        if (*i && i)
        {
            int32_t objC2 = g_afa7e0;

            do
            {
                int32_t* tmpD2 = *i;
                void* valA10;

                if (!tmpD2)
                    valA10 = nullptr;
                else
                {
                    int32_t valA7 = *tmpD2;
                    int32_t valA8 = -(valA7);
                    valA10 = (valA8 - valA8) & tmpD2;
                }

                *((objC2 << 2) + &g_afa6e0) = valA10;
                g_afa7e0 = objC2 + 1;
                uint32_t valA12 = Script_ParseEnumReal32_8();
                int32_t tmpD3 = 0;
                tmpD3 = i[7];
                result = *(((valA12 * 0x180 + tmpD3) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, 0);

                objC2 = g_afa7e0 - 1;
                g_afa7e0 = objC2;
                i = *((objC2 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
