#include "gi_platform.h"
#include "0052C290-DiscardTerrain_Setup.h"
int32_t DiscardTerrain_Setup(int32_t a1, char* a2)

{
    void* valA = (*(int32_t*)(uintptr_t)(a1 + 0x68));
    int32_t flagP = 0x40000000 >> ((*(int32_t*)(uintptr_t)(a1 + 0x150)) & 0x1f);
    memcpy(a1 + 0x138, a1 + 0xf0, 0x18);
    (*(int32_t*)(uintptr_t)(a1 + 0x138)) = (*(int32_t*)(uintptr_t)(valA + 0xde0)) + (*(int32_t*)(uintptr_t)(a1 + 0x138));
    int32_t flagP1 = flagP << 1;
    int32_t objC2 = -(flagP1);
    (*(int32_t*)(uintptr_t)(a1 + 0x140)) = (*(int32_t*)(uintptr_t)(valA + 0xde4)) + (*(int32_t*)(uintptr_t)(a1 + 0x140));
    (*(int32_t*)(uintptr_t)(a1 + 0x148)) = (*(int32_t*)(uintptr_t)(valA + 0xde8)) + (*(int32_t*)(uintptr_t)(a1 + 0x148));
    long double x87_r7_7 = (*(int32_t*)(uintptr_t)(a1 + 0x138)) & objC2;
    (*(int32_t*)(uintptr_t)(a1 + 0x108)) = x87_r7_7;
    long double x87_r6_1 = (*(int32_t*)(uintptr_t)(a1 + 0x140)) & objC2;
    (*(int32_t*)(uintptr_t)(a1 + 0x110)) = x87_r6_1;
    long double x87_r6_3 = (*(int32_t*)(uintptr_t)(a1 + 0x148)) & objC2;
    (*(int32_t*)(uintptr_t)(a1 + 0x118)) = x87_r6_3;
    long double x87_r6_4 = flagP1;
    memcpy(a1 + 0x138, a1 + 0x108, 0x18);
    (*(int32_t*)(uintptr_t)(a1 + 0x120)) = x87_r7_7 + x87_r6_4;
    (*(int32_t*)(uintptr_t)(a1 + 0x128)) = x87_r6_1 + x87_r6_4;
    (*(int32_t*)(uintptr_t)(a1 + 0x130)) = x87_r6_3 + x87_r6_4;
    long double x87_r7_9 = x87_r6_4 * 0.5;
    long double x87_r6_12 = x87_r7_9 + (*(int32_t*)(uintptr_t)(a1 + 0x138));
    (*(int32_t*)(uintptr_t)(a1 + 0x138)) = x87_r6_12;
    long double x87_r6_14 = x87_r7_9 + (*(int32_t*)(uintptr_t)(a1 + 0x140));
    (*(int32_t*)(uintptr_t)(a1 + 0x140)) = x87_r6_14;
    long double x87_r7_10 = x87_r7_9 + (*(int32_t*)(uintptr_t)(a1 + 0x148));
    (*(int32_t*)(uintptr_t)(a1 + 0x148)) = x87_r7_10;
    (*(int32_t*)(uintptr_t)(a1 + 0x138)) = x87_r6_12 - (*(int32_t*)(uintptr_t)(valA + 0xde0));
    (*(int32_t*)(uintptr_t)(a1 + 0x140)) = x87_r6_14 - (*(int32_t*)(uintptr_t)(valA + 0xde4));
    (*(int32_t*)(uintptr_t)(a1 + 0x148)) = x87_r7_10 - (*(int32_t*)(uintptr_t)(valA + 0xde8));
    (*(int32_t*)(uintptr_t)(a1 + 0x108)) = (*(int32_t*)(uintptr_t)(a1 + 0x108)) - (*(int32_t*)(uintptr_t)(valA + 0xde0));
    (*(int32_t*)(uintptr_t)(a1 + 0x110)) = (*(int32_t*)(uintptr_t)(a1 + 0x110)) - (*(int32_t*)(uintptr_t)(valA + 0xde4));
    (*(int32_t*)(uintptr_t)(a1 + 0x118)) = (*(int32_t*)(uintptr_t)(a1 + 0x118)) - (*(int32_t*)(uintptr_t)(valA + 0xde8));
    (*(int32_t*)(uintptr_t)(a1 + 0x120)) = (*(int32_t*)(uintptr_t)(a1 + 0x120)) - (*(int32_t*)(uintptr_t)(valA + 0xde0));
    (*(int32_t*)(uintptr_t)(a1 + 0x128)) = (*(int32_t*)(uintptr_t)(a1 + 0x128)) - (*(int32_t*)(uintptr_t)(valA + 0xde4));
    (*(int32_t*)(uintptr_t)(a1 + 0x130)) = (*(int32_t*)(uintptr_t)(a1 + 0x130)) - (*(int32_t*)(uintptr_t)(valA + 0xde8));
    long double x87_r7_25 = flagP1 * 0.000116257448.0f;
    (*(int32_t*)(uintptr_t)(a1 + 0x98)) = x87_r7_25;
    (*(int32_t*)(uintptr_t)(a1 + 0x9c)) = x87_r7_25;
    (*(int32_t*)(uintptr_t)(a1 + 0xa0)) = x87_r7_25;
    int32_t result = DynObj_UpdateDynTree_8(valA, a1, a1 + 0x138, a1 + 0x108, a1 + 0x120);

    if (!a2 || !*a2)
    {
        int32_t* i_1 = (*(int32_t*)(uintptr_t)(a1 + 8));

        if (*i_1)
        {
            int32_t* i = i_1;

            if (i)
            {
                int32_t objC4 = g_afa7e0;

                do
                {
                    int32_t* tmpD1 = *i;
                    void* valA4;

                    if (!tmpD1)
                        valA4 = nullptr;
                    else
                    {
                        int32_t valA1 = *tmpD1;
                        int32_t valA2 = -(valA1);
                        valA4 = (valA2 - valA2) & tmpD1;
                    }

                    *((objC4 << 2) + &g_afa6e0) = valA4;
                    g_afa7e0 = objC4 + 1;
                    uint32_t valA6 = Script_ParseEnumReal32_8();
                    int32_t objC6 = 0;
                    objC6 = i[7];
                    result = *(((valA6 * 0x180 + objC6) << 2) + &g_a96ae0);

                    if (result)
                        result = result(i, a2);

                    objC4 = g_afa7e0 - 1;
                    g_afa7e0 = objC4;
                    i = *((objC4 << 2) + &g_afa6e0);
                } while (i);
            }
        }
    }

    return result;
}
