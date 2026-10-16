#include "EditRigidObj_Update.h"
float* EditRigidObj_Update(float a1)

{
    uint32_t ctxB = a1;
    *(ctxB + 0xa8) = *(ctxB + 0x140);
    *(ctxB + 0xac) = *(ctxB + 0x144);
    *(ctxB + 0xb0) = *(ctxB + 0x148);
    *(ctxB + 0xb4) = *(ctxB + 0x14c);
    *(ctxB + 0xb8) = *(ctxB + 0x150);
    *(ctxB + 0xbc) = *(ctxB + 0x154);
    memcpy(ctxB + 0x70, ctxB + 0x108, 0x28);
    void* valA4 = DynObj_Missing(ctxB + 0x130);

    if (valA4)
        DynObj_CreateMagicObject_5(ctxB, valA4);

    long double fpu7 = *(ctxB + 0x9c);
    long double fpu6 = *(ctxB + 0xa0);
    fpu6 - fpu7;
    long double x87_r7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(ctxB + 0xa0);
    else
        x87_r7_1 = *(ctxB + 0x9c);

    long double x87_r6_1 = *(ctxB + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(ctxB + 0x9c);
        long double x87_r6_2 = *(ctxB + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(ctxB + 0xa0);
        else
            x87_r7_3 = *(ctxB + 0x9c);
    }
    else
        x87_r7_3 = *(ctxB + 0x98);

    long double x87_r7_6 = Render_ComputeNormals(*(ctxB + 0x6c)) * x87_r7_3;
    WorldObject_CommitTransform(*(ctxB + 0x68), ctxB, ctxB + 0xf0, x87_r7_6);
    Render_BindTexture_14(*(ctxB + 0x68), ctxB, ctxB + 0xf0);
    int32_t* valA7 = *(ctxB + 0xe8);

    if (valA7)
        QTask_FindType(valA7);

    struct status_msg* valA8 = CarGun_Create(nullptr, ctxB);
    *(ctxB + 0xe8) = valA8;
    Car_GunCreate(valA8, ctxB, ctxB);
    int32_t* i = *(*(ctxB + 0xe8) + 8);

    if (*i && i)
    {
        int32_t objC4 = g_afa7e0;

        do
        {
            int32_t* tmpD5 = *i;
            void* valA13;

            if (!tmpD5)
                valA13 = nullptr;
            else
            {
                int32_t valA10 = *tmpD5;
                int32_t valA11 = -(valA10);
                valA13 = (valA11 - valA11) & tmpD5;
            }

            *((objC4 << 2) + &g_afa6e0) = valA13;
            g_afa7e0 = objC4 + 1;
            uint32_t valA15 = Script_ParseEnumReal32_8();
            int32_t tmpD6 = 0;
            tmpD6 = i[7];
            int32_t valA16 = *(((valA15 * 0x180 + tmpD6) << 2) + &g_a96ae0);

            if (valA16)
                valA16(i, 0);

            objC4 = g_afa7e0 - 1;
            g_afa7e0 = objC4;
            i = *((objC4 << 2) + &g_afa6e0);
        } while (i);
    }

    return Script_ParseEnumString_13(ctxB);
}
