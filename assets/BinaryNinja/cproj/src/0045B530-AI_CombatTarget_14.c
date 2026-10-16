#include "gi_platform.h"
#include "0045B530-AI_CombatTarget_14.h"
int32_t* AI_CombatTarget_14(void* a1, void* a2)

{
    int32_t ctxB = (*(int32_t*)(uintptr_t)(a1 + 8));
    void* flagP = (*(int32_t*)(uintptr_t)(a2 + 0x800));

    if (!(ctxB & 4))
    {
        void* objC = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0x1d;
        int32_t valA1 = *(objC + 0x74);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA1;
        return valA1(a1, a2);
    }

    if (ctxB & 0x10000)
    {
        void* valA3 = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0x1e;
        int32_t valA4 = *(valA3 + 0x78);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA4;
        return valA4(a1, a2);
    }

    if (ctxB & 0x20000)
    {
        void* tmpD2 = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0x20;
        int32_t valA6 = *(tmpD2 + 0x80);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA6;
        return valA6(a1, a2);
    }

    int32_t* result = Render_DrawSplineMesh_10(a2 + 0x68, 0);

    if ((*(int32_t*)(uintptr_t)(a2 + 0x53c)) == result && (*(int32_t*)(uintptr_t)(a2 + 0x538)) == 0xc)
    {
        result = (*(int32_t*)(uintptr_t)(a2 + 0xd19));

        if (!result)
        {
            (*(int32_t*)(uintptr_t)(a2 + 0xd19)) = 1;
            long double fp0_1;
            fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
            long double f0_1 = *(flagP + 0x3da8);
            fp0_1 - f0_1;
            result = (fp0_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f0_1) ? 1 : 0) << 0xa
                | (fp0_1 == f0_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 0x41)
            {
                result = *(flagP + 0x3aa8);

                if (result)
                {
                    result = result[3];

                    if (result && *result)
                    {
                        void* tmpD3 = *(flagP + 0x3aa8);
                        int32_t v_8 = *(flagP + 0x3dac);
                        void* v_4_1 = a2;
                        void* flagP1 = **(tmpD3 + 0xc);
                        uint32_t valA12 = AI_CheckSector_17();
                        int32_t tmpD4 = 0;
                        tmpD4 = *(flagP1 + 0x1c);
                        result = *(((valA12 * 0x180 + tmpD4) << 2) + &g_a96ae0);

                        if (result)
                            result = result(flagP1, &v_8);
                    }
                }
            }
        }
    }

    if (!(ctxB & 1))
        return result;

    int32_t* valA13 = (*(int32_t*)(uintptr_t)(a1 + 4));
    (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
    (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0;
    int32_t valA14 = *valA13;
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA14;
    return valA14(a1, a2);
}
