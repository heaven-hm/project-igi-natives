// Original IGI.EXE function: AnimScaleTask_Setup (VA 0x0052AF10; static CFG gate PASS, CFG score 1.000).
#include "AnimScaleTask_Setup.h"
char AnimScaleTask_Setup(long double context , int32_t param_2)

{
    int32_t context_val = 0;
    int16_t idx;

    if (Script_FormatString_6(param_2 + 0x200f8))
    {
        Script_SpawnNewTask_7(param_2 + 0x200f8, param_2);
        idx = 1;
        *(param_2 + 0x200f4) = context;
    }

    int16_t data_3;
    data_3 = *(param_2 + 0x200f4);

    if (data_3)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [source_val+0x20160]} */
🚫🚫        /* unimplemented  {fadd dword [source_val+0x20164]} */
🚫🚫        *(param_2 + 0x20164) =
⋯        long double f0_1 = 0.100000001f;
        /* unimplemented  {fcomp fp0, dword [&g_5333c8]} f- f0_1 */ - f0_1;
        bool c0_1 = /* bool c0_1 =
            unimplemented  {fcomp fp0, dword [&g_5333c8]} f< f0_1 */ < f0_1;
        bool c2_1 = FCMP_UO(/* bool c2_1 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333c8]}, f0_1) */, f0_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp fp0, dword [&g_5333c8]} f== f0_1 */ == f0_1;
        /* unimplemented  {fcomp fp0, dword [&g_5333c8]} */

        if (!(*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (idx & 7) << 0xb) + 1) & 1))
        {
            bool c0_2;
            bool c2_2;
            bool c3_2;

            do
            {
🚫🚫                /* unimplemented  {fld fp0, dword [source_val+0x20164]} */
🚫🚫                /* unimplemented  {fsub fp0, dword [&g_5333c8]} */
                context_val += 1;
🚫🚫                *(param_2 + 0x20164) = /* *(param_2 + 0x20164) =
                    unimplemented  {fst dword [source_val+0x20164], fp0} */;
⋯                long double f1_1 = 0.100000001f;
                /* unimplemented  {fcomp fp0, dword [&g_5333c8]} f- f1_1 */ - f1_1;
                c0_2 = /* c0_2 =
                    unimplemented  {fcomp fp0, dword [&g_5333c8]} f< f1_1 */ < f1_1;
                c2_2 = FCMP_UO(/* c2_2 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333c8]}, f1_1) */,
                    f1_1);
                c3_2 = /* c3_2 =
                    unimplemented  {fcomp fp0, dword [&g_5333c8]} f== f1_1 */ == f1_1;
                /* unimplemented  {fcomp fp0, dword [&g_5333c8]} */
            } while (!(*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                | (idx & 7) << 0xb) + 1) & 1));
        }

        data_3 = Script_FormatString_14(param_2, *(param_2 + 0x20154) + context_val);
    }

    return data_3;
}
