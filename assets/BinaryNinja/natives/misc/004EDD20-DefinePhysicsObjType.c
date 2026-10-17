// IGI native provenance: DefinePhysicsObjType - 0x004EDD20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EDD20-DefinePhysicsObjType.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DefinePhysicsObjType.h"
int32_t DefinePhysicsObjType(long double context , long double param_2 , long double param_3 , long double param_4 , int32_t param_5, char* param_6 )

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
    int32_t data_val = g_a5efd8;
    int32_t entity_val = data_val * 5;
    float dest_val = param_6;
    int32_t item_30 = 0;
    *(((data_val + entity_val * 0x12) << 3) + 0xa5f2b4) = 0;
    *(((data_val + entity_val * 0x12) << 3) + &g_a5efe0) = Script_GetArg(dest_val, item_30);
    *(((data_val + entity_val * 0x12) << 3) + 0xa5efe4) = Script_GetArg(dest_val, 1);
    Profile_ValueSet(dest_val, 2.80259693e-45.0f);
    *(((data_val + entity_val * 0x12) << 3) + 0xa5efe8) = context;
    Profile_ValueSet(dest_val, 4.20389539e-45.0f);
    *(((data_val + entity_val * 0x12) << 3) + 0xa5efec) = param_2;
    Profile_ValueSet(dest_val, 5.60519386e-45.0f);
    *(((data_val + entity_val * 0x12) << 3) + 0xa5eff0) = param_3;
    Profile_ValueSet(dest_val, 7.00649232e-45.0f);
    *(((data_val + entity_val * 0x12) << 3) + 0xa5eff4) = param_4;
    int16_t idx = 4;
    Sys_ResolveSymbol_23(dest_val, 6, ((data_val + entity_val * 0x12) << 3) + 0xa5eff8, 0x20);
    item_30 = 0x100;
    Sys_ResolveSymbol_23(dest_val, 7, ((data_val + entity_val * 0x12) << 3) + 0xa5f018, item_30);
    char* source_val = ((data_val + entity_val * 0x12) << 3) + &g_a5f118;
    char* item_1c = source_val;
    Sys_ResolveSymbol_23(dest_val, 8, source_val, 0x10);
    int32_t data_4 = g_a5efd8;
    int32_t entity_3 = 0;

    if (data_4 > 0)
    {
        char* flagP1 = &g_a5f118;
        param_6 = &g_a5f118;

        while (true)
        {
            char temp_1 = *source_val;
            data_4 = temp_1;
            char f0_1 = *flagP1;
            bool c_1 = temp_1 < f0_1;
            int32_t data_6;

            if (temp_1 != f0_1)
                data_6 = data_4 - data_4 + 1;
            else if (!data_4)
                data_6 = 0;
            else
            {
                temp_1 = source_val[1];
                data_4 = temp_1;
                char f3_1 = flagP1[1];
                c_1 = temp_1 < f3_1;

                if (temp_1 != f3_1)
                    data_6 = data_4 - data_4 + 1;
                else
                {
                    source_val = &source_val[2];
                    flagP1 = &flagP1[2];

                    if (data_4)
                        continue;

                    data_6 = 0;
                }
            }

            if (!data_6)
            {
                item_30 = item_1c;
                Error_Show("Physics obj model %s is defined multiple times.");

                while (true)
                    /* nop */
            }
            else
            {
                data_4 = g_a5efd8;
                entity_3 += 1;
                flagP1 = &param_6[0x2d8];
                param_6 = flagP1;

                if (entity_3 >= data_4)
                    break;

                source_val = item_1c;
            }
        }
    }

    item_30 = 9;
    int32_t source_1 = 0xa;
    int32_t data_7 = Script_GetArg(dest_val, item_30);
    *(((data_val + entity_val * 0x12) << 3) + 0xa5f128) = data_7;
    param_6 = nullptr;

    if (data_7 > 0)
    {
        int32_t* flagP3 = ((data_val + entity_val * 0x12) << 3) + 0xa5f130;
        bool flag_1_1;

        do
        {
            item_30 = source_1;
            flagP3[-1] = Script_GetArg(dest_val, item_30);
            *flagP3 = Script_GetArg(dest_val, source_1 + 1);
            flagP3[1] = Script_GetArg(dest_val, source_1 + 2);
            Profile_ValueSet(dest_val, source_1 + 3);
🚫🚫🚫            flagP3[2] = /* flagP3[2] = unimplemented  {fstp dword [flagP+0x8], fp0} */;
            /* unimplemented  {fstp dword [flagP+0x8], fp0} */
            float source_6 = source_1 + 5;
            Profile_ValueSet(dest_val, source_1 + 4);
🚫🚫🚫            flagP3[3] = /* flagP3[3] = unimplemented  {fstp dword [flagP+0xc], fp0} */;
            /* unimplemented  {fstp dword [flagP+0xc], fp0} */
            source_1 = source_6 + 1;
            Profile_ValueSet(dest_val, source_6);
            char* data_17 = param_6;
🚫🚫🚫            flagP3[4] = /* flagP3[4] = unimplemented  {fstp dword [flagP+0x10], fp0} */;
            /* unimplemented  {fstp dword [flagP+0x10], fp0} */
            idx += 3;
            flagP3 = &flagP3[6];
            flag_1_1 = &data_17[1] < *(((data_val + entity_val * 0x12) << 3) + 0xa5f128);
            param_6 = &data_17[1];
        } while (flag_1_1);
    }

    item_30 = source_1;
    Profile_ValueSet(dest_val, item_30);
🚫🚫🚫    *(((data_val + entity_val * 0x12) << 3) + 0xa5f2ac) = /* *(((data_val + entity_val * 0x12) << 3) + 0xa5f2ac) =
        unimplemented  {fstp dword [context_val+0x2cc], fp0} */;
    /* unimplemented  {fstp dword [context_val+0x2cc], fp0} */
    Profile_ValueSet(dest_val, source_1 + 1);
🚫🚫🚫    *(((data_val + entity_val * 0x12) << 3) + 0xa5f2b0) = /* *(((data_val + entity_val * 0x12) << 3) + 0xa5f2b0) =
        unimplemented  {fstp dword [context_val+0x2d0], fp0} */;
    /* unimplemented  {fstp dword [context_val+0x2d0], fp0} */
    int32_t data_20 = 0;
    *(((data_val + entity_val * 0x12) << 3) + 0xa5f2b4) = 0;
    data_20 = g_54dc31;
    int32_t temp_2 = 0;
    temp_2 = *(((data_val + entity_val * 0x12) << 3) + &g_a5efe0);
    int32_t data_21 = *(((data_20 * 0x180 + temp_2) << 2) + &g_a96ae0);
    void* item_18;

    if (data_21)
    {
        item_30 = &param_6;
        data_21(0, item_30);
        void* data_22 = Mem_Alloc(param_6, 4);
        *(((data_val + entity_val * 0x12) << 3) + 0xa5f2b4) = data_22;
        item_18 = data_22;
        int32_t entity_8 = 0;
        entity_8 = *(((data_val + entity_val * 0x12) << 3) + &g_a5efe0);
        float item_14_1 = dest_val;
        int32_t item_10_1 = source_1 + 2;
        (*(((*g_54dc30 * 0x180 + entity_8) << 2) + &g_a96ae0))(0, &item_18);
    }

    g_a5efd8 += 1;
    item_18 = 1;
    int32_t item_10_2 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(param_5, &item_18, 0x18);
    return param_5;
}
