// Original IGI.EXE function: DefineWeaponType (VA 0x00413F90; static CFG gate PASS, CFG score 0.994).
#include "DefineWeaponType.h"
int32_t DefineWeaponType(long double a1 @ fp0, long double a2 @ fp1, long double a3 @ fp2, long double a4 @ fp3, long double a5 @ fp4, long double a6 @ fp5, long double a7 @ fp6, long double a8 @ fp7, int32_t a9, float a10 @ 0xc)

// Sig: unknown DefineWeaponType(unknown param1, unknown param2)
// Note: Registered at 0x413E52 via registrar 0x4B8890 (push 0x413F90 +
// 'DefineWeaponType'), argc bounds (0, -1). Large (2165-byte) config parser;
// name corroborated by semantics consistent with cataloged WeaponType_Open /
// *ParseConfigFile family.  Verified: r2 forced-analysis confirmed exact start
// (size 2165); P3 byte-level name<->address binding at registrar callsite
// 0x413E52 via 0x4B8890; P6 SHA-256(first 32 code
// bytes)=55f13a150373436d3a68f7b8756852c048244c7749999f8ba7bfdccdb9cef313;
// re-agent reverser/checker loop ran on this native (C decompilation pending
// ARM64 native port).
{
    int32_t saved_obj = 0;
    float v_b0 = a10;
    int32_t __saved_ebx_3 = Script_GetArg(v_b0, saved_obj);
    int32_t objC = g_57b18c;
    *(objC * 0x6e8 + &g_56e258) = __saved_ebx_3;
    int32_t tmpD4 = 0;

    if (objC > 0)
    {
        int32_t* srcS1 = &g_56e258;

        while (true)
        {
            if (__saved_ebx_3 == *srcS1)
            {
                int32_t __saved_ebx_2 = __saved_ebx_3;
                v_b0 = "Weapon ID %d not unique";
                Error_Show(v_b0);

                while (true)
                    /* nop */
            }
            else
            {
                tmpD4 += 1;
                srcS1 = &srcS1[0x1ba];

                if (tmpD4 >= objC)
                    break;
            }
        }
    }

    if (g_5391b4 < __saved_ebx_3)
        g_5391b4 = __saved_ebx_3;

    v_b0 = 1.79366203e-43f;
    void v_80;
    Sys_ResolveSymbol_23(a10, 1, &v_80, v_b0);
    TaskType_Set(&v_80, *(g_57b18c * 0x6e8 + &g_56e258));
    void* dstD = &v_80;
    int32_t i = 0xffffffff;
    int32_t tmpD8 = g_57b18c * 0x6e8;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC6 = ~i;
    int32_t srcS3;
    int32_t dstD3;
    dstD3 = memcpy(tmpD8 + 0x56e268, dstD - objC6, objC6 & 0xfffffffc);
    memcpy(dstD3, srcS3, objC6 & 3);
    Sys_ResolveSymbol_23(a10, 2, tmpD8 + 0x56e368, 0x100);
    Sys_ResolveSymbol_23(a10, 3, g_57b18c * 0x6e8 + &g_56e568, 0x100);
    Sys_ResolveSymbol_23(a10, 4, g_57b18c * 0x6e8 + &g_56e468, 0x100);
    int32_t valA8 = g_57b18c;
    v_b0 = 7.00649232e-45f;
    *(valA8 * 0x6e8 + &g_56e934) = 1;
    *(g_57b18c * 0x6e8 + &g_56e868) = Script_GetArg(a10, v_b0);
    *(g_57b18c * 0x6e8 + &g_56e86c) = Script_GetArg(a10, 6);
    *(g_57b18c * 0x6e8 + &g_56e870) = Script_GetArg(a10, 7);
    *(g_57b18c * 0x6e8 + &g_56e25c) = Script_GetArg(a10, 8);
    *(g_57b18c * 0x6e8 + &g_56e894) = Script_GetArg(a10, 9);
    Profile_ValueSet(a10, 1.40129846e-44f);
    *(g_57b18c * 0x6e8 + &g_56e8ac) = a1;
    Profile_ValueSet(a10, 1.54142831e-44f);
    *(g_57b18c * 0x6e8 + &g_56e8b0) = a2;
    Profile_ValueSet(a10, 1.68155816e-44f);
    int32_t valA17 = g_57b18c;
    v_b0 = 1.821688e-44f;
    *(valA17 * 0x6e8 + &g_56e8b4) = a3;
    Profile_ValueSet(a10, v_b0);
    *(g_57b18c * 0x6e8 + &g_56e8b8) = a4;
    *(g_57b18c * 0x6e8 + &g_56e898) = Script_GetArg(a10, 0xe);
    *(g_57b18c * 0x6e8 + &g_56e89c) = Script_GetArg(a10, 0xf);
    *(g_57b18c * 0x6e8 + &g_56e8a0) = Script_GetArg(a10, 0x10);
    *(g_57b18c * 0x6e8 + &g_56e8a4) = Script_GetArg(a10, 0x11);
    Profile_ValueSet(a10, 2.52233724e-44f);
    *(g_57b18c * 0x6e8 + &g_56e8bc) = a5;
    Profile_ValueSet(a10, 2.66246708e-44f);
    *(g_57b18c * 0x6e8 + &g_56e8c0) = a6;
    Profile_ValueSet(a10, 2.80259693e-44f);
    int32_t valA28 = g_57b18c;
    v_b0 = 2.94272678e-44f;
    *(valA28 * 0x6e8 + &g_56e8c4) = a7;
    Profile_ValueSet(a10, v_b0);
    *(g_57b18c * 0x6e8 + &g_56e8c8) = a8;
    Profile_ValueSet(a10, 3.08285662e-44f);
    int32_t valA32 = g_57b18c;
    *(valA32 * 0x6e8 + &g_56e8cc) = a1;
    int32_t srcS5 = valA32 * 0x6e8;
    Profile_ValueSet(a10, 3.22298647e-44f);
    *(srcS5 + 0x56e8d0) = a2;
    Sys_ResolveSymbol_23(a10, 0x18, srcS5 + 0x56e668, 0x100);
    int32_t srcS7 = g_57b18c * 0x6e8;
    Profile_ValueSet(a10, 3.50324616e-44f);
    *(srcS7 + 0x56e8a8) = a3;
    Sys_ResolveSymbol_23(a10, 0x1a, srcS7 + 0x56e768, 0x100);
    v_b0 = 3.78350585e-44f;
    int32_t valA35 = Script_GetArg(a10, v_b0);
    int32_t objC59 = g_57b18c;
    *(objC59 * 0x6e8 + &g_56e260) = valA35;
    int32_t srcS9 = objC59 * 0x6e8;
    *(srcS9 + 0x56e264) = Script_GetArg(a10, 0x1c);
    Sys_ResolveSymbol_23(a10, 0x1d, srcS9 + 0x56e874, 0x10);
    Sys_ResolveSymbol_23(a10, 0x1e, g_57b18c * 0x6e8 + &g_56e884, 0x10);
    *(g_57b18c * 0x6e8 + &g_56e8d4) = Script_GetArg(a10, 0x1f);
    int32_t valA43 = Script_GetArg(a10, 0x20);
    int32_t objC65 = g_57b18c;
    v_b0 = 4.62428493e-44f;
    *(objC65 * 0x6e8 + &g_56e8d8) = valA43;
    *(g_57b18c * 0x6e8 + &g_56e8dc) = Script_GetArg(a10, v_b0);
    *(g_57b18c * 0x6e8 + &g_56e8e0) = Script_GetArg(a10, 0x22);
    *(g_57b18c * 0x6e8 + &g_56e8e4) = Script_GetArg(a10, 0x23);
    *(g_57b18c * 0x6e8 + &g_56e8e8) = Script_GetArg(a10, 0x24);
    *(g_57b18c * 0x6e8 + &g_56e8ec) = Script_GetArg(a10, 0x25);
    *(g_57b18c * 0x6e8 + &g_56e8f0) = Script_GetArg(a10, 0x26);
    *(g_57b18c * 0x6e8 + &g_56e8f8) = Script_GetArg(a10, 0x27);
    int32_t valA51 = Script_GetArg(a10, 0x28);
    int32_t objC81 = g_57b18c;
    v_b0 = 5.7453237e-44f;
    *(objC81 * 0x6e8 + &g_56e8fc) = valA51;
    *(g_57b18c * 0x6e8 + &g_56e8f4) = Script_GetArg(a10, v_b0);
    int32_t valA53 = Script_GetArg(a10, 0x2a);
    int32_t objC85 = g_57b18c;
    *(objC85 * 0x6e8 + &g_56e900) = valA53;
    int32_t srcS11 = objC85 * 0x6e8;
    *(srcS11 + 0x56e904) = Script_GetArg(a10, 0x2b);
    Sys_ResolveSymbol_23(a10, 0x2c, srcS11 + 0x56e908, 0x10);
    Sys_ResolveSymbol_23(a10, 0x2d, g_57b18c * 0x6e8 + &g_56e918, 0x10);
    Profile_ValueSet(a10, 6.44597294e-44f);
    int32_t valA60 = g_57b18c;
    float dstD4 = 6.72623263e-44f;
    v_b0 = 6.58610278e-44f;
    *(valA60 * 0x6e8 + &g_56e928) = a4;
    int32_t srcS13 = valA60 * 0x6e8;
    *(srcS13 + 0x56e92c) = Script_GetArg(a10, v_b0);
    *(srcS13 + &g_56e938) = 0;
    int32_t v_9c;
    void* v_98;

    if (*(srcS13 + 0x56e92c) != 0x181)
    {
        int32_t objC93 = 0;
        objC93 = *(srcS13 + 0x56e92c);
        int32_t valA68 = *(((*g_5391ac * 0x180 + objC93) << 2) + &g_a96ae0);

        if (valA68)
        {
            v_b0 = &v_9c;
            valA68(0, v_b0);
            void* valA70 = Mem_Alloc(v_9c, 4);
            int32_t objC94 = g_57b18c;
            v_98 = valA70;
            float v_94_1 = a10;
            float v_90_1 = 6.72623263e-44f;
            int32_t objC96 = objC94 * 0x6e8;
            *(objC96 + &g_56e938) = valA70;
            int32_t valA71 = 0;
            valA71 = *(objC96 + 0x56e92c);
            int32_t valA72 = 0;
            valA72 = g_5391ad;
            (*(((valA71 + valA72 * 0x180) << 2) + &g_a96ae0))(0, &v_98);
            dstD4 = v_90_1;
        }
    }

    int32_t srcS14 = g_57b18c;
    v_b0 = dstD4;
    int32_t srcS16 = srcS14 * 0x6e8;
    *(srcS16 + 0x56e930) = Script_GetArg(a10, v_b0);
    *(srcS16 + 0x56e93c) = 0;

    if (*(srcS16 + 0x56e930) != 0x181)
    {
        int32_t valA76 = 0;
        int32_t objC100 = 0;
        valA76 = g_5391af;
        objC100 = *(srcS16 + 0x56e930);
        int32_t valA80 = *(((valA76 * 0x180 + objC100) << 2) + &g_a96ae0);

        if (valA80)
        {
            int32_t* __saved_ebx_1 = &v_9c;
            v_b0 = 0f;
            valA80(v_b0, __saved_ebx_1);
            void* valA82 = Mem_Alloc(v_9c, 4);
            int32_t objC101 = g_57b18c;
            v_98 = valA82;
            float v_94_2 = a10;
            int32_t objC103 = objC101 * 0x6e8;
            *(objC103 + 0x56e93c) = valA82;
            int32_t valA83 = 0;
            valA83 = *(objC103 + 0x56e930);
            int32_t v_90_2 = dstD4 + 1;
            (*(((valA83 + *g_5391b0 * 0x180) << 2) + &g_a96ae0))(0, &v_98);
        }
    }

    g_57b18c += 1;
    v_98 = 1;
    int32_t v_90_3 = 0;
    int32_t v_8c = 0x3ff00000;
    char* v_88 = &g_567c74;
    memcpy(a9, &v_98, 0x18);
    return a9;
}
