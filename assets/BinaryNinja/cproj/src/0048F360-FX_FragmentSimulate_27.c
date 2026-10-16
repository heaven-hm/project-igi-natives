#include "gi_platform.h"
#include "0048F360-FX_FragmentSimulate_27.h"
void* FX_FragmentSimulate_27(char* a1, int32_t a2)

{
    int32_t dstD = FX_DebrisSpawn_21();
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC = ~i;
    char v_200;
    int32_t srcS1;
    int32_t dstD2;
    dstD2 = memcpy(&v_200, dstD - objC, objC & 0xfffffffc);
    memcpy(dstD2, srcS1, objC & 3);
    void* result = Camera_SetFieldOfView_6(&v_200, " \t");
    void* result_2 = result;
    void* result_1 = result_2;

    if (result_2)
    {
        while (true)
        {
            void* result_3 = result_2;
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool cond_2_1 = 0 != *result_3;
                result_3 += 1;
                i_1 -= 1;

                if (!cond_2_1)
                    break;
            }

            char* dstD3 = a1;
            int32_t i_2 = 0xffffffff;

            while (i_2)
            {
                bool cond_3_1 = 0 != *dstD3;
                dstD3 = &dstD3[1];
                i_2 -= 1;

                if (!cond_3_1)
                    break;
            }

            if (~i_1 - 1 >= ~i_2 - 1)
            {
                char* dstD4 = a1;
                int32_t i_3 = 0xffffffff;
                int32_t i_4 = 0;
                char v_205_1 = 1;

                while (i_3)
                {
                    bool cond_4_1 = 0 != *dstD4;
                    dstD4 = &dstD4[1];
                    i_3 -= 1;

                    if (!cond_4_1)
                        break;
                }

                if (~i_3 - 1 <= 0)
                    goto label_48f43f;

                char* tmpD2 = a1;
                int32_t j;

                do
                {
                    if (!v_205_1)
                        goto label_48f45f;

                    char valA3 = (*(int32_t*)(uintptr_t)(result_2 - a1 + tmpD2));
                    char objC10 = *tmpD2;

                    if (valA3 >= 0x61 && valA3 <= 0x7a)
                        valA3 -= 0x20;

                    if (objC10 >= 0x61 && objC10 <= 0x7a)
                        objC10 -= 0x20;

                    if (valA3 != objC10)
                        v_205_1 = 0;

                    i_4 += 1;
                    char* dstD5 = a1;
                    j = 0xffffffff;
                    tmpD2 = &tmpD2[1];

                    while (j)
                    {
                        bool cond_6_1 = 0 != *dstD5;
                        dstD5 = &dstD5[1];
                        j -= 1;

                        if (!cond_6_1)
                            break;
                    }
                } while (i_4 < ~j - 1);

                if (v_205_1)
                {
                    result_2 = result_1;
    label_48f43f: ;
                    char* dstD6 = a1;
                    int32_t i_5 = 0xffffffff;

                    while (i_5)
                    {
                        bool cond_5_1 = 0 != *dstD6;
                        dstD6 = &dstD6[1];
                        i_5 -= 1;

                        if (!cond_5_1)
                            break;
                    }

                    a2(~i_5 - 1 + result_2);
                }
            }
    label_48f45f: ;
            result = Camera_SetFieldOfView_6(nullptr, " \t");
            result_1 = result;

            if (!result)
                break;

            result_2 = result_1;
        }
    }

    return result;
}
