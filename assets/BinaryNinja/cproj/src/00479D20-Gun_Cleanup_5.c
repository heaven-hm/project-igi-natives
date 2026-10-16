#include "gi_platform.h"
#include "00479D20-Gun_Cleanup_5.h"
int32_t Gun_Cleanup_5(int32_t* a1, int32_t* a2)

{
    int32_t srcS = *a2;
    int32_t* ctxB = a1[0x4a];
    int32_t objC = g_c28b44;
    int32_t tmpD = g_c28b48;
    float v_180 = 0.0f;
    float v_17c = 0.0f;

    switch (ctxB[0x186] - 1)
    {
        case 0:
        case 4:
        {
            Weapon_CheckAmmo_5(a1, srcS);
            break;
        }
        case 1:
        {
            Weapon_FireBullet_6(a1, srcS);
            break;
        }
        case 2:
        {
            Weapon_ReloadClip_6(a1, srcS);
            break;
        }
        case 3:
        {
            Weapon_ComputeAccuracy_6(a1, srcS);
            break;
        }
    }

    if (ctxB[0x186])
    {
        int32_t* v_190_5 = &ctxB[0x44];
        char v_104;
        Game_DataSymbolLoad(&v_104, "weapons/strings/%s");
        int32_t valA4;
        void* objC1;
        valA4 = Sys_CheckHeap_16(&v_104);
        int32_t* valA5;

        if (!valA4)
            valA5 = &ctxB[0x44];
        else
        {
            void* v_194_5 = &v_104;
            valA5 = Resource_Load(valA4, &v_104, objC1, nullptr);
        }

        Sys_FreeMemory_18((*(int32_t*)(uintptr_t)(srcS + 0x4e0)), valA5);
        int32_t valA7 = Sys_CheckHeap_21((*(int32_t*)(uintptr_t)(srcS + 0x4e0)));
        long double x87_r7_8 = Sys_AllocateMemory_22((*(int32_t*)(uintptr_t)(srcS + 0x4e0)));
        (*(int32_t*)(uintptr_t)(*(srcS + 0x4e0) + 4)) = objC * 0.984375.0f - valA7;
        (*(int32_t*)(uintptr_t)(*(srcS + 0x4e0) + 8)) = tmpD * 0.895833313.0f - 2.0f - x87_r7_8;
        Sys_CloseFileStream_18((*(int32_t*)(uintptr_t)(srcS + 0x4e0)));
        v_180 = Sys_CheckHeap_21((*(int32_t*)(uintptr_t)(srcS + 0x4e0)));
    }

    int32_t valA13 = *ctxB - 1;

    if (valA13 <= 0x29)
    {
        int32_t tmpD4 = 0;
        tmpD4 = lookup_table_47a234[valA13];
        int32_t* dstD2;

        switch (tmpD4)
        {
            case 0:
            {
                dstD2 = srcS + 0x254;
                goto label_479f3c;
            }
            case 1:
            {
                dstD2 = srcS + 0x20c;
                goto label_479f3c;
            }
            case 2:
            {
                dstD2 = srcS + 0x2cc;
                goto label_479f3c;
            }
            case 3:
            {
                dstD2 = srcS + 0x1c4;
    label_479f3c: ;
                if (dstD2)
                {
                    Sys_ResolveSymbol_14(dstD2, objC * 0.984375.0f - Sys_CloseFileStream_17(dstD2),
                        tmpD * 0.895833313.0f - 2.0f - 2.0f - Sys_ExecuteBytecode_17(dstD2)
                            - Sys_AllocateMemory_22((*(int32_t*)(uintptr_t)(srcS + 0x4e0))),
                        128.0f, 128.0f, 128.0f, 0, 0, 0);
                    v_17c = Sys_CloseFileStream_17(dstD2);
                }
                break;
            }
            case 4:
            {
                dstD2 = srcS + 0x374;
                goto label_479f3c;
            }
            case 5:
            {
                dstD2 = srcS + 0x2e4;
                goto label_479f3c;
            }
            case 6:
            {
                dstD2 = srcS + 0x32c;
                goto label_479f3c;
            }
            case 7:
            {
                dstD2 = srcS + 0x284;
                goto label_479f3c;
            }
            case 8:
            {
                dstD2 = srcS + 0x314;
                goto label_479f3c;
            }
            case 9:
            {
                dstD2 = srcS + 0x224;
                goto label_479f3c;
            }
            case 0xa:
            {
                dstD2 = srcS + 0x2b4;
                goto label_479f3c;
            }
            case 0xb:
            {
                dstD2 = srcS + 0x344;
                goto label_479f3c;
            }
            case 0xc:
            {
                dstD2 = srcS + 0x23c;
                goto label_479f3c;
            }
            case 0xd:
            {
                dstD2 = srcS + 0x2fc;
                goto label_479f3c;
            }
            case 0xe:
            {
                dstD2 = srcS + 0x1dc;
                goto label_479f3c;
            }
            case 0xf:
            {
                dstD2 = srcS + 0x26c;
                goto label_479f3c;
            }
            case 0x10:
            {
                dstD2 = srcS + 0x1f4;
                goto label_479f3c;
            }
            case 0x11:
            {
                dstD2 = srcS + 0x35c;
                goto label_479f3c;
            }
        }
    }

    int32_t result = ctxB[0x186];

    if (result)
    {
        g_a84a50 = 0;
        float v_14c;
        float* v_150_1 = &v_14c;
        g_a84a58 = 0;
        int32_t v_134_1 = 0;
        int32_t v_130;
        __builtin_strncpy(&v_130, "fff?", 8);
        int32_t v_138_1 = 0x3f000000;
        int32_t v_140_1 = 0;
        int32_t v_13c_1 = 0;
        v_14c = objC * 0.984375.0f;
        int32_t v_144_1 = 0x3f800000;
        int32_t v_110_1 = 0;
        int32_t v_10c;
        __builtin_strncpy(&v_10c, "fff?", 8);
        long double x87_r7_27 = tmpD * 0.895833313.0f;
        int32_t v_114_1 = 0x3f000000;
        int32_t v_11c_1 = 0;
        int32_t v_118_1 = 0;
        int32_t v_120_1 = 0x3f800000;
        int32_t v_160 = 1;
        int32_t v_158_1 = 0xffffffff;
        float v_148_1 = x87_r7_27;
        long double x87_r6_1 = v_180;
        long double f0_1 = v_17c;
        x87_r6_1 - f0_1;
        int32_t v_154_1 = 2;
        int32_t v_15c_1 = 0x80000;
        long double x87_r6_3;

        x87_r6_3 = *(&((x87_r6_1 < f0_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_1, f0_1) ? 1 : 0) << 0xa | (x87_r6_1 == f0_1 ? 1 : 0) << 0xe
            | 0x3800) + 1) & 0x41 ? v_17c : v_180 + 3.0f;

        float v_128_1 = v_14c - x87_r6_3;
        float v_124_1 = x87_r7_27;
        result = ((int(*)())(uintptr_t)(*((g_a84a54 << 2) + &g_a94e84)))(&v_160);
    }

    if (ctxB[0x185] != 1)
        return result;

    float v_168_1 = g_c28b44 * 0.5.0f;
    float v_164_1 = g_c28b48 * 0.5.0f;
    float v_180_4 = Sys_CloseFileStream_17(srcS + 0x74) * 0.5.0f;
    int32_t valA22;
    int32_t objC6;
    valA22 = Sys_ExecuteBytecode_17(srcS + 0x74);
    int32_t v_17c_6 = valA22;
    int32_t v_1ac_1 = objC6;
    v_17c_6 = v_17c_6 * 0.5.0f;
    int32_t v_17c_7 = v_17c_6;
    float v_1ac_2 = v_164_1 - v_17c_7;
    v_17c_7 = v_180_4;
    int32_t v_1b0_1 = v_17c_7;
    return Sys_CheckHeap_14(srcS + 0x74, v_168_1 - v_17c_7, v_1ac_2, 128.0f, 128.0f, 128.0f, 0, 0, 0,
        0x3f800000);
}
