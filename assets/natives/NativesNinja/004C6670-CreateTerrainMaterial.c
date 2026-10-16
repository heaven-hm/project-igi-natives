#include "004C6670-CreateTerrainMaterial.h"
/* 0x004c6670 CreateTerrainMaterial full linked: callers=0 callees=10 */
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
    int32_t eax_1 = sub_4b8a20(a2, 0) * 5;
    int32_t i_1 = 1;
    int32_t edi_1 = eax_1 * 0xb4;
    *(edi_1 + &g_c28fe0) = sub_4b8a20(a2, i_1);
    int32_t i = 3;
    float* edi_2 = edi_1 + 0xc28fe8;

    do
    {
        int32_t eax_5 = sub_4b8a20(a2, i - 1);
        i_1 = i;
        edi_2[-1] = eax_5;
        Profile_ValueSet(a2, i_1);
🚫🚫🚫        *edi_2 = /* *edi_2 = unimplemented  {fstp dword [edi], st0} */;
        /* unimplemented  {fstp dword [edi], st0} */
        Profile_ValueSet(a2, i + 1);
🚫🚫🚫        edi_2[1] = /* edi_2[1] = unimplemented  {fstp dword [edi+0x4], st0} */;
        /* unimplemented  {fstp dword [edi+0x4], st0} */
        Profile_ValueSet(a2, i + 2);
🚫🚫        /* unimplemented  {fmul st0, dword [&g_533504]} */
🚫🚫🚫        edi_2[2] = /* edi_2[2] = unimplemented  {fstp dword [edi+0x8], st0} */;
        /* unimplemented  {fstp dword [edi+0x8], st0} */
        edi_2[3] = sub_4b8a20(a2, i + 3);
        Profile_ValueSet(a2, i + 4);
🚫🚫        /* unimplemented  {fmul st0, dword [&g_533504]} */
🚫🚫🚫        edi_2[4] = /* edi_2[4] = unimplemented  {fstp dword [edi+0x10], st0} */;
        /* unimplemented  {fstp dword [edi+0x10], st0} */
        int16_t top = top + 4;
        edi_2[5] = sub_4b8a20(a2, i + 5);
        i += 7;
        edi_2 = &edi_2[7];
    } while (i < 0xe3);

    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
