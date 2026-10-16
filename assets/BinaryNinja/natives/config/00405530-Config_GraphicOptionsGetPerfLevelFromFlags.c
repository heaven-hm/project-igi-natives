#include "Config_GraphicOptionsGetPerfLevelFromFlags.h"
int32_t Config_GraphicOptionsGetPerfLevelFromFlags(int32_t a1, float a2 @ 0xc)

// Sig: int Config_GraphicOptionsGetPerfLevelFromFlags(int flags)
// Note: Converts a performance-flag bitmask back into its detail LEVEL number.
// Param: flags = bitmask from the profile/performance setting. Use to show the
// current detail level in UI.
{
    int32_t v_20 = 0x1f;
    int32_t valA1 = Script_GetArg(a2, 0);
    float ctxB = 0f;

    for (int32_t* i = &g_537b74; i < &g_537b90; )
    {
        int32_t j_1 = 0x20;
        int32_t objC2 = *i ^ valA1;
        int32_t tmpD1 = 0;
        int32_t j;

        do
        {
            tmpD1 += objC2 & 1;
            objC2 s>>= 1;
            j = j_1;
            j_1 -= 1;
        } while (j != 1);

        if (tmpD1 < v_20)
        {
            v_20 = tmpD1;
            a2 = ctxB;
        }

        i = &i[1];
        ctxB += 1;
    }

    long double fpu7 = a2;
    char* v_8 = &g_567c74;
    v_20 = fpu7;
    int32_t v_18 = v_20;
    double v_10 = fpu7;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
