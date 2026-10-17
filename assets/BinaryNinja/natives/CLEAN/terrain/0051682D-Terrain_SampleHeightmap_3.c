// IGI native provenance: Terrain_SampleHeightmap_3 - 0x0051682D - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051682D-Terrain_SampleHeightmap_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_SampleHeightmap_3.h"
long double Terrain_SampleHeightmap_3(int32_t context, int16_t param_2 , long double param_3 , int32_t param_4 , int32_t param_5 )

{
    int32_t temp_val;
    int32_t item_4 = temp_val;
    int16_t x87status;
    int16_t f0;
    f0 = __fnstcw_memmem16(param_2);
    item_4 = f0;
    long double result;
    bool z;

    if (z)
    {
        int32_t data_2;

        if (context & 0xfffff || param_4)
        {
            long double result_1;
            result_1 = __convertTOStoQNaN(context, param_3);
            result = result_1;
        }
        else
        {
        label_5168b1:
            result = g_5443b0;
            data_2 = 1;
        }

        if (!g_936058)
            return __startOneArgErrorHandling(data_2, 0xd, result, param_4, param_5);
    }
    else
    {
        if (item_4 != 0x27f)
            __load_CW(item_4);

        bool c1;

        if (context >= 0x3ff00000)
        {
            if (context > 0x3ff00000 || (param_5 & 0xfffff) | param_4)
                goto label_5168b1;

            result = !(param_5 & 0x80000000) ? 0 : 3.1415926534682512 + 1.2154201012607932e-10;
        }
        else
        {
            long double result_2;
            result_2 = __fpatan(param_3, sqrtl((1 + param_3) * (1 - param_3)));
            result = result_2;
        }

        if (!g_936058)
        {
            int16_t data_3 = item_4;

            if (data_3 != 0x27f)
            {
                bool c0;
                bool c2;
                bool c3;

                if (data_3 & 0x20 && ((c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa
                        | (c3 ? 1 : 0) << 0xe) & 0x20)
                    return __startOneArgErrorHandling(8, 0xd, result, param_4, param_5);

                int16_t x87control_1;
                int16_t x87status_2;
                x87control_1 = __fldcw_memmem16(item_4);
            }

            return result;
        }
    }

    int16_t fpu_control;
    int16_t x87status_1;

    if (item_4 != 0x27f)
        fpu_control = __fldcw_memmem16(item_4);
    return result;
}
