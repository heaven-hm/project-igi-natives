#include "00450110-HumanAI_EventOffer.h"
/* 0x00450110 HumanAI_EventOffer full linked: callers=0 callees=11 */
double* sub_450110(void* a1, double** a2)

{
    double** esi = a2;
    void* edi = a1;
    int32_t ebx = esi[2];
    a1 = 1;
    double* result;
    result = *(edi + 0x3aba);
    void* ebp = *(edi + 0x14);

    if (!result)
    {
        result = sub_463190(ebp);

        if (result)
        {
            result = *(edi + 0x3c70);

            if (result && ebp != esi[6] && ebp != esi[5])
            {
                result = *esi;

                if (*(edi + 0x3d14))
                {
                    if (*(result + edi + 0x8e4))
                    {
                    label_45018b:
                        result = result * 3 + 0x1bc;
                        double** ecx_2 = edi + (result << 2);
                        a2 = ecx_2;

                        if (!ebx)
                        {
                        label_4502c4:
                            result = sub_450520(edi, esi);

                            if (result)
                                return sub_4af8f0(a2, result);
                        }
                        else
                        {
                            double* edx;

                            if (ebx & 2)
                            {
                                edx = edi + 0x20;
                                ebx &= 0xfffffffd;
                                long double st0_1;
                                st0_1 = sub_4b32b0(esi[4], edx);
                                long double x87_r6_1 = esi[3];
                                x87_r6_1 - st0_1;
                                result = (x87_r6_1 < st0_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_1, st0_1) ? 1 : 0) << 0xa
                                    | (x87_r6_1 == st0_1 ? 1 : 0) << 0xe;

                                if (*(&result + 1) & 1)
                                    a1 = 0;
                            }

                            if (ebx & 1)
                            {
                                result = a1;

                                if (result)
                                {
                                    ecx_2 = *(edi + 0x3abb);
                                    ebx &= 0xfffffffe;
                                    long double x87_r0;
                                    long double x87_r1;
                                    long double x87_r2;
                                    result = sub_4502f0(x87_r0, x87_r1, x87_r2, edi + 0x20, esi[4],
                                        ecx_2);

                                    if (!result)
                                        a1 = result;
                                }
                            }

                            if (ebx & 4)
                            {
                                result = a1;

                                if (result)
                                {
                                    result = esi[6];
                                    ebx &= 0xfffffffb;

                                    if (!result)
                                        a1 = 0;
                                    else
                                    {
                                        int16_t eax_3 = sub_460be0();
                                        edx = *(esi[6] + 0x1c);
                                        result = TaskType_IsDerivedFrom(edx, eax_3);

                                        if (!result)
                                            a1 = 0;
                                    }
                                }
                            }

                            if (ebx & 0xc)
                            {
                                result = a1;

                                if (result)
                                {
                                    ebx &= 0xfffffff3;
                                    result = sub_463170(esi[6]);

                                    if (result)
                                        a1 = 0;
                                }
                            }

                            if (ebx & 0x14)
                            {
                                result = a1;

                                if (result)
                                {
                                    ebx &= 0xffffffeb;
                                    result = sub_463170(esi[6]);

                                    if (!result)
                                        a1 = result;
                                }
                            }

                            if (ebx & 0x24)
                            {
                                result = a1;

                                if (result)
                                {
                                    ebx &= 0xffffffdb;
                                    result = sub_463130(ebp);

                                    if (esi[1] != result)
                                        a1 = 0;
                                }
                            }

                            if (!(ebx & 0x44))
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
                                    result = sub_463130(ebp);

                                    if (esi[1] != result)
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
