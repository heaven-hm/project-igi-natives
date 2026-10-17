// Original IGI.EXE function: Menu_LeaveMenus_22 (VA 0x0042DB00; static CFG gate PASS, CFG score 1.000).
#include "Menu_LeaveMenus_22.h"
char* Menu_LeaveMenus_22(int32_t context, int32_t* param_2)

{
    int32_t* source_val = param_2;
    void* flagP = *source_val;
    float dest_val = source_val[1];
    (*(((SoundSys_Update3DPosition_18() * 0x180 + Script_ExecuteLevelScript_16()) << 2) + &g_a96ae0))(context, source_val);
    int32_t data_5 = source_val[2];
    source_val[2] = data_5 + 1;
    int32_t data_6 = Script_GetArg(dest_val, data_5);
    *(flagP + 0x118) = data_6;
    param_2 = nullptr;

    if (data_6 > 0)
    {
        char* context_3 = flagP + 0x11d;
        bool flag_2_1;

        do
        {
            int32_t data_7 = source_val[2];
            source_val[2] = data_7 + 1;
            context_3[0xffffffff] = Script_GetArg(dest_val, data_7);
            int32_t data_9 = source_val[2];
            source_val[2] = data_9 + 1;
            *context_3 = Script_GetArg(dest_val, data_9);
            float data_11 = source_val[2];
            source_val[2] = data_11 + 1;
            Profile_ValueSet(dest_val, data_11);
🚫🚫🚫            *(context_3 + 3) =
            /* unimplemented  {fstp dword [context_val+0x3], fp0} */
            int32_t data_12 = source_val[2];
            source_val[2] = data_12 + 1;
            *(context_3 + 7) = Script_GetArg(dest_val, data_12);
            float data_14 = source_val[2];
            source_val[2] = data_14 + 1;
            Profile_ValueSet(dest_val, data_14);
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_5333b8]} */
🚫🚫🚫            *(context_3 + 0xb) =
            /* unimplemented  {fstp dword [context_val+0xb], fp0} */
            float data_15 = source_val[2];
            source_val[2] = data_15 + 1;
            Profile_ValueSet(dest_val, data_15);
🚫🚫🚫            *(context_3 + 0xf) =
            /* unimplemented  {fstp dword [context_val+0xf], fp0} */
            int16_t idx = idx + 3;
            context_3 = &context_3[0x14];
            flag_2_1 = param_2 + 1 < *(flagP + 0x118);
            param_2 += 1;
        } while (flag_2_1);
    }

    float data_18 = source_val[2];
    source_val[2] = data_18 + 1;
    Profile_ValueSet(dest_val, data_18);
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5333b8]} */
🚫🚫🚫    *(flagP + 0x25c) =
    /* unimplemented  {fstp dword [flagP+0x25c], fp0} */
    int32_t data_19 = source_val[2];
    source_val[2] = data_19 + 1;
    *(flagP + 0x260) = Script_GetArg(dest_val, data_19);
    int32_t data_21 = source_val[2];
    source_val[2] = data_21 + 1;
    *(flagP + 0x261) = Script_GetArg(dest_val, data_21);
    int32_t data_23 = source_val[2];
    source_val[2] = data_23 + 1;
    Sys_ResolveSymbol_23(dest_val, data_23, flagP + 0x262, 0x20);
    int32_t data_24 = source_val[2];
    source_val[2] = data_24 + 1;
    int32_t data_25 = Script_GetArg(dest_val, data_24);
    int32_t i = 0;
    *(flagP + 0x2ac) = data_25;

    if (data_25 > 0)
    {
        param_2 = flagP + 0x284;

        do
        {
            int32_t data_27 = source_val[2];
            source_val[2] = data_27 + 1;
            i += 1;
            *param_2 = Script_GetArg(dest_val, data_27);
            param_2 = &param_2[1];
        } while (i < *(flagP + 0x2ac));
    }

    int32_t data_30 = source_val[2];
    source_val[2] = data_30 + 1;
    return Sys_ResolveSymbol_23(dest_val, data_30, flagP + 0x2b0, 0x10);
}
