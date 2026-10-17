// Original IGI.EXE function: Script_VisibleCubesD (VA 0x004F7990; static CFG gate PASS, CFG score 0.944).
#include "Script_VisibleCubesD.h"
int32_t Script_VisibleCubesD(void* context)

{
    void* dest_val = context;
    int32_t item_7bc = 7;
    long double fpu_val_7_1 = *(dest_val + 0x2c7c) * 7.0f;
    g_a76c88 = 0;
    void* source_val = dest_val + 0x68;
    float item_7b4 = fpu_val_7_1;
    int16_t idx = 0;
    bool flag_1_1;

    do
    {
        int32_t item_7c0_1 = 7;
        bool flag_0_1;

        do
        {
            int32_t i_4 = 7;
            int32_t i;

            do
            {
🚫🚫                Script_ParseEnumString_20(dest_val, source_val, item_7b4);
                idx -= 3;
                /* unimplemented  {call Script_ParseEnumString_20} */
                Script_ExecuteLevelScript_20(dest_val, source_val);
                source_val += 0x20;
                i = i_4;
                i_4 -= 1;
            } while (i != 1);
            flag_0_1 = item_7c0_1 != 1;
            item_7c0_1 -= 1;
        } while (flag_0_1);
        flag_1_1 = item_7bc != 1;
        item_7bc -= 1;
    } while (flag_1_1);

    if (!*(dest_val + 0x2cb4))
    {
        int32_t* i_5 = nullptr;
        void* entity_1 = dest_val + 0x128;
        int32_t item_7c0_2 = 0;
        bool flag_3_1;

        do
        {
            item_7b4 = 0.0f;
            int32_t saved_target;
            int32_t* temp_1 = &(&saved_target)[i_5 * 2 + 0x6a];
            double* data_8 = &(&saved_target)[i_5 * 6 + 0xd0];
            int32_t* item_7bc_1 = entity_1 - 0xa4;
            void* item_7b8_1 = entity_1;
            bool flag_2_1;

            do
            {
                int32_t* source_2 = item_7bc_1;
                int32_t entity_2 = 0;

                while (!*source_2)
                {
                    entity_2 += 1;
                    source_2 = &source_2[8];

                    if (entity_2 >= 7)
                        break;
                }

                if (entity_2 != 7)
                {
                    i_5 += 1;
                    memcpy(&data_8[-2], item_7b8_1, 0x18);
🚫🚫                    /* unimplemented  {fld fp0, qword [data_val]} */
🚫🚫                    /* unimplemented  {fadd qword [&g_534b88]} */
🚫🚫🚫                    *data_8 =
                    /* unimplemented  {fstp qword [data_val], fp0} */
                    dest_val = context;
                    (&item_7b4)[i_5] = item_7c0_2;
                    void item_6f0;
                    *(&item_6f0 + (i_5 << 2)) = item_7b4;
                    *temp_1 = 0;
                    temp_1[1] = 0xc1190000;
                    data_8 = &data_8[3];
                    temp_1 = &temp_1[2];
                }

                item_7b8_1 += 0xe0;
                flag_2_1 = item_7b4 + 1 < 7;
                item_7b4 += 1;
                item_7bc_1 = &item_7bc_1[0x38];
            } while (flag_2_1);
            entity_1 = item_7b8_1;
            flag_3_1 = item_7c0_2 + 1 < 7;
            item_7c0_2 += 1;
        } while (flag_3_1);
        int32_t* i_1 = i_5;

        if (i_5 > 0)
        {
            void item_4a0;
            double* item_7c0_3 = &item_4a0;
            void item_628;
            double* dest_2 = &item_628;
            int32_t* item_7bc_2 = context + 0x2d18;

            do
            {
                int32_t* i_3 = 0x13;

                if (i_1 <= 0x13)
                    i_3 = i_1;

                DynObj_UpdateDynTree_10(g_a44344, item_7bc_2, item_7c0_3, i_3, dest_2, 0xff, nullptr,
                    0xffffffff);
                i_1 -= 0x13;
                dest_2 = &dest_2[0x13];
                item_7c0_3 = &item_7c0_3[0x39];
                item_7bc_2 = &item_7bc_2[0x214];
            } while (i_1 > 0);

            dest_val = context;
        }

        int32_t temp_5 = 0;

        if (i_5 > 0)
        {
            double* item_7b8_2 = dest_val + 0x2d30;

            do
            {
                if (item_7b8_2[8])
                {
                    int32_t i_6 = 7;
                    int32_t item_7b0[0x30];
                    int32_t item_6ec[0x31];
                    int32_t* entity_17 = (item_7b0[temp_5] * 7 + item_6ec[temp_5]) * 0xe0 + dest_val + 0x84;
                    int32_t i_2;

                    do
                    {
🚫🚫                        /* unimplemented  {fld fp0, dword [dest_val+0x2c7c]} */
🚫🚫                        /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫                        /* unimplemented  {fsubr fp0, qword [entity_val-0xc]} */
⋯                        long double f3_1 = *item_7b8_2;
                        /* unimplemented  {fcomp fp0, qword [data_val]} f- f3_1 */ - f3_1;
                        bool c0_1 = /* bool c0_1 =
                            unimplemented  {fcomp fp0, qword [data_val]} f< f3_1 */ < f3_1;
                        bool c2_1 = FCMP_UO(/* bool c2_1 =
                            is_unordered.t(unimplemented  {fcomp fp0, qword [data_val]}, f3_1) */,
                            f3_1);
                        bool c3_1 = /* bool c3_1 =
                            unimplemented  {fcomp fp0, qword [data_val]} f== f3_1 */ == f3_1;
                        /* unimplemented  {fcomp fp0, qword [data_val]} */

                        if (*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                                | (idx & 7) << 0xb) + 1) & 1)
                            *entity_17 = 0;

                        entity_17 = &entity_17[8];
                        i_2 = i_6;
                        i_6 -= 1;
                    } while (i_2 != 1);
                }

                temp_5 += 1;
                item_7b8_2 = &item_7b8_2[0xe];
            } while (temp_5 < i_5);
        }

        *(dest_val + 0x2d10) = Script_ParseEnumReal32_20(dest_val);
        *(dest_val + 0x4288) = i_5;
    }

    int32_t item_7d4_3 = g_a76c88;
    return SoundSys_Update3DPosition_11("Visible Cubes: %d\n");
}
