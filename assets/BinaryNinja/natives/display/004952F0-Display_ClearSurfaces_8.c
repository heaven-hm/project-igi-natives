// Original IGI.EXE function: Display_ClearSurfaces_8 (VA 0x004952F0; static CFG gate PASS, CFG score 0.852).
#include "Display_ClearSurfaces_8.h"
int32_t Display_ClearSurfaces_8()

{
    g_6840e9 = 0;
    Display_CheckCapabilities_8(0x5ca1b8);
    g_67a4a0 = 0xffffd8f0;
    int32_t item_b8 = 0x2710;

    for (int32_t* i = &g_6840e0; i > &g_67a4a0; )
    {
        long double fp1_1;
        bool c1_1;
        fp1_1 = __fyl2x(item_b8 * 0.0001, 0.69314718048553914 + 7.4406171098029793e-11);
        int32_t data_1 = fp1_1 * 1442.6950408888495;

        if (data_1 < 0xffffd8f0)
            data_1 = 0xffffd8f0;
        else if (data_1 > 0)
            data_1 = 0;

        *i = data_1;
        i -= 4;
        item_b8 -= 1;
    }

    int32_t data_2 = Ordinal_DSOUND_1(0, &g_67a498, 0);

    if (!data_2)
    {
        int32_t source_3 = **&g_67a498;
        int32_t data_4 = FX_ExplosionSpawn_22();

        if (!(*(source_3 + 0x18))(g_67a498, data_4, 3))
        {
            int32_t* data_6 = g_67a498;
            int32_t item_60 = 0x60;

            if ((*(*data_6 + 0x10))(data_6, &item_60))
            {
                int32_t* data_8 = g_67a498;
                int32_t data_9 = (*(*data_8 + 8))(data_8);
                g_67a498 = 0;
                return data_9;
            }

            int32_t item_84;
            memset(&item_84, 0, 0x24);
            g_6840ea = 0;
            memset(&item_84, 0, 0x24);
            int32_t* data_10 = g_67a498;
            int32_t item_5c;
            g_543900 = item_5c >> 1 & 1;
            item_84 = 0x24;
            int32_t item_80_1 = 9;

            if ((*(*data_10 + 0xc))(data_10, &item_84, &g_5ca154, 0))
            {
                int32_t* data_12 = g_67a498;
                int32_t data_13 = (*(*data_12 + 8))(data_12);
                g_67a498 = 0;
                return data_13;
            }

            int32_t* data_14 = g_5ca154;
            int32_t item_a0 = 0;
            item_a0 = 0x14;
            int32_t item_9c_1 = 0;
            int32_t item_98_1 = 0;
            int32_t item_94_1 = 0;
            int32_t item_90_1 = 0;
            int32_t data_15 = (*(*data_14 + 0xc))(data_14, &item_a0);

            if (!data_15)
            {
                int32_t item_b0_1 = 0x5622;
                data_15 = g_543900;
                g_676e50 = 1;
                int32_t data_17 = item_5c;
                data_17 &= 8;
                g_5ca134 = 0x20;
                char f1_1 = data_17;
                data_17 = -(data_17);
                int16_t item_a4_1 = 0x12;
                int16_t item_b4 = 1;
                uint16_t item_a6_1 = ((data_17 - data_17) & 8) + 8;
                int16_t item_a8 = ((((data_17 - data_17) & 8) + 8) >> 3) * (data_15 + 1);
                int32_t* data_26 = g_5ca154;
                uint32_t item_ac_1 = item_a8 * 0x5622;
                bool flag_1_1 = !(*(*data_26 + 0x38))(data_26, &item_b4);
                int32_t* data_28 = g_5ca154;
                int32_t temp_5 = *data_28;

                if (!flag_1_1)
                {
                    (*(temp_5 + 8))(data_28);
                    int32_t* data_29 = g_67a498;
                    int32_t data_30 = (*(*data_29 + 8))(data_29);
                    g_67a498 = 0;
                    return data_30;
                }

                if (!(*(temp_5 + 0x30))(data_28, 0, 0, 1))
                {
                    void* data_35 = Mem_Alloc(g_5ca134 * 0x4c, 4);
                    int32_t data_36 = g_5ca134;
                    g_6840f0 = data_35;
                    int32_t source_4 = 0;
                    int32_t data_37 = 0;
                    int32_t entity_18 = data_36 * 0x4c;
                    memset(memset(data_35, 0, entity_18 & 0xfffffffc), 0,
                        entity_18 & 3);

                    if (g_5ca134 > 0)
                    {
                        void* dest_2 = nullptr;

                        do
                        {
                            Display_SetGammaRamp_8(dest_2 + g_6840f0, &g_6840f8);
                            data_37 = g_5ca134;
                            source_4 += 1;
                            dest_2 += 0x4c;
                        } while (source_4 < data_37);
                    }

                    g_6840f4 = 0;
                    g_6840e9 = 1;
                    return data_37;
                }
            }

            int32_t* data_32 = g_5ca154;
            (*(*data_32 + 8))(data_32);
        }

        int32_t* data_33 = g_67a498;
        data_2 = (*(*data_33 + 8))(data_33);
    }

    g_67a498 = 0;
    return data_2;
}
