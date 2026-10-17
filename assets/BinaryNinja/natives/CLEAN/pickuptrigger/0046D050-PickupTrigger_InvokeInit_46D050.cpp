// IGI native provenance: PickupTrigger_InvokeInit_46D050 - 0x0046D050 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046D050-PickupTrigger_InvokeInit_46D050.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_InvokeInit_46D050.h"

int32_t* PickupTrigger_InvokeInit_46D050(float arg1)

{
    Qhash_Init(1);
    *(arg1 + 0x12c) = Sys_CheckHeap_22(arg1 + 0x130);
    Qhash_Reset();
    int32_t* result = HumanPlayer_CheckCollision_10(*(arg1 + 0x12c));
    int32_t* result_1 = result;

    if (result_1)
    {
        __builtin_memcpy(arg1 + 0x108, arg1 + 0xf0, 0x18);
        void* eax_2 = DynObj_Missing(&result_1[0x187]);

        if (eax_2)
            DynObj_CreateMagicObject_5(arg1, eax_2);

        long double x87_r7_1 = *(arg1 + 0x9c);
        long double x87_r6_1 = *(arg1 + 0xa0);
        x87_r6_1 - x87_r7_1;
        long double x87_r7_2;

        if (!(*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_2 = *(arg1 + 0xa0);
        else
            x87_r7_2 = *(arg1 + 0x9c);

        long double x87_r6_2 = *(arg1 + 0x98);
        x87_r6_2 - x87_r7_2;
        long double x87_r7_4;

        if (*(&((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_5 = *(arg1 + 0x9c);
            long double x87_r6_3 = *(arg1 + 0xa0);
            x87_r6_3 - x87_r7_5;

            if (!(*(&((x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_4 = *(arg1 + 0xa0);
            else
                x87_r7_4 = *(arg1 + 0x9c);
        }
        else
            x87_r7_4 = *(arg1 + 0x98);

        float __saved_esi_3 = Render_ComputeNormals(*(arg1 + 0x6c)) * x87_r7_4;
        WorldObject_CommitTransform(Level_StartMission_4(), arg1, arg1 + 0xf0, __saved_esi_3);
        double* eax_7 = DynObj_UpdateDynTree_4(arg1);
        result = Render_BindTexture_14(*(arg1 + 0x68), arg1, eax_7);
        *(arg1 + 0x150) = result_1[0x192];
    }

    return result;
}
