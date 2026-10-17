// Original IGI.EXE function: DefinePhysicsObjType (VA 0x004EDD20; static CFG gate PASS, CFG score 1.000).
#include "DefinePhysicsObjType.h"
int32_t DefinePhysicsObjType(long double a1 @ fp0, long double a2 @ fp1, long double a3 @ fp2, long double a4 @ fp3, int32_t a5, char* a6 @ 0xc)

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
    int32_t valA = g_a5efd8;
    int32_t objC = valA * 5;
    float dstD = a6;
    int32_t v_30 = 0;
    *(((valA + objC * 0x12) << 3) + 0xa5f2b4) = 0;
    *(((valA + objC * 0x12) << 3) + &g_a5efe0) = Script_GetArg(dstD, v_30);
    *(((valA + objC * 0x12) << 3) + 0xa5efe4) = Script_GetArg(dstD, 1);
    Profile_ValueSet(dstD, 2.80259693e-45f);
    *(((valA + objC * 0x12) << 3) + 0xa5efe8) = a1;
    Profile_ValueSet(dstD, 4.20389539e-45f);
    *(((valA + objC * 0x12) << 3) + 0xa5efec) = a2;
    Profile_ValueSet(dstD, 5.60519386e-45f);
    *(((valA + objC * 0x12) << 3) + 0xa5eff0) = a3;
    Profile_ValueSet(dstD, 7.00649232e-45f);
    *(((valA + objC * 0x12) << 3) + 0xa5eff4) = a4;
    int16_t idx = 4;
    Sys_ResolveSymbol_23(dstD, 6, ((valA + objC * 0x12) << 3) + 0xa5eff8, 0x20);
    v_30 = 0x100;
    Sys_ResolveSymbol_23(dstD, 7, ((valA + objC * 0x12) << 3) + 0xa5f018, v_30);
    char* srcS = ((valA + objC * 0x12) << 3) + &g_a5f118;
    char* v_1c = srcS;
    Sys_ResolveSymbol_23(dstD, 8, srcS, 0x10);
    int32_t valA4 = g_a5efd8;
    int32_t objC3 = 0;

    if (valA4 > 0)
    {
        char* flagP1 = &g_a5f118;
        a6 = &g_a5f118;

        while (true)
        {
            char tmpD1 = *srcS;
            valA4 = tmpD1;
            char f0_1 = *flagP1;
            bool c_1 = tmpD1 < f0_1;
            int32_t valA6;

            if (tmpD1 != f0_1)
                valA6 = valA4 - valA4 + 1;
            else if (!valA4)
                valA6 = 0;
            else
            {
                tmpD1 = srcS[1];
                valA4 = tmpD1;
                char f3_1 = flagP1[1];
                c_1 = tmpD1 < f3_1;

                if (tmpD1 != f3_1)
                    valA6 = valA4 - valA4 + 1;
                else
                {
                    srcS = &srcS[2];
                    flagP1 = &flagP1[2];

                    if (valA4)
                        continue;

                    valA6 = 0;
                }
            }

            if (!valA6)
            {
                v_30 = v_1c;
                Error_Show("Physics obj model %s is defined multiple times.");

                while (true)
                    /* nop */
            }
            else
            {
                valA4 = g_a5efd8;
                objC3 += 1;
                flagP1 = &a6[0x2d8];
                a6 = flagP1;

                if (objC3 >= valA4)
                    break;

                srcS = v_1c;
            }
        }
    }

    v_30 = 9;
    int32_t srcS1 = 0xa;
    int32_t valA7 = Script_GetArg(dstD, v_30);
    *(((valA + objC * 0x12) << 3) + 0xa5f128) = valA7;
    a6 = nullptr;

    if (valA7 > 0)
    {
        int32_t* flagP3 = ((valA + objC * 0x12) << 3) + 0xa5f130;
        bool cond_1_1;

        do
        {
            v_30 = srcS1;
            flagP3[-1] = Script_GetArg(dstD, v_30);
            *flagP3 = Script_GetArg(dstD, srcS1 + 1);
            flagP3[1] = Script_GetArg(dstD, srcS1 + 2);
            Profile_ValueSet(dstD, srcS1 + 3);
🚫🚫🚫            flagP3[2] = /* flagP3[2] = unimplemented  {fstp dword [flagP+0x8], fp0} */;
            /* unimplemented  {fstp dword [flagP+0x8], fp0} */
            float srcS6 = srcS1 + 5;
            Profile_ValueSet(dstD, srcS1 + 4);
🚫🚫🚫            flagP3[3] = /* flagP3[3] = unimplemented  {fstp dword [flagP+0xc], fp0} */;
            /* unimplemented  {fstp dword [flagP+0xc], fp0} */
            srcS1 = srcS6 + 1;
            Profile_ValueSet(dstD, srcS6);
            char* valA17 = a6;
🚫🚫🚫            flagP3[4] = /* flagP3[4] = unimplemented  {fstp dword [flagP+0x10], fp0} */;
            /* unimplemented  {fstp dword [flagP+0x10], fp0} */
            idx += 3;
            flagP3 = &flagP3[6];
            cond_1_1 = &valA17[1] < *(((valA + objC * 0x12) << 3) + 0xa5f128);
            a6 = &valA17[1];
        } while (cond_1_1);
    }

    v_30 = srcS1;
    Profile_ValueSet(dstD, v_30);
🚫🚫🚫    *(((valA + objC * 0x12) << 3) + 0xa5f2ac) = /* *(((valA + objC * 0x12) << 3) + 0xa5f2ac) =
        unimplemented  {fstp dword [ctxB+0x2cc], fp0} */;
    /* unimplemented  {fstp dword [ctxB+0x2cc], fp0} */
    Profile_ValueSet(dstD, srcS1 + 1);
🚫🚫🚫    *(((valA + objC * 0x12) << 3) + 0xa5f2b0) = /* *(((valA + objC * 0x12) << 3) + 0xa5f2b0) =
        unimplemented  {fstp dword [ctxB+0x2d0], fp0} */;
    /* unimplemented  {fstp dword [ctxB+0x2d0], fp0} */
    int32_t valA20 = 0;
    *(((valA + objC * 0x12) << 3) + 0xa5f2b4) = 0;
    valA20 = g_54dc31;
    int32_t tmpD2 = 0;
    tmpD2 = *(((valA + objC * 0x12) << 3) + &g_a5efe0);
    int32_t valA21 = *(((valA20 * 0x180 + tmpD2) << 2) + &g_a96ae0);
    void* v_18;

    if (valA21)
    {
        v_30 = &a6;
        valA21(0, v_30);
        void* valA22 = Mem_Alloc(a6, 4);
        *(((valA + objC * 0x12) << 3) + 0xa5f2b4) = valA22;
        v_18 = valA22;
        int32_t objC8 = 0;
        objC8 = *(((valA + objC * 0x12) << 3) + &g_a5efe0);
        float v_14_1 = dstD;
        int32_t v_10_1 = srcS1 + 2;
        (*(((*g_54dc30 * 0x180 + objC8) << 2) + &g_a96ae0))(0, &v_18);
    }

    g_a5efd8 += 1;
    v_18 = 1;
    int32_t v_10_2 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a5, &v_18, 0x18);
    return a5;
}
