// IGI native provenance: Smoke_LoadParameters - 0x00437DB0 - CFG score 95.8% (PASS; structural only); runtime behavior not verified.
// Evidence: 00437DB0-Smoke_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Smoke_LoadParameters.h"
int32_t Smoke_LoadParameters(long double context , void* param_2)

{
    double item_20;
    double item_10;
    int16_t idx;

    if (*(param_2 + 0x171) && *(param_2 + 0x170))
    {
        void* entity_1 = *(param_2 + 0xf4);
        item_20 = *(param_2 + 0x40) - *(param_2 + 0x58);
        double item_18_1 = *(param_2 + 0x48) - *(param_2 + 0x60);
        item_10 = *(param_2 + 0x50) - *(param_2 + 0x68);
        idx = 0;
        Script_ExecuteLevelScript_31(entity_1, &item_20);
    }

    *(param_2 + 0x171) = 1;
    memcpy(param_2 + 0x58, param_2 + 0x40, 0x18);
    int32_t* i = *(param_2 + 8);

    if (*i && i)
    {
        int32_t temp_1 = g_afa7e0;

        do
        {
            int32_t* source_1 = *i;
            void* data_4;

            if (!source_1)
                data_4 = nullptr;
            else
            {
                int32_t data_1 = *source_1;
                int32_t data_2 = -(data_1);
                data_4 = (data_2 - data_2) & source_1;
            }

            *((temp_1 << 2) + &g_afa6e0) = data_4;
            int32_t temp_2 = temp_1 + 1;
            int32_t data_5 = 0;
            g_afa7e0 = temp_2;
            data_5 = i[7];
            int32_t data_6 = *((data_5 << 2) + &g_a970e0);

            if (data_6)
            {
                data_6(i);
                temp_2 = g_afa7e0;
            }

            i = *((temp_2 << 2) + &g_afa6dc);
            temp_1 = temp_2 - 1;
            g_afa7e0 = temp_1;
        } while (i);
    }

    if (Script_FormatString_6(param_2 + 0xa4))
    {
        Script_SpawnNewTask_7(param_2 + 0xa4, param_2);
        *(param_2 + 0x98) = context;
        idx = 1;
    }

🚫🚫    /* unimplemented  {fld fp0, qword [context_val+0x98]} */
🚫🚫    /* unimplemented  {fadd dword [context_val+0xa0]} */
    void* dest_1 = *(param_2 + 0xf4);
🚫🚫    *(param_2 + 0xa0) =
⋯    long double f0 = 30.0f;
    /* unimplemented  {fcomp fp0, dword [&g_5333bc]} f- f0 */ - f0;
    bool c0 = /* bool c0 = unimplemented  {fcomp fp0, dword [&g_5333bc]} f< f0 */ < f0;
    bool c2 = FCMP_UO(/* bool c2 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333bc]}, f0) */, f0);
    bool c3 = /* bool c3 = unimplemented  {fcomp fp0, dword [&g_5333bc]} f== f0 */ == f0;
    /* unimplemented  {fcomp fp0, dword [&g_5333bc]} */
    int16_t result =
        (c0 ? 1 : 0) << 8 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe | (idx & 7) << 0xb;

    while (!(*(&result + 1) & 0x41))
    {
🚫🚫        Sys_AllocateMemory_14(0x57bde8);
        /* unimplemented  {call Sys_AllocateMemory_14} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_5334a8]} */
🚫🚫🚫        float item_30_1 = /* float item_30_1 = unimplemented  {fstp dword [stack_ptr+0x18], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x18], fp0} */
🚫🚫        Sys_AllocateMemory_14(0x57bde8);
        /* unimplemented  {call Sys_AllocateMemory_14} */
🚫🚫        /* unimplemented  {fmul fp0, dword [context_val+0x94]} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_5333b8]} */
🚫🚫🚫        int32_t item_2c_1 = /* int32_t item_2c_1 = unimplemented  {fstp dword [stack_ptr+0x20], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x20], fp0} */
🚫🚫        Sys_AllocateMemory_14(0x57bde8);
        /* unimplemented  {call Sys_AllocateMemory_14} */
🚫🚫        /* unimplemented  {fld fp0, dword [context_val+0x11c]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [context_val+0x120]} */
        int32_t data_7 = *(param_2 + 0x124);
        int32_t item_24_1 = data_7;
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
        item_10 = *(param_2 + 0x50);
        *(&item_10 + 4) = *(param_2 + 0x54);
🚫🚫        /* unimplemented  {fadd dword [context_val+0x120]} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x10]} */
🚫🚫🚫        long double fp0_1;
        bool c1_1;
        bool c2_1;
        fp0_1 = __fcos(/* fp0_1, c1_1, c2_1 = __fcos(unimplemented  {fcos }) */);
        /* unimplemented  {fcos } */
🚫🚫        /* unimplemented  {fmul fp0, dword [stack_ptr+0x14]} */
🚫🚫        /* unimplemented  {fadd qword [context_val+0x40]} */
🚫🚫🚫        item_20 = /* item_20 = unimplemented  {fstp qword [stack_ptr+0x20], fp0} */;
        /* unimplemented  {fstp qword [stack_ptr+0x20], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x10]} */
🚫🚫🚫        long double fp0_2;
        bool c1_2;
        bool c2_2;
        fp0_2 = __fsin(/* fp0_2, c1_2, c2_2 = __fsin(unimplemented  {fsin }) */);
        /* unimplemented  {fsin } */
🚫🚫        /* unimplemented  {fmul fp0, dword [stack_ptr+0x14]} */
🚫🚫        /* unimplemented  {fadd qword [context_val+0x48]} */
🚫🚫🚫        double item_18_2 = /* double item_18_2 = unimplemented  {fstp qword [stack_ptr+0x28], fp0} */;
        /* unimplemented  {fstp qword [stack_ptr+0x28], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [context_val+0x100]} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_5333bc]} */
🚫🚫        /* unimplemented  {fdiv fp0, dword [stack_ptr+0x1c]} */
🚫🚫🚫        item_2c_1 = /* item_2c_1.q = unimplemented  {fistp qword [stack_ptr+0x14], fp0} */;
        /* unimplemented  {fistp qword [stack_ptr+0x14], fp0} */
        int32_t entity_3 = item_2c_1;
🚫🚫        /* unimplemented  {fld fp0, dword [context_val+0xfc]} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_5333bc]} */
🚫🚫🚫        item_2c_1 = /* item_2c_1.q = unimplemented  {fistp qword [stack_ptr+0x18], fp0} */;
        /* unimplemented  {fistp qword [stack_ptr+0x18], fp0} */
        int32_t item_54_1 = entity_3;
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_533678]} */
🚫🚫🚫        float item_54_2 = /* float item_54_2 = unimplemented  {fstp dword [stack_ptr], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [context_val+0x88]} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_5337e8]} */
        int32_t item_5c_1 = entity_3;
