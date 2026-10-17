// Original IGI.EXE function: ParticleSystemDynCubeObj_LoadParameters (VA 0x00530CD0; static CFG gate FAIL, CFG score 0.778).
#include "ParticleSystemDynCubeObj_LoadParameters.h"
int32_t ParticleSystemDynCubeObj_LoadParameters(void* context)

{
    if (*(context + 0xb4))
    {
        memcpy(context + 0x88, &g_bcab08, 0x18);
        *(context + 0xb4) = 0;
    }

    *(context + 0xa0) = g_bcab08 - *(context + 0x88);
    int32_t data_1 = *(context + 0xac);
    *(context + 0xa4) = g_bcab10 - *(context + 0x90);
    *(context + 0xa8) = g_bcab18 - *(context + 0x98);
    memcpy(context + 0x88, &g_bcab08, 0x18);

    if (data_1)
        data_1(context);

    int32_t item_74 = 0;
    int32_t data_3 = ~*(context + 0x70);
    int32_t source_1 = g_bcab10 & data_3;
    int32_t item_40 = source_1;
    int32_t entity_1 = g_bcab18 & data_3;
    int32_t result = *(context + 0x78);
    int32_t entity_2 = *(context + 0x6c);
    int32_t result_1 = result;

    if (entity_2 * 2 - 1 > 0)
    {
        int32_t entity_3 = entity_2 * result;
        int32_t item_7c_1 = entity_3;
        int32_t dest_5 = -(result);
        int32_t item_80_1 = (g_bcab08 & data_3) + entity_3;
        int32_t result_2 = entity_2 * 2 - 1;

        while (true)
        {
            int32_t item_84_1 = entity_3 + source_1;
            int32_t dest_7 = -(result);
            int32_t item_64_1 = entity_2 * 2 - 1;

            while (true)
            {
                int32_t data_4;
                int32_t temp_6;
                temp_6 = HIGHD(result);
                data_4 = LOWD(result);
                double item_58_1 = item_80_1;
                double item_50_3 = item_84_1;
                int32_t source_5 = ((data_4 - temp_6) >> 1) + entity_3 + entity_1;
                int32_t item_70_1 = source_5;
                int32_t item_68_1 = entity_2 * 2 - 1;
                bool flag_2_1;

                do
                {
                    int32_t item_1c_1 = *(&item_58_1 + 4);
                    long double fpu_val_7_11 = item_70_1;
                    float temp_8 = *(context + 0x84);
                    int32_t item_18_1 = item_50_3;
                    int32_t item_20 = item_58_1;
                    item_70_1 = fpu_val_7_11;
                    double item_10_1 = fpu_val_7_11;
                    int32_t item_14_1 = *(&item_50_3 + 4);

                    if (Particle_FadeParticles_3(&item_20, temp_8))
                    {
                        int32_t item_38 = item_58_1;
                        int32_t item_34_1 = *(&item_58_1 + 4);
                        int32_t item_2c_1 = *(&item_50_3 + 4);
                        int32_t item_30_1 = item_50_3;
                        int32_t item_28_1 = item_70_1;
                        int32_t item_6c;
                        int32_t item_24_1 = item_6c;
                        (*(context + 0xb0))(context, &item_38);
                        item_74 += 1;
                    }

                    source_5 += dest_7;
                    flag_2_1 = item_68_1 != 1;
                    item_70_1 = source_5;
                    item_68_1 -= 1;
                } while (flag_2_1);
                bool flag_3_1 = item_64_1 != 1;
                item_84_1 += dest_7;
                item_64_1 -= 1;

                if (!flag_3_1)
                    break;

                entity_3 = item_7c_1;
                result = result_1;
            }

            result = result_2 - 1;
            bool flag_4_1 = result_2 != 1;
            item_80_1 += dest_5;
            result_2 = result;

            if (!flag_4_1)
                break;

            source_1 = item_40;
            entity_3 = item_7c_1;
            result = result_1;
        }
    }

    return result;
}
