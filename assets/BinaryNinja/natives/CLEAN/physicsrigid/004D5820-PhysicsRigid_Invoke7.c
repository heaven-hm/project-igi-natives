// IGI native provenance: PhysicsRigid_Invoke7 - 0x004D5820 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D5820-PhysicsRigid_Invoke7.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsRigid_Invoke7.h"

int32_t PhysicsRigid_Invoke7(float arg1, float arg2, float arg3)

{
    int32_t* ecx_9 = arg2;
    int32_t result = 0xffffffff;
    int32_t* dest_ptr = arg3;

    if (*ecx_9 == *dest_ptr)
    {
        void* esi_1 = ecx_9[0x1d];
        ecx_9[1] |= 0x40000;
        Render_SkinBones_7(nullptr, &arg3);
        int32_t edi_1 = dest_ptr[1];
        float var_28;
        long double x87_r6_13;
        long double x87_r7_7;
        long double x87_r7_28;

        if (edi_1 > 5)
        {
            Error_Show("BoneObj_GetOrientationCB: Illegal orientation type");

            while (true)
                /* nop */
        }
        else
            switch (edi_1)
            {
                case 0:
                {
                    float var_c_1;
                    float var_8_1;
                    int32_t esi_2;
                    long double x87_r6_1;
                    long double x87_r7_2;

                    if (!esi_1)
                    {
                        float eax_2 = arg3;
                        x87_r7_2 = -(*eax_2);
                        esi_2 = *(eax_2 + 0x10);
                        x87_r6_1 = -(*(eax_2 + 4));
                        var_c_1 = -(*(eax_2 + 8));
                        var_8_1 = *(eax_2 + 0xc);
                    }
                    else
                    {
                        x87_r7_2 = -(*(esi_1 + 0x4c));
                        x87_r6_1 = -(*(esi_1 + 0x50));
                        esi_2 = *(esi_1 + 0x5c);
                        var_8_1 = *(esi_1 + 0x58);
                        var_c_1 = -(*(esi_1 + 0x54));
                    }

                    float* eax_3 = arg1;
                    float var_18 = (dest_ptr[3] - dest_ptr[4]) * (var_c_1 - x87_r6_1);
                    float var_20_1 = (var_8_1 - x87_r7_2) * (dest_ptr[4] + dest_ptr[3]);
                    float var_1c = (dest_ptr[5] - dest_ptr[2]) * (var_c_1 + x87_r6_1);
                    float var_24 = (dest_ptr[2] + dest_ptr[3]) * (var_c_1 + x87_r7_2);
                    var_28 = (dest_ptr[5] - dest_ptr[4]) * (var_8_1 + x87_r6_1);
                    arg3 = (var_8_1 - x87_r6_1) * (dest_ptr[4] + dest_ptr[5]);
                    long double x87_r6_6 = arg3 + var_28 + var_24;
                    arg2 = ((dest_ptr[2] - dest_ptr[3]) * (var_c_1 - x87_r7_2) + x87_r6_6) * 0.5f;
                    *eax_3 = (dest_ptr[2] + dest_ptr[5]) * (var_8_1 + x87_r7_2) + arg2 - x87_r6_6;
                    x87_r7_7 = arg2 + var_20_1 - arg3;
                    eax_3[1] = x87_r7_7;
                    arg1 = arg2 + var_1c - var_28;
                    eax_3[2] = arg1;
                    x87_r6_13 = arg2 + var_18 - var_24;
                    eax_3[3] = x87_r6_13;
                    int32_t ecx_2 = dest_ptr[6] + esi_2 + 1;
                    eax_3[4] = ecx_2;

                    if (ecx_2 <= 0x3e8)
                        return 0;

                    long double x87_r5_32 = *eax_3;
                    eax_3[4] = 0;
                    long double x87_r5_38 = 1.0f / sqrtl(x87_r5_32 * x87_r5_32
                        + x87_r6_13 * x87_r6_13 + arg1 * arg1 + x87_r7_7 * x87_r7_7);
                    *eax_3 = *eax_3 * x87_r5_38;
                    eax_3[1] = x87_r7_7 * x87_r5_38;
                    eax_3[2] = arg1 * x87_r5_38;
                    eax_3[3] = x87_r6_13 * x87_r5_38;
                    return 0;
                    break;
                }
                case 1:
                {
                    __builtin_memcpy(arg1, &dest_ptr[2], 0x14);
                    return 0;
                    break;
                }
                case 2:
                {
                    if (!esi_1)
                    {
                        __builtin_memcpy(arg1, &dest_ptr[2], 0x14);
                        return 0;
                    }

                    long double x87_r7_11 = -(*(esi_1 + 0x4c));
                    long double x87_r6_16 = -(*(esi_1 + 0x50));
                    float var_c_2 = -(*(esi_1 + 0x54));
                    float eax_5 = *(esi_1 + 0x58);
                    int32_t esi_3 = *(esi_1 + 0x5c);
                    float var_20_2 = (dest_ptr[3] - dest_ptr[4]) * (var_c_2 - x87_r6_16);
                    float var_18_1 = (eax_5 - x87_r7_11) * (dest_ptr[4] + dest_ptr[3]);
                    float var_1c_1 = (dest_ptr[5] - dest_ptr[2]) * (var_c_2 + x87_r6_16);
                    var_28 = (dest_ptr[2] + dest_ptr[3]) * (var_c_2 + x87_r7_11);
                    float var_24_1 = (dest_ptr[5] - dest_ptr[4]) * (eax_5 + x87_r6_16);
                    arg3 = (eax_5 - x87_r6_16) * (dest_ptr[4] + dest_ptr[5]);
                    long double x87_r6_20 = arg3 + var_24_1 + var_28;
                    arg2 = ((dest_ptr[2] - dest_ptr[3]) * (var_c_2 - x87_r7_11) + x87_r6_20) * 0.5f;
                    float eax_6 = arg1;
                    *eax_6 = (dest_ptr[2] + dest_ptr[5]) * (eax_5 + x87_r7_11) + arg2 - x87_r6_20;
                    x87_r7_7 = arg2 + var_18_1 - arg3;
                    *(eax_6 + 4) = x87_r7_7;
                    arg1 = arg2 + var_1c_1 - var_24_1;
                    *(eax_6 + 8) = arg1;
                    x87_r6_13 = arg2 + var_20_2 - var_28;
                    *(eax_6 + 0xc) = x87_r6_13;
                    int32_t ecx_4 = dest_ptr[6] + esi_3 + 1;
                    *(eax_6 + 0x10) = ecx_4;

                    if (ecx_4 <= 0x3e8)
                        return 0;

                    long double x87_r5_73 = *eax_6;
                    *(eax_6 + 0x10) = 0;
                    long double x87_r4_47 = 1.0f / sqrtl(x87_r6_13 * x87_r6_13 + arg1 * arg1
                        + x87_r7_7 * x87_r7_7 + x87_r5_73 * x87_r5_73);
                    *eax_6 = *eax_6 * x87_r4_47;
                    *(eax_6 + 4) = x87_r7_7 * x87_r4_47;
                    *(eax_6 + 8) = arg1 * x87_r4_47;
                    *(eax_6 + 0xc) = x87_r6_13 * x87_r4_47;
                    return 0;
                    break;
                }
                case 3:
                {
                    result = 1;
                    __builtin_memcpy(arg1, &dest_ptr[2], 0x14);
                    break;
                }
                case 4:
                {
                    float var_14;
                    float var_10;
                    float var_c;
                    float var_8;
                    int32_t ecx_6;

                    if (!esi_1)
                    {
                        float eax_11 = arg3;
                        var_14 = -(*eax_11);
                        var_10 = -(*(eax_11 + 4));
                        var_c = -(*(eax_11 + 8));
                        var_8 = *(eax_11 + 0xc);
                        ecx_6 = *(eax_11 + 0x10);
                    }
                    else
                    {
                        __builtin_memcpy(&var_14, esi_1 + 0x4c, 0x14);
                        int32_t var_4;
                        ecx_6 = var_4;
                    }

                    float eax_12 = arg1;
                    long double x87_r7_26 = (var_c - var_10) * (dest_ptr[3] - dest_ptr[4]);
                    long double x87_r6_33 = (var_8 - var_14) * (dest_ptr[4] + dest_ptr[3]);
                    float var_18_2 = (dest_ptr[5] - dest_ptr[2]) * (var_c + var_10);
                    float var_24_2 = (var_c + var_14) * (dest_ptr[2] + dest_ptr[3]);
                    arg3 = (var_8 + var_10) * (dest_ptr[5] - dest_ptr[4]);
                    long double x87_r5_92 = (var_8 - var_10) * (dest_ptr[4] + dest_ptr[5]);
                    long double x87_r4_60 = x87_r5_92 + arg3 + var_24_2;
                    arg2 = ((var_c - var_14) * (dest_ptr[2] - dest_ptr[3]) + x87_r4_60) * 0.5f;
                    *eax_12 = (var_8 + var_14) * (dest_ptr[2] + dest_ptr[5]) + arg2 - x87_r4_60;
                    long double x87_r5_94 = x87_r6_33 + arg2 - x87_r5_92;
                    arg1 = x87_r5_94;
                    *(eax_12 + 4) = x87_r5_94;
                    long double x87_r6_39 = arg2 + var_18_2 - arg3;
                    arg3 = x87_r6_39;
                    *(eax_12 + 8) = x87_r6_39;
                    x87_r7_28 = x87_r7_26 + arg2 - var_24_2;
                    *(eax_12 + 0xc) = x87_r7_28;
                    int32_t ecx_7 = dest_ptr[6] + ecx_6 + 1;
                    *(eax_12 + 0x10) = ecx_7;

                    if (ecx_7 <= 0x3e8)
                        return 1;

                    long double x87_r6_40 = *eax_12;
                    long double x87_r4_64 = arg3 * arg3;
                    *(eax_12 + 0x10) = 0;
                    long double x87_r5_103 = 1.0f / sqrtl(x87_r7_28 * x87_r7_28 + x87_r4_64
                        + arg1 * arg1 + x87_r6_40 * x87_r6_40);
                    *eax_12 = *eax_12 * x87_r5_103;
                    *(eax_12 + 4) = arg1 * x87_r5_103;
                    *(eax_12 + 8) = arg3 * x87_r5_103;
                    *(eax_12 + 0xc) = x87_r7_28 * x87_r5_103;
                    return 1;
                    break;
                }
                case 5:
                {
                    float* eax_14 = arg3;
                    float* ecx_8 = arg1;
                    long double x87_r7_33 = (eax_14[2] - eax_14[1]) * (dest_ptr[3] - dest_ptr[4]);
                    long double x87_r6_48 = (eax_14[3] - *eax_14) * (dest_ptr[4] + dest_ptr[3]);
                    float var_18_3 = (dest_ptr[5] - dest_ptr[2]) * (eax_14[2] + eax_14[1]);
                    float var_20_3 = (eax_14[2] + *eax_14) * (dest_ptr[2] + dest_ptr[3]);
                    float var_24_3 = (dest_ptr[5] - dest_ptr[4]) * (eax_14[3] + eax_14[1]);
                    long double x87_r5_123 = (eax_14[3] - eax_14[1]) * (dest_ptr[4] + dest_ptr[5]);
                    long double x87_r4_79 = x87_r5_123 + var_24_3 + var_20_3;
                    arg2 = ((eax_14[2] - *eax_14) * (dest_ptr[2] - dest_ptr[3]) + x87_r4_79) * 0.5f;
                    *ecx_8 = (eax_14[3] + *eax_14) * (dest_ptr[2] + dest_ptr[5]) + arg2 - x87_r4_79;
                    long double x87_r5_125 = x87_r6_48 + arg2 - x87_r5_123;
                    arg1 = x87_r5_125;
                    ecx_8[1] = x87_r5_125;
                    long double x87_r6_54 = arg2 + var_18_3 - var_24_3;
                    var_28 = x87_r6_54;
                    ecx_8[2] = x87_r6_54;
                    x87_r7_28 = x87_r7_33 + arg2 - var_20_3;
                    ecx_8[3] = x87_r7_28;
                    int32_t eax_16 = eax_14[4] + dest_ptr[6] + 1;
                    ecx_8[4] = eax_16;

                    if (eax_16 <= 0x3e8)
                        return 1;

                    long double x87_r6_55 = *ecx_8;
                    long double x87_r4_83 = var_28 * var_28;
                    ecx_8[4] = 0;
                    long double x87_r5_134 = 1.0f / sqrtl(x87_r7_28 * x87_r7_28 + x87_r4_83
                        + arg1 * arg1 + x87_r6_55 * x87_r6_55);
                    *ecx_8 = *ecx_8 * x87_r5_134;
                    ecx_8[1] = arg1 * x87_r5_134;
                    ecx_8[2] = var_28 * x87_r5_134;
                    ecx_8[3] = x87_r7_28 * x87_r5_134;
                    return 1;
                    break;
                }
            }
    }

    return result;
}
