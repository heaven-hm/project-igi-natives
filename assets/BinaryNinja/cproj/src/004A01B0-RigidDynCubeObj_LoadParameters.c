#include "gi_platform.h"
#include "004A01B0-RigidDynCubeObj_LoadParameters.h"
int32_t RigidDynCubeObj_LoadParameters(void* a1)

{
    void* v_54 = a1;
    char v_4c;
    void* v_50 = Render_SkinBones_13(&v_4c);
    void* v_48;
    char v_44;
    Render_ComputeNormals_12(&v_48, &v_44);
    ((int(*)())(uintptr_t)(*((DynObj_ParseConfigFile_15() << 2) + &g_a94e84)))(&v_54);
    char v_40;
    memcpy(&v_40, a1 + 0x20, 0x18);
    void* tmpD = a1 + 0x70;
    char v_28;
    memcpy(&v_28, tmpD, 0x28);
    int32_t* i = (*(int32_t*)(uintptr_t)(a1 + 8));
    int32_t result;

    if (!*i || !i)
        result = g_afa7e0;
    else
    {
        result = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
            void* objC4;

            if (!tmpD1)
                objC4 = nullptr;
            else
            {
                int32_t objC1 = *tmpD1;
                int32_t objC2 = -(objC1);
                objC4 = (objC2 - objC2) & tmpD1;
            }

            *((result << 2) + &g_afa6e0) = objC4;
            g_afa7e0 = result + 1;
            uint32_t valA4 = DynObj_FindSymbol_6();
            int32_t valA5 = 0;
            valA5 = i[7];
            int32_t valA6 = *(((valA4 * 0x180 + valA5) << 2) + &g_a96ae0);

            if (valA6)
                valA6(i, &v_40);

            result = g_afa7e0 - 1;
            g_afa7e0 = result;
            i = *((result << 2) + &g_afa6e0);
        } while (i);
    }

    void* ctxB1 = (*(int32_t*)(uintptr_t)(a1 + 0xe8));

    if (ctxB1)
    {
        memcpy(&v_40, a1 + 0x20, 0x18);
        memcpy(&v_28, tmpD, 0x28);
        int32_t* i_1 = *(ctxB1 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* tmpD5 = *i_1;
                void* objC8;

                if (!tmpD5)
                    objC8 = nullptr;
                else
                {
                    int32_t objC5 = *tmpD5;
                    int32_t objC6 = -(objC5);
                    objC8 = (objC6 - objC6) & tmpD5;
                }

                *((result << 2) + &g_afa6e0) = objC8;
                g_afa7e0 = result + 1;
                uint32_t valA10 = DynObj_FindSymbol_6();
                int32_t valA11 = 0;
                valA11 = i_1[7];
                int32_t valA12 = *(((valA10 * 0x180 + valA11) << 2) + &g_a96ae0);

                if (valA12)
                    valA12(i_1, &v_40);

                result = g_afa7e0 - 1;
                g_afa7e0 = result;
                i_1 = *((result << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
