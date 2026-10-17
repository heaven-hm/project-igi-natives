// IGI native provenance: WeatherWaterSky_Invoke11 - 0x0051FD60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051FD60-WeatherWaterSky_Invoke11.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_Invoke11.h"

int32_t WeatherWaterSky_Invoke11(float arg1, char* arg2)

{
    int32_t context_val;
    int32_t var_4_1 = context_val;
    float dest_ptr = arg1;
    int32_t var_4 = 1;
    float* base_val = dest_ptr + 0x16c;
    double* frame_ptr = dest_ptr + 0x138;
    bool cond:0_1;

    do
    {
        if (!Sys_ResolveSymbol_11(frame_ptr, &frame_ptr[-6]))
        {
        label_51fdbf:
            __builtin_memcpy(frame_ptr, &frame_ptr[-6], 0x18);
            *base_val = base_val[-6];
            base_val[2] = base_val[-4];
            dest_ptr = arg1;
            base_val[4] = base_val[-2];
            *(arg1 + 0x1a0) = var_4;
        }
        else
        {
            long double x87_r7_1 = base_val[-6];
            long double temp0_1 = *base_val;
            x87_r7_1 - temp0_1;

            if (!(*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_51fdbf;

            long double x87_r7_2 = base_val[-4];
            long double temp1_1 = base_val[2];
            x87_r7_2 - temp1_1;

            if (!(*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_51fdbf;

            long double x87_r7_3 = base_val[-2];
            long double temp2_1 = base_val[4];
            x87_r7_3 - temp2_1;

            if (!(*(&((x87_r7_3 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_3, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_51fdbf;
        }

        frame_ptr -= 0x18;
        base_val -= 4;
        cond:0_1 = var_4 - 1 >= 0;
        var_4 -= 1;
    } while (cond:0_1);
    DynObj_CreateMagicObject_5(dest_ptr, DynObj_Missing(dest_ptr + 0x180));
    Terrain_BuildMipMaps_11(dest_ptr, dest_ptr, 1);
    QTask_CleanupTypes(*(dest_ptr + 0xe8));
    Car_GunCreate(*(dest_ptr + 0xe8), dest_ptr, dest_ptr);

    if (!arg2 || !*arg2)
    {
        int32_t* i = *(dest_ptr + 8);

        if (*i && i)
        {
            int32_t afa7e0_1 = g_afa7e0;

            do
            {
                int32_t* edx_3 = *i;
                void* eax_13;

                if (!edx_3)
                    eax_13 = nullptr;
                else
                {
                    int32_t eax_10 = *edx_3;
                    int32_t eax_11 = -(eax_10);
                    eax_13 = (eax_11 - eax_11) & edx_3;
                }

                *((afa7e0_1 << 2) + &g_afa6e0) = eax_13;
                g_afa7e0 = afa7e0_1 + 1;
                uint32_t eax_15 = Script_ParseEnumReal32_8();
                int32_t edx_4 = 0;
                edx_4 = i[7];
                int32_t eax_16 = *(((eax_15 * 0x180 + edx_4) << 2) + &g_a96ae0);

                if (eax_16)
                    eax_16(i, 0);

                afa7e0_1 = g_afa7e0 - 1;
                g_afa7e0 = afa7e0_1;
                i = *((afa7e0_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    Script_Isexists(dest_ptr + 0x1b4, dest_ptr);
    return 0;
}
