#include "004045B0-Config_GraphicOptionsGetResolution.h"
/* 0x004045b0 Config_GraphicOptionsGetResolution full linked: callers=0 callees=5 */
int32_t Config_GraphicOptionsGetResolution(int32_t a1, float a2 @ 0xc)

// Sig: int Config_GraphicOptionsGetResolution()
// Note: Returns the active profile's display-mode/resolution index (same index
// space as Config_GraphicOptionsSetResolution). Use in video-options UI scripts
// to preselect the current value.
{
    int32_t eax_1 = sub_4b8a20(a2, 0);
    int32_t ebp = *Config_GetActiveGraphicOptions();
    int32_t ecx = *(Config_GetActiveGraphicOptions() + 4);
    int32_t edx = *(Config_GetActiveGraphicOptions() + 8);
    int32_t* ebx = nullptr;
    int32_t eax_8 = eax_1 * 0x404;
    int32_t edi = 0x7fffffff;
    int32_t* esi_1 = eax_8 + 0x567d98;
    float eax_9 = *(eax_8 + &g_568098);

    if (eax_9 > 0)
    {
        a2 = eax_9;
        bool cond:0_1;

        do
        {
            int32_t eax_12;
            int32_t edx_1;
            edx_1 = HIGHD(esi_1[1] - ecx);
            eax_12 = LOWD(esi_1[1] - ecx);
            int32_t eax_15;
            int32_t edx_2;
            edx_2 = HIGHD(*esi_1 - ebp);
            eax_15 = LOWD(*esi_1 - ebp);
            int32_t eax_20;
            int32_t edx_4;
            edx_4 = HIGHD(esi_1[2] - edx);
            eax_20 = LOWD(esi_1[2] - edx);
            int32_t ecx_6 = ((eax_12 ^ edx_1) - edx_1) * ((eax_15 ^ edx_2) - edx_2)
                + (((eax_20 ^ edx_4) - edx_4) << 0x18);

            if (ecx_6 < edi)
            {
                ebx = esi_1;
                edi = ecx_6;
            }

            esi_1 = &esi_1[3];
            cond:0_1 = a2 != 1;
            a2 -= 1;
        } while (cond:0_1);
    }

    char* var_8 = &g_567c74;
    float eax_30 = (ebx[2] << 0xd | *ebx) << 0xd | ebx[1];
    float var_18 = eax_30;
    double var_10 = eax_30;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
