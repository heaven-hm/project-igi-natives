// IGI native provenance: HumanAI_EventOffer - 0x00450110 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00450110-HumanAI_EventOffer.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_EventOffer.h"
double* HumanAI_EventOffer(void* context, double** param_2)

{
    double** source_val = param_2;
    void* dest_val = context;
    int32_t context_val = source_val[2];
    context = 1;
    double* result;
    result = *(dest_val + 0x3aba);
    void* flagP = *(dest_val + 0x14);

    if (!result)
    {
        result = AI_TakeCover_19(flagP);

        if (result)
        {
            result = *(dest_val + 0x3c70);

            if (result && flagP != source_val[6] && flagP != source_val[5])
            {
                result = *source_val;

                if (*(dest_val + 0x3d14))
                {
                    if (*(result + dest_val + 0x8e4))
                    {
                    label_45018b:
                        result = result * 3 + 0x1bc;
                        double** entity_2 = dest_val + (result << 2);
                        param_2 = entity_2;

                        if (!context_val)
                        {
                        label_4502c4:
                            result = HumanAI_EventQueued(dest_val, source_val);

                            if (result)
                                return Camera_SetFieldOfView_33(param_2, result);
                        }
                        else
                        {
                            double* temp_val;

                            if (context_val & 2)
                            {
                                temp_val = dest_val + 0x20;
                                context_val &= 0xfffffffd;
                                long double fp0_1;
                                fp0_1 = Sys_DispatchOpcode_11(source_val[4], temp_val);
                                long double fpu_val_6_1 = source_val[3];
                                fpu_val_6_1 - fp0_1;
                                result = (fpu_val_6_1 < fp0_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_6_1, fp0_1) ? 1 : 0) << 0xa
                                    | (fpu_val_6_1 == fp0_1 ? 1 : 0) << 0xe;

                                if (*(&result + 1) & 1)
                                    context = 0;
                            }

                            if (context_val & 1)
                            {
                                result = context;

                                if (result)
                                {
                                    entity_2 = *(dest_val + 0x3abb);
                                    context_val &= 0xfffffffe;
                                    long double fpu0;
                                    long double fpu1;
                                    long double fpu2;
                                    result = AI_TestViewCones(fpu0, fpu1, fpu2, dest_val + 0x20, source_val[4],
                                        entity_2);

                                    if (!result)
                                        context = result;
                                }
                            }

                            if (context_val & 4)
                            {
                                result = context;

                                if (result)
                                {
                                    result = source_val[6];
                                    context_val &= 0xfffffffb;

                                    if (!result)
                                        context = 0;
                                    else
                                    {
                                        int16_t data_3 = AI_UpdateOrders_17();
                                        temp_val = *(source_val[6] + 0x1c);
                                        result = TaskType_IsDerivedFrom(temp_val, data_3);

                                        if (!result)
                                            context = 0;
                                    }
                                }
                            }

                            if (context_val & 0xc)
                            {
                                result = context;

                                if (result)
                                {
                                    context_val &= 0xfffffff3;
                                    result = AI_FireWeapon_19(source_val[6]);

                                    if (result)
                                        context = 0;
                                }
                            }

                            if (context_val & 0x14)
                            {
                                result = context;

                                if (result)
                                {
                                    context_val &= 0xffffffeb;
                                    result = AI_FireWeapon_19(source_val[6]);

                                    if (!result)
                                        context = result;
                                }
                            }

                            if (context_val & 0x24)
                            {
                                result = context;

                                if (result)
                                {
                                    context_val &= 0xffffffdb;
                                    result = AI_CombatTarget_19(flagP);

                                    if (source_val[1] != result)
                                        context = 0;
                                }
                            }

                            if (!(context_val & 0x44))
                            {
                            label_4502ba:
                                result = context;

                                if (result)
                                    goto label_4502c4;
                            }
                            else
                            {
                                result = context;

                                if (result)
                                {
                                    result = AI_CombatTarget_19(flagP);

                                    if (source_val[1] != result)
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