🚫🚫🚫        float item_5c_2 = /* float item_5c_2 = unimplemented  {fstp dword [stack_ptr], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [context_val+0x8c]} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_5337e8]} */
        int32_t item_60_1 = entity_3;
🚫🚫🚫        float item_60_2 = /* float item_60_2 = unimplemented  {fstp dword [stack_ptr], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr], fp0} */
        Script_ParseEnumInt32_31(dest_1, &item_20, param_2 + 0x70, *(param_2 + 0x90), item_60_2, item_5c_2, data_7,
            item_54_2, 0, 0x3f800000, item_2c_1, entity_3);
🚫🚫        /* unimplemented  {fld fp0, dword [context_val+0xa0]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [&g_5333bc]} */
🚫🚫        *(param_2 + 0xa0) =
⋯        long double f1_1 = 30.0f;
        /* unimplemented  {fcomp fp0, dword [&g_5333bc]} f- f1_1 */ - f1_1;
        bool c0_1 = /* bool c0_1 =
            unimplemented  {fcomp fp0, dword [&g_5333bc]} f< f1_1 */ < f1_1;
        bool c2_3 = FCMP_UO(/* bool c2_3 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333bc]}, f1_1) */, f1_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp fp0, dword [&g_5333bc]} f== f1_1 */ == f1_1;
        /* unimplemented  {fcomp fp0, dword [&g_5333bc]} */
        int16_t top_18;
        result = (c0_1 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (top_18 & 7) << 0xb;
    }

    return result;
}
