// Original IGI.EXE function: Afterburner_Update (VA 0x0042BD40; static CFG gate PASS, CFG score 0.926).
#include "Afterburner_Update.h"
int32_t** Afterburner_Update(void* a1)

{
    int32_t* valA = Display_CloseDevice_14(0x30);
    valA[1] = g_bc2364;
    valA[3] = a1;
    valA[9] = *(a1 + 0x138) * 255f;
    valA[0xa] = *(a1 + 0x138) * 255f;
    valA[0xb] = *(a1 + 0x138) * 255f;
    valA[5] = Render_SkinBones_13(&valA[6]);
    Render_ComputeNormals_12(&valA[8], &valA[7]);
    long double x87_r4_3 = g_bcab00 * (*(a1 + 0x30) - g_bcab18)
        + g_bcaafc * (*(a1 + 0x28) - g_bcab10)
        + g_bcaaf8 * (*(a1 + 0x20) - g_bcab08);
    float v_44 = x87_r4_3;
    uint32_t valA5;

    if (Display_OpenDevice_18(v_44) >= 1)
        valA5 = Display_OpenDevice_18(v_44);
    else
        valA5 = 1;

    int32_t** result = Display_ClearSurfaces_14(valA5, valA);
    void v_40;
    memcpy(&v_40, a1 + 0x20, 0x18);
    void v_28;
    memcpy(&v_28, a1 + 0x70, 0x28);
    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t objC1 = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
            void* valA9;

            if (!tmpD1)
                valA9 = nullptr;
            else
            {
                int32_t valA6 = *tmpD1;
                int32_t valA7 = -(valA6);
                valA9 = (valA7 - valA7) & tmpD1;
            }

            *((objC1 << 2) + &g_afa6e0) = valA9;
            g_afa7e0 = objC1 + 1;
            uint32_t valA11 = DynObj_FindSymbol_6();
            int32_t tmpD2 = 0;
            tmpD2 = i[7];
            result = *(((valA11 * 0x180 + tmpD2) << 2) + &g_a96ae0);

            if (result)
                result = result(i, &v_40);

            objC1 = g_afa7e0 - 1;
            g_afa7e0 = objC1;
            i = *((objC1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
