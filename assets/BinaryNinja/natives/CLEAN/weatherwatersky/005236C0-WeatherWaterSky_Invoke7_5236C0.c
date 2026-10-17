// IGI native provenance: WeatherWaterSky_Invoke7_5236C0 - 0x005236C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005236C0-WeatherWaterSky_Invoke7_5236C0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_Invoke7_5236C0.h"

int32_t __convention("regparm") WeatherWaterSky_Invoke7_5236C0(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4)

{
    int32_t* var_4 = arg3;
    int32_t i = 0;
    int32_t* dest_ptr = *(arg4 + 0x88);
    DynObj_RemoveSymbol_7(g_a44344, arg4, 0);
    int32_t* eax_1 = *(arg4 + 0xc8);

    if (eax_1)
    {
        Light_SetLightColor_2(eax_1);
        *(arg4 + 0xc8) = 0;
    }

    void* context_val = *(arg4 + 0x14);

    if (dest_ptr)
    {
        if (*dest_ptr > 0)
        {
            int32_t* esi_1 = &dest_ptr[6];

            do
            {
                void* eax_2 = *esi_1;

                if (eax_2)
                {
                    Light_SampleLightmap_2(eax_2);
                    *esi_1 = 0;
                }

                i += 1;
                esi_1 = &esi_1[9];
            } while (i < *dest_ptr);
        }

        var_4 = dest_ptr;
        uint32_t eax_5 = DynObj_FindSymbol_16();
        int32_t eax_6 = 0;
        eax_6 = *(context_val + 0x1c);
        (*(((eax_5 * 0x180 + eax_6) << 2) + &g_a96ae0))(context_val, &var_4);
    }

    int32_t* esi_2 = data_a83a14;
    int32_t ecx_2 = *(*(arg4 + 0x74) + esi_2);
    int32_t a83a08_1 = g_a83a08 - 1;
    g_a83a08 = a83a08_1;

    if (ecx_2 != a83a08_1)
    {
        int32_t a83a04_1 = g_a83a04;
        int32_t eax_12 = *(a83a04_1 + (a83a08_1 << 2)) * g_a83a10 + g_a83a00;
        int32_t edi_2 = *(a83a04_1 + (ecx_2 << 2));
        int32_t esi_3 = *(esi_2 + eax_12);
        *(a83a04_1 + (ecx_2 << 2)) = *(a83a04_1 + (esi_3 << 2));
        *(g_a83a04 + (esi_3 << 2)) = edi_2;
        *(data_a83a14 + eax_12) = ecx_2;
        a83a08_1 = g_a83a08;
    }

    if (!a83a08_1)
    {
        Light_LightmapsRes();
        a83a08_1 = Sys_CheckHeap_16(0xa83b54);

        if (a83a08_1)
        {
            Light_LightmapsRes();
            return Resource_Unload(0xa83b54);
        }
    }

    return a83a08_1;
}
