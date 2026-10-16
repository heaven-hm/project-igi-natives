#include "004EAD20-Define_Graph.h"
/* 0x004ead20 Define_Graph full linked: callers=0 callees=17 */
int32_t Define_Graph(long double a1 @ st0, long double a2 @ st1, long double a3 @ st2, long double a4 @ st3, long double a5 @ st4, long double a6 @ st5, int32_t a7, void* a8, float a9)

// Sig: void Define_Graph(...)
// Note: Defines a GRAPH (sound/graph transition graph) entry inside definition
// blocks - OpenIGI maps it to SoundDefinitionKind.Graph. Parser-context only.
{
    void var_188;
    void* flags = &var_188;
    char var_1a4 = 1;
    sub_4ea7b0(&var_188);
    void var_48;
    sub_4b8a80(a9, 0, &var_48, 0x20);
    void var_28;
    sub_4b8a80(a9, 1, &var_28, 0x20);
    Profile_ValueSet(a9, 2.80259693e-45f);
    double var_e8 = a1;
    Profile_ValueSet(a9, 4.20389539e-45f);
    double var_e0 = a2;
    Profile_ValueSet(a9, 5.60519386e-45f);
    double var_d8 = a3;
    Profile_ValueSet(a9, 7.00649232e-45f);
    float var_d0 = a4;
    Profile_ValueSet(a9, 8.40779079e-45f);
    float var_c0 = a5;
    Profile_ValueSet(a9, 9.80908925e-45f);
    float var_bc = a6;
    int16_t top = 6;
    int32_t var_b0 = sub_4b8a20(a9, 8);
    int32_t var_ac = sub_4b8a20(a9, 9);
    int32_t var_a4 = sub_4b8a20(a9, 0xa);
    float edi = 1.68155816e-44f;
    int32_t var_a8 = sub_4b8a20(a9, 0xb);
    void var_a0;
    float* ebp = &var_a0;

    do
    {
        float eax_4 = edi;
        edi += 1;
        Profile_ValueSet(a9, eax_4);
🚫🚫🚫        *ebp = /* *ebp = unimplemented  {fstp dword [ebp], st0} */;
        /* unimplemented  {fstp dword [ebp], st0} */
        top += 1;
        ebp = &ebp[1];
    } while (edi - 0xc < 0xb);

    void var_74;
    float* ebp_1 = &var_74;
    int32_t i_1 = 0xb;
    int32_t kind;
    int32_t i;

    do
    {
        float eax_5 = edi;
        edi += 1;
        kind = Profile_ValueSet(a9, eax_5);
🚫🚫🚫        *ebp_1 = /* *ebp_1 = unimplemented  {fstp dword [ebp], st0} */;
        /* unimplemented  {fstp dword [ebp], st0} */
        top += 1;
        ebp_1 = &ebp_1[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    kind = g_54dada;
    float var_1ac = edi;
    char var_b4 = 1;
    QTask_HandleInput(a8, kind, &flags);
🚫🚫    /* unimplemented  {fild st0, dword [esp+0x1c]} */
    float var_1a0 = edi;
🚫🚫🚫    double var_198 = /* double var_198 = unimplemented  {fstp qword [esp+0x30], st0} */;
    /* unimplemented  {fstp qword [esp+0x30], st0} */
    char* var_190 = &g_567c74;
    memcpy(a7, &var_1a0, 0x18);
    return a7;
}
