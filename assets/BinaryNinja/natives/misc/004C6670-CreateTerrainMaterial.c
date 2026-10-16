#include "CreateTerrainMaterial.h"
int32_t CreateTerrainMaterial(int32_t a1, float a2 @ 0xc)

// Sig: unknown CreateTerrainMaterial(unknown param1, unknown param2)
// Note: Registered at 0x4C6580 via registrar 0x4B8890 (push 0x4C6670 +
// 'CreateTerrainMaterial'). Pushes interleaved with inline strlen/rep-movs
// string setup; site also pushes 0x4C6670 at 0x4C655C.  Verified: r2
// forced-analysis confirmed exact start (size 230); P3 byte-level
// name<->address binding at registrar callsite 0x4C6580 via 0x4B8890; P6
// SHA-256(first 32 code
// bytes)=bd85673e252f99c903e7b8b25e1da01901ce82a84299e100833a25fef1c175b1;
// re-agent reverser/checker loop ran on this native (C decompilation pending
// ARM64 native port).
{
    int32_t valA1 = Script_GetArg(a2, 0) * 5;
    int32_t i_1 = 1;
    int32_t dstD1 = valA1 * 0xb4;
    *(dstD1 + &g_c28fe0) = Script_GetArg(a2, i_1);
    int32_t i = 3;
    float* dstD2 = dstD1 + 0xc28fe8;

    do
    {
        int32_t valA5 = Script_GetArg(a2, i - 1);
        i_1 = i;
        dstD2[-1] = valA5;
        Profile_ValueSet(a2, i_1);
🚫🚫🚫        *dstD2 =
        /* unimplemented  {fstp dword [dstD], fp0} */
        Profile_ValueSet(a2, i + 1);
🚫🚫🚫        dstD2[1] = /* dstD2[1] = unimplemented  {fstp dword [dstD+0x4], fp0} */;
        /* unimplemented  {fstp dword [dstD+0x4], fp0} */
        Profile_ValueSet(a2, i + 2);
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫🚫        dstD2[2] = /* dstD2[2] = unimplemented  {fstp dword [dstD+0x8], fp0} */;
        /* unimplemented  {fstp dword [dstD+0x8], fp0} */
        dstD2[3] = Script_GetArg(a2, i + 3);
        Profile_ValueSet(a2, i + 4);
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫🚫        dstD2[4] = /* dstD2[4] = unimplemented  {fstp dword [dstD+0x10], fp0} */;
        /* unimplemented  {fstp dword [dstD+0x10], fp0} */
        int16_t idx = idx + 4;
        dstD2[5] = Script_GetArg(a2, i + 5);
        i += 7;
        dstD2 = &dstD2[7];
    } while (i < 0xe3);

    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
