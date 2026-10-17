// IGI native provenance: Define_Graph - 0x004EAD20 - CFG score 98.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EAD20-Define_Graph.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Define_Graph.h"
int32_t Define_Graph(long double context , long double param_2 , long double param_3 , long double param_4 , long double param_5 , long double param_6 , int32_t param_7, void* param_8, float param_9)

// Sig: void Define_Graph(...)
// Note: Defines a GRAPH (sound/graph transition graph) entry inside definition
// blocks - OpenIGI maps it to SoundDefinitionKind.Graph. Parser-context only.
{
    void item_188;
    void* flags = &item_188;
    char item_1a4 = 1;
    SoundSys_SetFrequency_14(&item_188);
    void item_48;
    Sys_ResolveSymbol_23(param_9, 0, &item_48, 0x20);
    void item_28;
    Sys_ResolveSymbol_23(param_9, 1, &item_28, 0x20);
    Profile_ValueSet(param_9, 2.80259693e-45.0f);
    double item_e8 = context;
    Profile_ValueSet(param_9, 4.20389539e-45.0f);
    double item_e0 = param_2;
    Profile_ValueSet(param_9, 5.60519386e-45.0f);
    double item_d8 = param_3;
    Profile_ValueSet(param_9, 7.00649232e-45.0f);
    float item_d0 = param_4;
    Profile_ValueSet(param_9, 8.40779079e-45.0f);
    float item_c0 = param_5;
    Profile_ValueSet(param_9, 9.80908925e-45.0f);
    float item_bc = param_6;
    int16_t idx = 6;
    int32_t item_b0 = Script_GetArg(param_9, 8);
    int32_t item_ac = Script_GetArg(param_9, 9);
    int32_t item_a4 = Script_GetArg(param_9, 0xa);
    float dest_val = 1.68155816e-44.0f;
    int32_t item_a8 = Script_GetArg(param_9, 0xb);
    void item_a0;
    float* flagP = &item_a0;

    do
    {
        float data_4 = dest_val;
        dest_val += 1;
        Profile_ValueSet(param_9, data_4);
🚫🚫🚫        *flagP =
        /* unimplemented  {fstp dword [flagP], fp0} */
        idx += 1;
        flagP = &flagP[1];
    } while (dest_val - 0xc < 0xb);

    void item_74;
    float* flagP1 = &item_74;
    int32_t i_1 = 0xb;
    int32_t kind;
    int32_t i;

    do
    {
        float data_5 = dest_val;
        dest_val += 1;
        kind = Profile_ValueSet(param_9, data_5);
🚫🚫🚫        *flagP1 =
        /* unimplemented  {fstp dword [flagP], fp0} */
        idx += 1;
        flagP1 = &flagP1[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    kind = g_54dada;
    float item_1ac = dest_val;
    char item_b4 = 1;
    QTask_HandleInput(param_8, kind, &flags);
🚫🚫    /* unimplemented  {fild fp0, dword [stack_ptr+0x1c]} */
    float item_1a0 = dest_val;
🚫🚫🚫    double item_198 = /* double item_198 = unimplemented  {fstp qword [stack_ptr+0x30], fp0} */;
    /* unimplemented  {fstp qword [stack_ptr+0x30], fp0} */
    char* item_190 = &g_567c74;
    memcpy(param_7, &item_1a0, 0x18);
    return param_7;
}
