#include "gi_platform.h"
#include "004C75F0-DynObj_FindSymbol_9.h"
void* const DynObj_FindSymbol_9(int32_t a1, void* a2)

{
    void* const result = a2;
    int32_t srcS;
    int32_t v_14 = srcS;
    void* i = *(result + 0x2c);
    void* const result_1 = nullptr;
    int32_t tmpD = 0x8000;

    while (i)
    {
        srcS = *(i + 0x5c);
        i = *(i + 0x58);
        tmpD |= srcS;
    }

    if (tmpD != *(result + 0x38))
        result_1 = 1;

    *(result + 0x38) = tmpD;

    while (true)
    {
        int32_t flagP4 = *(result + 4);
        void* result_2 = *(result + 8);

        if (!result_2)
            break;

        if (*(result + 0x30) || *(result + 0x2c))
        {
            result = result_1;

            if (!result)
                break;
    label_4c76ff: ;
            int32_t ctxB6 = 0x8000;
            int32_t* objC7 = result_2 + 0xc;
            int32_t i_2 = 8;
            int32_t i_1;

            do
            {
                void* valA9 = *objC7;

                if (valA9)
                {
                    flagP4 = *(valA9 + 0x3a);
                    flagP4 |= *(valA9 + 0x38);
                    ctxB6 |= flagP4;
                }

                objC7 = &objC7[1];
                i_1 = i_2;
                i_2 -= 1;
            } while (i_1 != 1);

            if (*(result_2 + 0x3a) == ctxB6)
                result_1 = nullptr;

            *(result_2 + 0x3a) = ctxB6;
        }
        else
        {
            int32_t* valA1 = *(*(result_2 + (flagP4 << 2) + 0xc) + 0x3c);

            if (valA1)
                DynCubeObj_Action(valA1);

            int32_t tmpD1 = (*(int32_t*)(uintptr_t)(*(result_2 + (flagP4 << 2) + 0xc) + *(a1 + 0xd14)));
            int32_t valA4 = (*(int32_t*)(uintptr_t)(a1 + 0xd08)) - 1;
            (*(int32_t*)(uintptr_t)(a1 + 0xd08)) = valA4;

            if (tmpD1 != valA4)
            {
                int32_t objC4 = (*(int32_t*)(uintptr_t)(a1 + 0xd04));
                void* flagP1 = *(objC4 + (tmpD1 << 2));
                valA4 = *(objC4 + (valA4 << 2)) * (*(int32_t*)(uintptr_t)(a1 + 0xd10)) + (*(int32_t*)(uintptr_t)(a1 + 0xd00));
                int32_t ctxB5 = (*(int32_t*)(uintptr_t)(*(a1 + 0xd14) + valA4));
                *(objC4 + (tmpD1 << 2)) = *(objC4 + (ctxB5 << 2));
                (*(int32_t*)(uintptr_t)(*(a1 + 0xd04) + (ctxB5 << 2))) = flagP1;
                (*(int32_t*)(uintptr_t)(*(a1 + 0xd14) + valA4)) = tmpD1;
            }

            *(result_2 + (flagP4 << 2) + 0xc) = 0;
            *(result_2 + 0x30) &= ~(1 << (flagP4 & 0x1f));

            if (result_1)
                goto label_4c76ff;
        }

        result = result_2;
    }

    return result;
}
