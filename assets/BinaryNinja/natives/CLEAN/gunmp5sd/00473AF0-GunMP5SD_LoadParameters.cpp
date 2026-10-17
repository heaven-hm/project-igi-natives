// IGI native provenance: GunMP5SD_LoadParameters - 0x00473AF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00473AF0-GunMP5SD_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GunMP5SD_LoadParameters.h"
float GunMP5SD_LoadParameters(float* context, float param_2) {
    void* context_val = *(param_2 + 0x2c);
    float data_val = *(context_val + 0x4ec);
    float* temp_val = *(context[0x4a] + 0x6e4);
    (*(((AI_AlertAllies_17() * 0x180 + Weapon_ComputeAccuracy_5()) << 2) + &g_a96ae0))(context, param_2);

    if (!*(param_2 + 0x14))
    {
        long double fp0_3;
        bool c1_3;
        bool c2_8;
        fp0_3 = __fptan(0.78539818525314331);
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫        *(data_val + 0x1e4) =
        /* unimplemented  {fstp dword [data_val+0x1e4], fp0} */
🚫🚫        /* unimplemented  {fld fp0, qword [&g_5339c0]} */
🚫🚫🚫🚫        long double fp0_4;
        bool c1_4;
        bool c2_9;
        fp0_4 = __fptan(/* fp0_4, c1_4, c2_9 = __fptan(unimplemented  {fptan }) */);
        /* unimplemented  {fptan } */

        if (!c2_9)
            /* unimplemented  {fptan } */

🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫        *(data_val + 0x1e8) =
        /* unimplemented  {fstp dword [data_val+0x1e8], fp0} */
        context[0x6c] = 0;
        return data_val;
    }

    long double fpu7 = *(data_val + 0x1e4);
    long double fpu_val_6_1 = *(context_val + 0x1cc);
    long double f0 = 0.0f;
    fpu_val_6_1 - f0;
    param_2 = *(data_val + 0x1e8);
    int16_t data_9 = (fpu_val_6_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f0) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == f0 ? 1 : 0) << 0xe | 0x3800;

    if (!context[0x6c])
    {
        if (!(*(&data_9 + 1) & 0x40))
        {
            long double fpu_val_6_6 = *(context_val + 0x12c);
            long double f1_1 = 0.0f;
            fpu_val_6_6 - f1_1;

            if (*(&((fpu_val_6_6 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_6, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_6 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
                context[0x6c] = 1;
        }

        int16_t top_2 = 0xfffe;
        long double fp0_1;
        bool c1_1;
        bool c2_4;
        fp0_1 = __fptan(0.78539818525314331);

        if (!c2_4)
            top_2 = 0xfffd;

🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫        context = /* context = unimplemented  {fstp dword [stack_ptr+0x14], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x14], fp0} */
        int16_t top_1 = top_2 + 2;
🚫🚫🚫🚫🚫        long double f4_1 = context;
        /* unimplemented  {fcom fp0, dword [stack_ptr+0x14]} f- f4_1 */ - f4_1;
        bool c0_4 = /* bool c0_4 =
            unimplemented  {fcom fp0, dword [stack_ptr+0x14]} f< f4_1 */ < f4_1;
        bool c2_5 = FCMP_UO(/* bool c2_5 =
            is_unordered.t(unimplemented  {fcom fp0, dword [stack_ptr+0x14]}, f4_1) */, f4_1);
        bool c3_4 = /* bool c3_4 =
            unimplemented  {fcom fp0, dword [stack_ptr+0x14]} f== f4_1 */ == f4_1;

        if (*(&((c0_4 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
            | (top_1 & 7) << 0xb) + 1) & 1)
        {
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_533520]} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x18]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_533520]} */
🚫🚫🚫            param_2 = /* param_2 = unimplemented  {fstp dword [stack_ptr+0x18], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr+0x18], fp0} */
        }

🚫🚫🚫🚫🚫        long double f5_1 = context;
        /* unimplemented  {fcom fp0, dword [stack_ptr+0x14]} f- f5_1 */ - f5_1;
        bool c0_5 = /* bool c0_5 =
            unimplemented  {fcom fp0, dword [stack_ptr+0x14]} f< f5_1 */ < f5_1;
        bool c2_6 = FCMP_UO(/* bool c2_6 =
            is_unordered.t(unimplemented  {fcom fp0, dword [stack_ptr+0x14]}, f5_1) */, f5_1);
        bool c3_5 = /* bool c3_5 =
            unimplemented  {fcom fp0, dword [stack_ptr+0x14]} f== f5_1 */ == f5_1;

        if (!(*(&((c0_5 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
            | (top_1 & 7) << 0xb) + 1) & 0x41))
        {
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x14]} */
🚫🚫            /* unimplemented  {fld fp0, qword [&g_5339c0]} */
🚫🚫🚫🚫            long double fp0_2;
            bool c1_2;
            bool c2_7;
            fp0_2 = __fptan(/* fp0_2, c1_2, c2_7 = __fptan(unimplemented  {fptan }) */);
            /* unimplemented  {fptan } */

            if (!c2_7)
                /* unimplemented  {fptan } */

🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫            param_2 = /* param_2 = unimplemented  {fstp dword [stack_ptr+0x18], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr+0x18], fp0} */
        }
    }
    else
    {
        if (!(*(&data_9 + 1) & 0x40))
        {
            long double fpu_val_6_2 = *(context_val + 0x12c);
            long double f3_1 = 0.0f;
            fpu_val_6_2 - f3_1;

            if (*(&((fpu_val_6_2 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_2 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
                context[0x6c] = 0;
        }

        long double f2_1 = *temp_val;
        fpu7 - f2_1;

        if (!(*(&((fpu7 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f2_1) ? 1 : 0) << 0xa
            | (fpu7 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        {
            param_2 = /* param_2 = unimplemented  {fstp dword [stack_ptr+0x18], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr+0x18], fp0} */
        }
    }

🚫🚫🚫    *(data_val + 0x1e4) =
    /* unimplemented  {fstp dword [entity_val+0x1e4], fp0} */
    *(data_val + 0x1e8) = param_2;
    return param_2;
}
