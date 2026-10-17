// Original IGI.EXE function: SplineObjSegment_Setup (VA 0x004E4290; static CFG gate PASS, CFG score 1.000).
#include "SplineObjSegment_Setup.h"
int32_t SplineObjSegment_Setup(void* a1)

{
    void* v_54 = a1;
    void v_4c;
    void* v_50 = Render_SkinBones_13(&v_4c);
    void* v_48;
    void v_44;
    Render_ComputeNormals_12(&v_48, &v_44);
    (*((DynObj_LinkDynamicCube_15() << 2) + &g_a94e84))(&v_54);
    void v_40;
    memcpy(&v_40, a1 + 0x20, 0x18);
    int32_t* i = *(a1 + 8);
    int32_t v_28 = 0x3f800000;
    int32_t v_24 = 0;
    int32_t v_20 = 0;
    int32_t v_1c = 0;
    int32_t v_18 = 0x3f800000;
    int32_t v_14 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    int32_t v_8 = 0x3f800000;
    int32_t v_4 = 0;
    int32_t result = *i;

    if (result && i)
    {
        int32_t objC1 = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
            void* valA5;

            if (!tmpD1)
                valA5 = nullptr;
            else
            {
                int32_t valA2 = *tmpD1;
                int32_t valA3 = -(valA2);
                valA5 = (valA3 - valA3) & tmpD1;
            }

            *((objC1 << 2) + &g_afa6e0) = valA5;
            g_afa7e0 = objC1 + 1;
            uint32_t valA7 = DynObj_FindSymbol_6();
            int32_t valA8 = 0;
            valA8 = i[7];
            result = *(((valA7 * 0x180 + valA8) << 2) + &g_a96ae0);

            if (result)
                result = result(i, &v_40);

            objC1 = g_afa7e0 - 1;
            g_afa7e0 = objC1;
            i = *((objC1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
