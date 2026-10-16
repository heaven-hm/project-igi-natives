#include "Camera_UpdateTransform_34.h"
int32_t Camera_UpdateTransform_34(int32_t a1, char* a2)

{
    char* valA = nullptr;
    char* objC = nullptr;
    int32_t v_410 = 0;
    int32_t dstD = 1;
    int32_t v_40c = 0;

    if (!*a2)
    {
        *a1 = 0;
        return 1;
    }

    do
    {
        char i_1 = *(objC + a2);

        if (i_1 - 0x28 > 0x55)
            goto label_4b0083;

        int32_t ctxB2 = 0;
        ctxB2 = *(i_1 + &jump_table_4b01f0);
        int32_t v_414;
        char* v_404;
        int32_t v_400[0x100];

        switch (ctxB2)
        {
            case 0:
            {
                v_400[v_410] = valA;
                v_410 += 1;
            label_4b0083:
                dstD = 0;
                v_414 = 0;
            label_4b0089:
                valA[a1] = i_1;
                valA = &valA[1];
                objC = &objC[1];
                break;
            }
            case 1:
            {
                dstD = 0;
                v_414 = 0;

                if (!v_410)
                    return 0;

                v_410 -= 1;
                goto label_4b0089;
            }
            case 2:
            {
                if (dstD)
                    return 0;

            label_4b0180:
                dstD = 1;
            label_4b0185:
                valA[a1] = i_1;
                valA = &valA[1];
                objC = &objC[1];
                v_414 = 0;
                break;
            }
            case 3:
            {
                if (dstD)
                    return 0;

                if (!v_414)
                {
                    dstD = 1;

                    if (*(objC + a2 - 1) != 0x29)
                        goto label_4b0185;

                    void* tmpD7 = v_400[v_410];
                    void* flagP7 = valA - tmpD7;

                    if (flagP7 > 0)
                    {
                        char* ctxB6 = &valA[a1];
                        char* v_414_1 = tmpD7 + a1;
                        void* v_408_1 = flagP7;
                        bool cond_3_1;

                        do
                        {
                            *ctxB6 = *v_414_1;
                            ctxB6 = &ctxB6[1];
                            v_414_1 = &v_414_1[1];
                            cond_3_1 = v_408_1 != 1;
                            v_408_1 -= 1;
                        } while (cond_3_1);
                    }

                    char* valA3 = valA + flagP7;
                    v_414 = 0;
                    valA3[a1] = 0x2a;
                    valA = &valA3[1];
                    objC = &objC[1];
                }
                else
                {
                    char* i_3 = valA - v_404;

                    if (i_3 > 0)
                    {
                        char* flagP5 = &v_404[a1];
                        char* i_2 = i_3;
                        char* i;

                        do
                        {
                            *(i_3 + flagP5) = *flagP5;
                            flagP5 = &flagP5[1];
                            i = i_2;
                            i_2 -= 1;
                        } while (i != 1);
                    }

                    char* valA2 = valA + i_3;
                    dstD = 1;
                    v_414 = 0;
                    valA2[a1] = 0x2a;
                    valA = &valA2[1];
                    objC = &objC[1];
                }
                break;
            }
            case 4:
            {
                dstD = 0;
                valA[a1] = i_1;
                valA = &valA[1];
                objC = &objC[1];
                v_414 = 0;
                i_1 = *(objC + a2);
                goto label_4b0089;
            }
            case 5:
            {
                if (dstD)
                    return 0;

                goto label_4b0180;
            }
            case 6:
            {
                v_404 = valA;

                for (; i_1 != 0x5d; i_1 = *(objC + a2))
                {
                    if (!i_1)
                        return 0;

                    if (i_1 == 0x2f || i_1 == 0x5c)
                    {
                        valA[a1] = i_1;
                        valA = &valA[1];
                        objC = &objC[1];
                    }

                    valA = &valA[1];
                    i_1 = *(objC + a2);
                    objC = &objC[1];
                    valA[a1 - 1] = i_1;
                }

                valA = &valA[1];
                v_414 = 1;
                char tmpD4 = *(objC + a2);
                objC = &objC[1];
                valA[a1 - 1] = tmpD4;
                dstD = 0;
                break;
            }
            case 7:
            {
                dstD = 0;

                if (v_410 || v_40c)
                    return 0;

                v_414 = 0;
                v_40c = 1;
                goto label_4b0089;
            }
            case 8:
            {
                dstD = 0;

                if (!v_40c)
                    return 0;

                v_414 = 0;
                v_40c = 0;
                goto label_4b0089;
            }
            case 9:
            {
                goto label_4b0083;
            }
        }
    } while (*(objC + a2));

    valA[a1] = 0;
    return 1;
}
