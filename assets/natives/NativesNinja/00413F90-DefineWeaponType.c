#include "00413F90-DefineWeaponType.h"
/* 0x00413f90 DefineWeaponType full linked: callers=0 callees=56 */
int32_t DefineWeaponType(long double a1 @ st0, long double a2 @ st1, long double a3 @ st2, long double a4 @ st3, long double a5 @ st4, long double a6 @ st5, long double a7 @ st6, long double a8 @ st7, int32_t a9, float a10 @ 0xc)

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
    int32_t __saved_ebx = 0;
    float var_b0 = a10;
    int32_t __saved_ebx_3 = sub_4b8a20(var_b0, __saved_ebx);
    int32_t ecx = g_57b18c;
    *(ecx * 0x6e8 + &g_56e258) = __saved_ebx_3;
    int32_t edx_4 = 0;

    if (ecx > 0)
    {
        int32_t* esi_1 = &g_56e258;

        while (true)
        {
            if (__saved_ebx_3 == *esi_1)
            {
                int32_t __saved_ebx_2 = __saved_ebx_3;
                var_b0 = "Weapon ID %d not unique";
                Error_Show(var_b0);

                while (true)
                    /* nop */
            }
            else
            {
                edx_4 += 1;
                esi_1 = &esi_1[0x1ba];

                if (edx_4 >= ecx)
                    break;
            }
        }
    }

    if (g_5391b4 < __saved_ebx_3)
        g_5391b4 = __saved_ebx_3;

    var_b0 = 1.79366203e-43f;
    void var_80;
    sub_4b8a80(a10, 1, &var_80, var_b0);
    TaskType_Set(&var_80, *(g_57b18c * 0x6e8 + &g_56e258));
    void* edi = &var_80;
    int32_t i = 0xffffffff;
    int32_t edx_8 = g_57b18c * 0x6e8;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx_6 = ~i;
    int32_t esi_3;
    int32_t edi_3;
    edi_3 = memcpy(edx_8 + 0x56e268, edi - ecx_6, ecx_6 & 0xfffffffc);
    memcpy(edi_3, esi_3, ecx_6 & 3);
    sub_4b8a80(a10, 2, edx_8 + 0x56e368, 0x100);
    sub_4b8a80(a10, 3, g_57b18c * 0x6e8 + &g_56e568, 0x100);
    sub_4b8a80(a10, 4, g_57b18c * 0x6e8 + &g_56e468, 0x100);
    int32_t eax_8 = g_57b18c;
    var_b0 = 7.00649232e-45f;
    *(eax_8 * 0x6e8 + &g_56e934) = 1;
    *(g_57b18c * 0x6e8 + &g_56e868) = sub_4b8a20(a10, var_b0);
    *(g_57b18c * 0x6e8 + &g_56e86c) = sub_4b8a20(a10, 6);
    *(g_57b18c * 0x6e8 + &g_56e870) = sub_4b8a20(a10, 7);
    *(g_57b18c * 0x6e8 + &g_56e25c) = sub_4b8a20(a10, 8);
    *(g_57b18c * 0x6e8 + &g_56e894) = sub_4b8a20(a10, 9);
    Profile_ValueSet(a10, 1.40129846e-44f);
    *(g_57b18c * 0x6e8 + &g_56e8ac) = a1;
    Profile_ValueSet(a10, 1.54142831e-44f);
    *(g_57b18c * 0x6e8 + &g_56e8b0) = a2;
    Profile_ValueSet(a10, 1.68155816e-44f);
    int32_t eax_17 = g_57b18c;
    var_b0 = 1.821688e-44f;
    *(eax_17 * 0x6e8 + &g_56e8b4) = a3;
    Profile_ValueSet(a10, var_b0);
    *(g_57b18c * 0x6e8 + &g_56e8b8) = a4;
    *(g_57b18c * 0x6e8 + &g_56e898) = sub_4b8a20(a10, 0xe);
    *(g_57b18c * 0x6e8 + &g_56e89c) = sub_4b8a20(a10, 0xf);
    *(g_57b18c * 0x6e8 + &g_56e8a0) = sub_4b8a20(a10, 0x10);
    *(g_57b18c * 0x6e8 + &g_56e8a4) = sub_4b8a20(a10, 0x11);
    Profile_ValueSet(a10, 2.52233724e-44f);
    *(g_57b18c * 0x6e8 + &g_56e8bc) = a5;
    Profile_ValueSet(a10, 2.66246708e-44f);
    *(g_57b18c * 0x6e8 + &g_56e8c0) = a6;
    Profile_ValueSet(a10, 2.80259693e-44f);
    int32_t eax_28 = g_57b18c;
    var_b0 = 2.94272678e-44f;
    *(eax_28 * 0x6e8 + &g_56e8c4) = a7;
    Profile_ValueSet(a10, var_b0);
    *(g_57b18c * 0x6e8 + &g_56e8c8) = a8;
    Profile_ValueSet(a10, 3.08285662e-44f);
    int32_t eax_32 = g_57b18c;
    *(eax_32 * 0x6e8 + &g_56e8cc) = a1;
    int32_t esi_5 = eax_32 * 0x6e8;
    Profile_ValueSet(a10, 3.22298647e-44f);
    *(esi_5 + 0x56e8d0) = a2;
    sub_4b8a80(a10, 0x18, esi_5 + 0x56e668, 0x100);
    int32_t esi_7 = g_57b18c * 0x6e8;
    Profile_ValueSet(a10, 3.50324616e-44f);
    *(esi_7 + 0x56e8a8) = a3;
    sub_4b8a80(a10, 0x1a, esi_7 + 0x56e768, 0x100);
    var_b0 = 3.78350585e-44f;
    int32_t eax_35 = sub_4b8a20(a10, var_b0);
    int32_t ecx_59 = g_57b18c;
    *(ecx_59 * 0x6e8 + &g_56e260) = eax_35;
    int32_t esi_9 = ecx_59 * 0x6e8;
    *(esi_9 + 0x56e264) = sub_4b8a20(a10, 0x1c);
    sub_4b8a80(a10, 0x1d, esi_9 + 0x56e874, 0x10);
    sub_4b8a80(a10, 0x1e, g_57b18c * 0x6e8 + &g_56e884, 0x10);
    *(g_57b18c * 0x6e8 + &g_56e8d4) = sub_4b8a20(a10, 0x1f);
    int32_t eax_43 = sub_4b8a20(a10, 0x20);
    int32_t ecx_65 = g_57b18c;
    var_b0 = 4.62428493e-44f;
    *(ecx_65 * 0x6e8 + &g_56e8d8) = eax_43;
    *(g_57b18c * 0x6e8 + &g_56e8dc) = sub_4b8a20(a10, var_b0);
    *(g_57b18c * 0x6e8 + &g_56e8e0) = sub_4b8a20(a10, 0x22);
    *(g_57b18c * 0x6e8 + &g_56e8e4) = sub_4b8a20(a10, 0x23);
    *(g_57b18c * 0x6e8 + &g_56e8e8) = sub_4b8a20(a10, 0x24);
    *(g_57b18c * 0x6e8 + &g_56e8ec) = sub_4b8a20(a10, 0x25);
    *(g_57b18c * 0x6e8 + &g_56e8f0) = sub_4b8a20(a10, 0x26);
    *(g_57b18c * 0x6e8 + &g_56e8f8) = sub_4b8a20(a10, 0x27);
    int32_t eax_51 = sub_4b8a20(a10, 0x28);
    int32_t ecx_81 = g_57b18c;
    var_b0 = 5.7453237e-44f;
    *(ecx_81 * 0x6e8 + &g_56e8fc) = eax_51;
    *(g_57b18c * 0x6e8 + &g_56e8f4) = sub_4b8a20(a10, var_b0);
    int32_t eax_53 = sub_4b8a20(a10, 0x2a);
    int32_t ecx_85 = g_57b18c;
    *(ecx_85 * 0x6e8 + &g_56e900) = eax_53;
    int32_t esi_11 = ecx_85 * 0x6e8;
    *(esi_11 + 0x56e904) = sub_4b8a20(a10, 0x2b);
    sub_4b8a80(a10, 0x2c, esi_11 + 0x56e908, 0x10);
    sub_4b8a80(a10, 0x2d, g_57b18c * 0x6e8 + &g_56e918, 0x10);
    Profile_ValueSet(a10, 6.44597294e-44f);
    int32_t eax_60 = g_57b18c;
    float edi_4 = 6.72623263e-44f;
    var_b0 = 6.58610278e-44f;
    *(eax_60 * 0x6e8 + &g_56e928) = a4;
    int32_t esi_13 = eax_60 * 0x6e8;
    *(esi_13 + 0x56e92c) = sub_4b8a20(a10, var_b0);
    *(esi_13 + &g_56e938) = 0;
    int32_t var_9c;
    void* var_98;

    if (*(esi_13 + 0x56e92c) != 0x181)
    {
        int32_t ecx_93 = 0;
        ecx_93 = *(esi_13 + 0x56e92c);
        int32_t eax_68 = *(((*g_5391ac * 0x180 + ecx_93) << 2) + &g_a96ae0);

        if (eax_68)
        {
            var_b0 = &var_9c;
            eax_68(0, var_b0);
            void* eax_70 = Mem_Alloc(var_9c, 4);
            int32_t ecx_94 = g_57b18c;
            var_98 = eax_70;
            float var_94_1 = a10;
            float var_90_1 = 6.72623263e-44f;
            int32_t ecx_96 = ecx_94 * 0x6e8;
            *(ecx_96 + &g_56e938) = eax_70;
            int32_t eax_71 = 0;
            eax_71 = *(ecx_96 + 0x56e92c);
            int32_t eax_72 = 0;
            eax_72 = g_5391ad;
            (*(((eax_71 + eax_72 * 0x180) << 2) + &g_a96ae0))(0, &var_98);
            edi_4 = var_90_1;
        }
    }

    int32_t esi_14 = g_57b18c;
    var_b0 = edi_4;
    int32_t esi_16 = esi_14 * 0x6e8;
    *(esi_16 + 0x56e930) = sub_4b8a20(a10, var_b0);
    *(esi_16 + 0x56e93c) = 0;

    if (*(esi_16 + 0x56e930) != 0x181)
    {
        int32_t eax_76 = 0;
        int32_t ecx_100 = 0;
        eax_76 = g_5391af;
        ecx_100 = *(esi_16 + 0x56e930);
        int32_t eax_80 = *(((eax_76 * 0x180 + ecx_100) << 2) + &g_a96ae0);

        if (eax_80)
        {
            int32_t* __saved_ebx_1 = &var_9c;
            var_b0 = 0f;
            eax_80(var_b0, __saved_ebx_1);
            void* eax_82 = Mem_Alloc(var_9c, 4);
            int32_t ecx_101 = g_57b18c;
            var_98 = eax_82;
            float var_94_2 = a10;
            int32_t ecx_103 = ecx_101 * 0x6e8;
            *(ecx_103 + 0x56e93c) = eax_82;
            int32_t eax_83 = 0;
            eax_83 = *(ecx_103 + 0x56e930);
            int32_t var_90_2 = edi_4 + 1;
            (*(((eax_83 + *g_5391b0 * 0x180) << 2) + &g_a96ae0))(0, &var_98);
        }
    }

    g_57b18c += 1;
    var_98 = 1;
    int32_t var_90_3 = 0;
    int32_t var_8c = 0x3ff00000;
    char* var_88 = &g_567c74;
    memcpy(a9, &var_98, 0x18);
    return a9;
}
