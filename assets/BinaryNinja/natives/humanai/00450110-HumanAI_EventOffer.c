#include "HumanAI_EventOffer.h"
double* HumanAI_EventOffer(void* a1, double** a2)

{
    double** srcS = a2;
    void* dstD = a1;
    int32_t ctxB = srcS[2];
    a1 = 1;
    double* result;
    result = *(dstD + 0x3aba);
    void* flagP = *(dstD + 0x14);

    if (!result)
    {
        result = AI_TakeCover_19(flagP);

        if (result)
        {
            result = *(dstD + 0x3c70);

            if (result && flagP != srcS[6] && flagP != srcS[5])
            {
                result = *srcS;

                if (*(dstD + 0x3d14))
                {
                    if (*(result + dstD + 0x8e4))
                    {
                    label_45018b:
                        result = result * 3 + 0x1bc;
                        double** objC2 = dstD + (result << 2);
                        a2 = objC2;

                        if (!ctxB)
                        {
                        label_4502c4:
                            result = HumanAI_EventQueued(dstD, srcS);

                            if (result)
                                return Camera_SetFieldOfView_33(a2, result);
                        }
                        else
                        {
                            double* tmpD;

                            if (ctxB & 2)
                            {
                                tmpD = dstD + 0x20;
                                ctxB &= 0xfffffffd;
                                long double fp0_1;
                                fp0_1 = Sys_DispatchOpcode_11(srcS[4], tmpD);
                                long double x87_r6_1 = srcS[3];
                                x87_r6_1 - fp0_1;
                                result = (x87_r6_1 < fp0_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_1, fp0_1) ? 1 : 0) << 0xa
                                    | (x87_r6_1 == fp0_1 ? 1 : 0) << 0xe;

                                if (*(&result + 1) & 1)
                                    a1 = 0;
                            }

                            if (ctxB & 1)
                            {
                                result = a1;

                                if (result)
                                {
                                    objC2 = *(dstD + 0x3abb);
                                    ctxB &= 0xfffffffe;
                                    long double fpu0;
                                    long double fpu1;
                                    long double fpu2;
                                    result = AI_TestViewCones(fpu0, fpu1, fpu2, dstD + 0x20, srcS[4],
                                        objC2);

                                    if (!result)
                                        a1 = result;
                                }
                            }

                            if (ctxB & 4)
                            {
                                result = a1;

                                if (result)
                                {
                                    result = srcS[6];
                                    ctxB &= 0xfffffffb;

                                    if (!result)
                                        a1 = 0;
                                    else
                                    {
                                        int16_t valA3 = AI_UpdateOrders_17();
                                        tmpD = *(srcS[6] + 0x1c);
                                        result = TaskType_IsDerivedFrom(tmpD, valA3);

                                        if (!result)
                                            a1 = 0;
                                    }
                                }
                            }

                            if (ctxB & 0xc)
                            {
                                result = a1;

                                if (result)
                                {
                                    ctxB &= 0xfffffff3;
                                    result = AI_FireWeapon_19(srcS[6]);

                                    if (result)
                                        a1 = 0;
                                }
                            }

                            if (ctxB & 0x14)
                            {
                                result = a1;

                                if (result)
                                {
                                    ctxB &= 0xffffffeb;
                                    result = AI_FireWeapon_19(srcS[6]);

                                    if (!result)
                                        a1 = result;
                                }
                            }

                            if (ctxB & 0x24)
                            {
                                result = a1;

                                if (result)
                                {
                                    ctxB &= 0xffffffdb;
                                    result = AI_CombatTarget_19(flagP);

                                    if (srcS[1] != result)
                                        a1 = 0;
                                }
                            }

                            if (!(ctxB & 0x44))
                            {
                            label_4502ba:
                                result = a1;

                                if (result)
                                    goto label_4502c4;
                            }
                            else
                            {
                                result = a1;

                                if (result)
                                {
                                    result = AI_CombatTarget_19(flagP);

                                    if (srcS[1] != result)
                                        goto label_4502ba;
                                }
                            }
                        }
                    }
                }
                else if (!result)
                    goto label_45018b;
            }
        }
    }

    return result;
}
