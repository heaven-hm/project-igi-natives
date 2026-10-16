#include "004EDD20-DefinePhysicsObjType.h"
/* 0x004edd20 DefinePhysicsObjType full linked: callers=0 callees=21 */
int32_t DefinePhysicsObjType(long double a1 @ st0, long double a2 @ st1, long double a3 @ st2, long double a4 @ st3, int32_t a5, char* a6 @ 0xc)

// Sig: unknown DefinePhysicsObjType(unknown param1, unknown param2)
// Note: Registered at 0x4EDD12 via registrar 0x4B8890 (push 0x4EDD20 +
// 'DefinePhysicsObjType'), argc bounds (0, -1). 650-byte config parser;
// corroborates cataloged PhysicsObjType_ParseConfigFile family.  Verified: r2
// forced-analysis confirmed exact start (size 650); P3 byte-level
// name<->address binding at registrar callsite 0x4EDD12 via 0x4B8890; P6
// SHA-256(first 32 code
// bytes)=c298e1324dd1157dbf5b49ad4260d4bb6c30a4cb60914356f3078e69e56aa94f;
// re-agent reverser/checker loop ran on this native (C decompilation pending
// ARM64 native port).
{
    int32_t eax = g_a5efd8;
    int32_t ecx = eax * 5;
    float edi = a6;
    int32_t var_30 = 0;
    *(((eax + ecx * 0x12) << 3) + 0xa5f2b4) = 0;
    *(((eax + ecx * 0x12) << 3) + &g_a5efe0) = sub_4b8a20(edi, var_30);
    *(((eax + ecx * 0x12) << 3) + 0xa5efe4) = sub_4b8a20(edi, 1);
    Profile_ValueSet(edi, 2.80259693e-45f);
    *(((eax + ecx * 0x12) << 3) + 0xa5efe8) = a1;
    Profile_ValueSet(edi, 4.20389539e-45f);
    *(((eax + ecx * 0x12) << 3) + 0xa5efec) = a2;
    Profile_ValueSet(edi, 5.60519386e-45f);
    *(((eax + ecx * 0x12) << 3) + 0xa5eff0) = a3;
    Profile_ValueSet(edi, 7.00649232e-45f);
    *(((eax + ecx * 0x12) << 3) + 0xa5eff4) = a4;
    int16_t top = 4;
    sub_4b8a80(edi, 6, ((eax + ecx * 0x12) << 3) + 0xa5eff8, 0x20);
    var_30 = 0x100;
    sub_4b8a80(edi, 7, ((eax + ecx * 0x12) << 3) + 0xa5f018, var_30);
    char* esi = ((eax + ecx * 0x12) << 3) + &g_a5f118;
    char* var_1c = esi;
    sub_4b8a80(edi, 8, esi, 0x10);
    int32_t eax_4 = g_a5efd8;
    int32_t ecx_3 = 0;

    if (eax_4 > 0)
    {
        char* ebp_1 = &g_a5f118;
        a6 = &g_a5f118;

        while (true)
        {
            char edx_1 = *esi;
            eax_4 = edx_1;
            char temp0_1 = *ebp_1;
            bool c_1 = edx_1 < temp0_1;
            int32_t eax_6;

            if (edx_1 != temp0_1)
                eax_6 = eax_4 - eax_4 + 1;
            else if (!eax_4)
                eax_6 = 0;
            else
            {
                edx_1 = esi[1];
                eax_4 = edx_1;
                char temp3_1 = ebp_1[1];
                c_1 = edx_1 < temp3_1;

                if (edx_1 != temp3_1)
                    eax_6 = eax_4 - eax_4 + 1;
                else
                {
                    esi = &esi[2];
                    ebp_1 = &ebp_1[2];

                    if (eax_4)
                        continue;

                    eax_6 = 0;
                }
            }

            if (!eax_6)
            {
                var_30 = var_1c;
                Error_Show("Physics obj model %s is defined multiple times.");

                while (true)
                    /* nop */
            }
            else
            {
                eax_4 = g_a5efd8;
                ecx_3 += 1;
                ebp_1 = &a6[0x2d8];
                a6 = ebp_1;

                if (ecx_3 >= eax_4)
                    break;

                esi = var_1c;
            }
        }
    }

    var_30 = 9;
    int32_t esi_1 = 0xa;
    int32_t eax_7 = sub_4b8a20(edi, var_30);
    *(((eax + ecx * 0x12) << 3) + 0xa5f128) = eax_7;
    a6 = nullptr;

    if (eax_7 > 0)
    {
        int32_t* ebp_3 = ((eax + ecx * 0x12) << 3) + 0xa5f130;
        bool cond:1_1;

        do
        {
            var_30 = esi_1;
            ebp_3[-1] = sub_4b8a20(edi, var_30);
            *ebp_3 = sub_4b8a20(edi, esi_1 + 1);
            ebp_3[1] = sub_4b8a20(edi, esi_1 + 2);
            Profile_ValueSet(edi, esi_1 + 3);
🚫🚫🚫            ebp_3[2] = /* ebp_3[2] = unimplemented  {fstp dword [ebp+0x8], st0} */;
            /* unimplemented  {fstp dword [ebp+0x8], st0} */
            float esi_6 = esi_1 + 5;
            Profile_ValueSet(edi, esi_1 + 4);
🚫🚫🚫            ebp_3[3] = /* ebp_3[3] = unimplemented  {fstp dword [ebp+0xc], st0} */;
            /* unimplemented  {fstp dword [ebp+0xc], st0} */
            esi_1 = esi_6 + 1;
            Profile_ValueSet(edi, esi_6);
            char* eax_17 = a6;
🚫🚫🚫            ebp_3[4] = /* ebp_3[4] = unimplemented  {fstp dword [ebp+0x10], st0} */;
            /* unimplemented  {fstp dword [ebp+0x10], st0} */
            top += 3;
            ebp_3 = &ebp_3[6];
            cond:1_1 = &eax_17[1] < *(((eax + ecx * 0x12) << 3) + 0xa5f128);
            a6 = &eax_17[1];
        } while (cond:1_1);
    }

    var_30 = esi_1;
    Profile_ValueSet(edi, var_30);
🚫🚫🚫    *(((eax + ecx * 0x12) << 3) + 0xa5f2ac) = /* *(((eax + ecx * 0x12) << 3) + 0xa5f2ac) =
        unimplemented  {fstp dword [ebx+0x2cc], st0} */;
    /* unimplemented  {fstp dword [ebx+0x2cc], st0} */
    Profile_ValueSet(edi, esi_1 + 1);
🚫🚫🚫    *(((eax + ecx * 0x12) << 3) + 0xa5f2b0) = /* *(((eax + ecx * 0x12) << 3) + 0xa5f2b0) =
        unimplemented  {fstp dword [ebx+0x2d0], st0} */;
    /* unimplemented  {fstp dword [ebx+0x2d0], st0} */
    int32_t eax_20 = 0;
    *(((eax + ecx * 0x12) << 3) + 0xa5f2b4) = 0;
    eax_20 = g_54dc31;
    int32_t edx_2 = 0;
    edx_2 = *(((eax + ecx * 0x12) << 3) + &g_a5efe0);
    int32_t eax_21 = *(((eax_20 * 0x180 + edx_2) << 2) + &g_a96ae0);
    void* var_18;

    if (eax_21)
    {
        var_30 = &a6;
        eax_21(0, var_30);
        void* eax_22 = Mem_Alloc(a6, 4);
        *(((eax + ecx * 0x12) << 3) + 0xa5f2b4) = eax_22;
        var_18 = eax_22;
        int32_t ecx_8 = 0;
        ecx_8 = *(((eax + ecx * 0x12) << 3) + &g_a5efe0);
        float var_14_1 = edi;
        int32_t var_10_1 = esi_1 + 2;
        (*(((*g_54dc30 * 0x180 + ecx_8) << 2) + &g_a96ae0))(0, &var_18);
    }

    g_a5efd8 += 1;
    var_18 = 1;
    int32_t var_10_2 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a5, &var_18, 0x18);
    return a5;
}
