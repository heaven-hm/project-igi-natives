#include "gi_platform.h"
#include "00508410-EditCamera_OnParsed.h"
char* EditCamera_OnParsed(void* a1, char* a2)

{
    int32_t valA1 = Sys_CheckHeap_22(a1 + 0xa9);
    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0x88));
    long double f0 = 0.00100000005.0f;
    fpu7 - f0;
    (*(int32_t*)(uintptr_t)(a1 + 0xcc)) = valA1;
    long double x87_r7_1;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_2 = (*(int32_t*)(uintptr_t)(a1 + 0x88));
        long double f1_1 = 3.0f;
        x87_r7_2 - f1_1;

        if (*(&((x87_r7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x88));
        else
            x87_r7_1 = 3.0f;
    }
    else
        x87_r7_1 = 0.00100000005.0f;

    int32_t objC = (*(int32_t*)(uintptr_t)(a1 + 0x90));
    (*(int32_t*)(uintptr_t)(a1 + 0x88)) = x87_r7_1;
    int32_t valA3 = Script_ExecuteLevelScript_4(objC);
    int32_t* i_1 = (*(int32_t*)(uintptr_t)(a1 + 0x8c));
    int32_t* i_2 = Script_ExecuteLevelScript_4(i_1);

    if (valA3 == a1)
        (*(int32_t*)(uintptr_t)(a1 + 0x90)) = 0xffffffff;

    __builtin_memset(a1 + 0x48, 0, 0x18);
    (*(int32_t*)(uintptr_t)(a1 + 0x60)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x64)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x68)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x6c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x70)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x74)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x78)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x7c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x80)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x84)) = 0;

    if (i_2)
    {
        int32_t valA4 = 0;
        valA4 = i_2[7];

        if (!*((valA4 << 2) + &g_a994e0))
            (*(int32_t*)(uintptr_t)(a1 + 0x8c)) = 0xffffffff;
        else
        {
            uint32_t valA6 = Script_ParseEnumReal32_8();
            int32_t tmpD1 = 0;
            tmpD1 = i_2[7];
            int32_t valA7 = *(((valA6 * 0x180 + tmpD1) << 2) + &g_a96ae0);
            i_1 = i_2;
            valA7(i_1, a2);
            int32_t tmpD2 = 0;
            tmpD2 = i_2[7];
            int32_t v_8_1 = 0;
            char v_58;
            ((int(*)())(uintptr_t)(*((tmpD2 << 2) + &g_a994e0)))(i_2, &v_58);
            memcpy(a1 + 0x48, &v_58, 0x18);
            char v_34;
            memcpy(a1 + 0x60, &v_34, 0x28);
        }
    }

    char* result = a2;

    if (!result || !*result)
    {
        int32_t* i = (*(int32_t*)(uintptr_t)(a1 + 8));

        if (*i && i)
        {
            int32_t objC5 = g_afa7e0;

            do
            {
                int32_t* tmpD3 = *i;
                void* valA11;

                if (!tmpD3)
                    valA11 = nullptr;
                else
                {
                    int32_t valA8 = *tmpD3;
                    int32_t valA9 = -(valA8);
                    valA11 = (valA9 - valA9) & tmpD3;
                }

                *((objC5 << 2) + &g_afa6e0) = valA11;
                g_afa7e0 = objC5 + 1;
                uint32_t valA13 = Script_ParseEnumReal32_8();
                int32_t tmpD4 = 0;
                tmpD4 = i[7];
                result = *(((valA13 * 0x180 + tmpD4) << 2) + &g_a96ae0);

                if (result)
                {
                    int32_t v_6c_3 = 0;
                    i_1 = i;
                    result = result(i_1, v_6c_3);
                }

                objC5 = g_afa7e0 - 1;
                g_afa7e0 = objC5;
                i = *((objC5 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
