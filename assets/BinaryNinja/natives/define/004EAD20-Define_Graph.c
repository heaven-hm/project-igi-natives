// Original IGI.EXE function: Define_Graph (VA 0x004EAD20; static CFG gate PASS, CFG score 0.980).
#include "Define_Graph.h"
int32_t Define_Graph(long double a1 @ fp0, long double a2 @ fp1, long double a3 @ fp2, long double a4 @ fp3, long double a5 @ fp4, long double a6 @ fp5, int32_t a7, void* a8, float a9)

// Sig: void Define_Graph(...)
// Note: Defines a GRAPH (sound/graph transition graph) entry inside definition
// blocks - OpenIGI maps it to SoundDefinitionKind.Graph. Parser-context only.
{
    void v_188;
    void* flags = &v_188;
    char v_1a4 = 1;
    SoundSys_SetFrequency_14(&v_188);
    void v_48;
    Sys_ResolveSymbol_23(a9, 0, &v_48, 0x20);
    void v_28;
    Sys_ResolveSymbol_23(a9, 1, &v_28, 0x20);
    Profile_ValueSet(a9, 2.80259693e-45f);
    double v_e8 = a1;
    Profile_ValueSet(a9, 4.20389539e-45f);
    double v_e0 = a2;
    Profile_ValueSet(a9, 5.60519386e-45f);
    double v_d8 = a3;
    Profile_ValueSet(a9, 7.00649232e-45f);
    float v_d0 = a4;
    Profile_ValueSet(a9, 8.40779079e-45f);
    float v_c0 = a5;
    Profile_ValueSet(a9, 9.80908925e-45f);
    float v_bc = a6;
    int16_t idx = 6;
    int32_t v_b0 = Script_GetArg(a9, 8);
    int32_t v_ac = Script_GetArg(a9, 9);
    int32_t v_a4 = Script_GetArg(a9, 0xa);
    float dstD = 1.68155816e-44f;
    int32_t v_a8 = Script_GetArg(a9, 0xb);
    void v_a0;
    float* flagP = &v_a0;

    do
    {
        float valA4 = dstD;
        dstD += 1;
        Profile_ValueSet(a9, valA4);
🚫🚫🚫        *flagP =
        /* unimplemented  {fstp dword [flagP], fp0} */
        idx += 1;
        flagP = &flagP[1];
    } while (dstD - 0xc < 0xb);

    void v_74;
    float* flagP1 = &v_74;
    int32_t i_1 = 0xb;
    int32_t kind;
    int32_t i;

    do
    {
        float valA5 = dstD;
        dstD += 1;
        kind = Profile_ValueSet(a9, valA5);
🚫🚫🚫        *flagP1 =
        /* unimplemented  {fstp dword [flagP], fp0} */
        idx += 1;
        flagP1 = &flagP1[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    kind = g_54dada;
    float v_1ac = dstD;
    char v_b4 = 1;
    QTask_HandleInput(a8, kind, &flags);
🚫🚫    /* unimplemented  {fild fp0, dword [esp+0x1c]} */
    float v_1a0 = dstD;
🚫🚫🚫    double v_198 = /* double v_198 = unimplemented  {fstp qword [esp+0x30], fp0} */;
    /* unimplemented  {fstp qword [esp+0x30], fp0} */
    char* v_190 = &g_567c74;
    memcpy(a7, &v_1a0, 0x18);
    return a7;
}
