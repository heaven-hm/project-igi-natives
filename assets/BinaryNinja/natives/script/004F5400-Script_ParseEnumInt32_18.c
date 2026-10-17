// Original IGI.EXE function: Script_ParseEnumInt32_18 (VA 0x004F5400; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumInt32_18.h"
int32_t* Script_ParseEnumInt32_18(void* a1)

{
    char i = 0;
    int32_t* result_1 = nullptr;
    long double fpu7 = *(a1 + 0x64);
    int32_t srcS = 0xffffffff;
    char v_33c = 0;
    float v_344 = 0f;
    float v_340 = fpu7 / g_a76c54;
    int32_t* result = QTask_DeleteTask_2(a1, Physics_CalculateSplineLength_7());

    if (result)
    {
        void v_320;
        Script_EvaluateCondition_17(&v_320, &result_1, QTask_DeleteTask_2(a1, Physics_CalculateSplineLength_7()), &v_344,
            *(a1 + 0x6c));
        result = result_1;

        if (result)
        {
            Script_SpawnNewTask_18(&v_320, result);
            int32_t* result_3 = result_1;
            int32_t objC1 = 0;

            if (result_3 > 0)
            {
                void v_31c;
                float* flagP1 = &v_31c;

                while (!i)
                {
                    long double x87_r7_2 = *flagP1;
                    long double f1_1 = v_340;
                    x87_r7_2 - f1_1;

                    if (!(*(&((x87_r7_2 < f1_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
                            | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        i = 1;
                    else
                        srcS = objC1;

                    objC1 += 1;
                    flagP1 = &flagP1[2];

                    if (objC1 >= result_3)
                        break;
                }
            }

            long double x87_r7_3 = v_340;
            long double f0_1 = v_344;
            x87_r7_3 - f0_1;

            if (!(*(&((x87_r7_3 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_3, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                *(a1 + 0x61) = 1;
                long double x87_r7_4 = g_a76c54;
                *(a1 + 0x20c) = 0xffffffff;
                *(a1 + 0x64) = x87_r7_4 * v_344;
            }

            if (*(a1 + 0x20c) != srcS)
            {
                *(a1 + 0x20c) = srcS;
                v_33c = 1;
            }

            void* v_360_3 = &v_320;
            int32_t* v_338 = Script_FormatString_17(v_360_3, result_3, srcS - 1);
            int32_t* result_2 = result_1;
            int32_t* valA9 = Script_FormatString_17(&v_320, result_2, srcS);
            int32_t* valA11 = Script_FormatString_17(&v_320, result_1, srcS + 1);
            int32_t v_32c_1 = Script_FormatString_17(&v_320, result_1, srcS + 2);
            int32_t* valA14 = valA9;

            if (!*(*v_338 + 0x94))
                v_338 = valA14;

            if (*(*valA14 + 0x94))
                valA14 = valA11;
            else
                int32_t* v_330_2 = valA14;

            if (!*(*valA14 + 0x94))
                int32_t* v_32c_2 = valA14;

            int32_t __saved_ebp_4 = v_33c;
            v_360_3 = v_344;
            result_2 = v_340;
            return CutScene_ApplyFrame(a1, &v_338, result_2);
        }
    }

    return result;
}
