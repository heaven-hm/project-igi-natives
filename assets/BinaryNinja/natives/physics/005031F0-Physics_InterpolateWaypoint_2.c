// Original IGI.EXE function: Physics_InterpolateWaypoint_2 (VA 0x005031F0; static CFG gate PASS, CFG score 1.000).
#include "Physics_InterpolateWaypoint_2.h"
int32_t Physics_InterpolateWaypoint_2(long double context , long double param_2 , long double param_3 , long double param_4 , long double param_5 , long double param_6 , long double param_7 , long double param_8 , float* param_9, int32_t* param_10, float param_11)

{
    int32_t* source_val = param_10;
    float data_val = *source_val;
    *source_val = data_val + 1;
    Profile_ValueSet(param_11, data_val);
    *param_9 = context;
    float data_1 = *source_val;
    *source_val = data_1 + 1;
    Profile_ValueSet(param_11, data_1);
    param_9[1] = param_2;
    float data_2 = *source_val;
    *source_val = data_2 + 1;
    Profile_ValueSet(param_11, data_2);
    param_9[2] = param_3;
    float data_3 = *source_val;
    *source_val = data_3 + 1;
    Profile_ValueSet(param_11, data_3);
    param_9[3] = param_4;
    float data_4 = *source_val;
    *source_val = data_4 + 1;
    Profile_ValueSet(param_11, data_4);
    param_9[4] = param_5;
    float data_5 = *source_val;
    *source_val = data_5 + 1;
    Profile_ValueSet(param_11, data_5);
    param_9[5] = param_6;
    float data_6 = *source_val;
    *source_val = data_6 + 1;
    Profile_ValueSet(param_11, data_6);
    param_9[6] = param_7;
    float data_7 = *source_val;
    *source_val = data_7 + 1;
    Profile_ValueSet(param_11, data_7);
    param_9[7] = param_8;
    float data_8 = *source_val;
    *source_val = data_8 + 1;
    Profile_ValueSet(param_11, data_8);
    param_9[8] = context;
    float data_9 = *source_val;
    *source_val = data_9 + 1;
    Profile_ValueSet(param_11, data_9);
    param_9[9] = param_2;
    int16_t idx = 0xa;
    int32_t data_10 = *source_val;
    *source_val = data_10 + 1;
    int32_t data_11 = Script_GetArg(param_11, data_10);
    int32_t i = 0;
    param_9[0xa] = data_11;

    if (data_11 > 0)
    {
        param_10 = &param_9[0xb];

        do
        {
            Profile_ValueSet(param_11, *source_val + 6);
🚫🚫🚫            float item_14_3 = /* float item_14_3 = unimplemented  {fstp dword [stack_ptr], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr], fp0} */
            Profile_ValueSet(param_11, *source_val + 5);
🚫🚫🚫            float item_18_4 = /* float item_18_4 = unimplemented  {fstp dword [stack_ptr], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr], fp0} */
            Profile_ValueSet(param_11, *source_val + 4);
🚫🚫🚫            float item_1c_4 = /* float item_1c_4 = unimplemented  {fstp dword [stack_ptr], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr], fp0} */
            Profile_ValueSet(param_11, *source_val + 3);
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_5333b8]} */
🚫🚫🚫            float item_20_4 = /* float item_20_4 = unimplemented  {fstp dword [stack_ptr], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr], fp0} */
            Profile_ValueSet(param_11, *source_val + 2);
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_5333b8]} */
🚫🚫🚫            float item_24_4 = /* float item_24_4 = unimplemented  {fstp dword [stack_ptr], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr], fp0} */
            Profile_ValueSet(param_11, *source_val + 1);
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_5333b8]} */
🚫🚫🚫            float item_28_4 = /* float item_28_4 = unimplemented  {fstp dword [stack_ptr], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr], fp0} */
            Profile_ValueSet(param_11, *source_val);
🚫🚫🚫            float item_2c_3 = /* float item_2c_3 = unimplemented  {fstp dword [stack_ptr], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr], fp0} */
            idx += 7;
            SoundSys_SetFrequency_16(param_10, item_2c_3, item_28_4, item_24_4, item_20_4, item_1c_4, item_18_4, item_14_3);
            *source_val += 7;
            i += 1;
            param_10 = &param_10[7];
        } while (i < param_9[0xa]);
    }

    float data_20 = *source_val;
    *source_val = data_20 + 1;
    Profile_ValueSet(param_11, data_20);
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5333b8]} */
🚫🚫🚫    param_9[0x43] = /* param_9[0x43] = unimplemented  {fstp dword [context_val+0x10c], fp0} */;
    /* unimplemented  {fstp dword [context_val+0x10c], fp0} */
    float data_21 = *source_val;
    *source_val = data_21 + 1;
    Profile_ValueSet(param_11, data_21);
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_53367c]} */
🚫🚫🚫    param_9[0x44] = /* param_9[0x44] = unimplemented  {fstp dword [context_val+0x110], fp0} */;
    /* unimplemented  {fstp dword [context_val+0x110], fp0} */
    float data_22 = *source_val;
    *source_val = data_22 + 1;
    int32_t result = Profile_ValueSet(param_11, data_22);
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_53367c]} */
🚫🚫🚫    param_9[0x45] = /* param_9[0x45] = unimplemented  {fstp dword [context_val+0x114], fp0} */;
    /* unimplemented  {fstp dword [context_val+0x114], fp0} */
    return result;
}
