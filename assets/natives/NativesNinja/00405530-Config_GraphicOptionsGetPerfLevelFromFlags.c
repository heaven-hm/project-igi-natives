#include "00405530-Config_GraphicOptionsGetPerfLevelFromFlags.h"
/* 0x00405530 Config_GraphicOptionsGetPerfLevelFromFlags full linked: callers=0 callees=2 */
int32_t Config_GraphicOptionsGetPerfLevelFromFlags(int32_t a1, float a2 @ 0xc)

// Sig: int Config_GraphicOptionsGetPerfLevelFromFlags(int flags)
// Note: Converts a performance-flag bitmask back into its detail LEVEL number.
// Param: flags = bitmask from the profile/performance setting. Use to show the
// current detail level in UI.
{
    int32_t var_20 = 0x1f;
    int32_t eax_1 = sub_4b8a20(a2, 0);
    float ebx = 0f;

    for (int32_t* i = &g_537b74; i < &g_537b90; )
    {
        int32_t j_1 = 0x20;
        int32_t ecx_2 = *i ^ eax_1;
        int32_t edx_1 = 0;
        int32_t j;

        do
        {
            edx_1 += ecx_2 & 1;
            ecx_2 s>>= 1;
            j = j_1;
            j_1 -= 1;
        } while (j != 1);

        if (edx_1 < var_20)
        {
            var_20 = edx_1;
            a2 = ebx;
        }

        i = &i[1];
        ebx += 1;
    }

    long double x87_r7 = a2;
    char* var_8 = &g_567c74;
    var_20 = x87_r7;
    int32_t var_18 = var_20;
    double var_10 = x87_r7;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
