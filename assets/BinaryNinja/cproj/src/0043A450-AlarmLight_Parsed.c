#include "gi_platform.h"
#include "0043A450-AlarmLight_Parsed.h"
int32_t AlarmLight_Parsed(float a1, char* a2)

{
    DynObj_CreateMagicObject_5(a1, DynObj_Missing(a1 + 0x140));
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
    double* valA5 = DynObj_UpdateDynTree_4(a1);
    Render_BindTexture_14((*(int32_t*)(uintptr_t)(a1 + 0x68)), a1, valA5);
    int32_t* valA6 = (*(int32_t*)(uintptr_t)(a1 + 0xe8));
    memcpy(a1 + 0x70, a1 + 0x108, 0x28);

    if (valA6)
        QTask_FindType(valA6);

    struct status_msg* valA7 = CarGun_Create(nullptr, a1);
    (*(int32_t*)(uintptr_t)(a1 + 0xe8)) = valA7;
    Car_GunCreate(valA7, a1, a1);

    if (!a2 || !*a2)
    {
        int32_t* i = (*(int32_t*)(uintptr_t)(*(a1 + 0xe8) + 8));

        if (*i && i)
        {
            int32_t objC2 = g_afa7e0;

            do
            {
                int32_t* tmpD2 = *i;
                void* valA12;

                if (!tmpD2)
                    valA12 = nullptr;
                else
                {
                    int32_t valA9 = *tmpD2;
                    int32_t valA10 = -(valA9);
                    valA12 = (valA10 - valA10) & tmpD2;
                }

                *((objC2 << 2) + &g_afa6e0) = valA12;
                g_afa7e0 = objC2 + 1;
                uint32_t valA14 = Script_ParseEnumReal32_8();
                int32_t objC4 = 0;
                objC4 = i[7];
                int32_t valA18 = *(((valA14 * 0x180 + objC4) << 2) + &g_a96ae0);

                if (valA18)
                    valA18(i, 0);

                objC2 = g_afa7e0 - 1;
                g_afa7e0 = objC2;
                i = *((objC2 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    Script_Isexists(a1 + 0x1a4, a1);
    return 0;
}
