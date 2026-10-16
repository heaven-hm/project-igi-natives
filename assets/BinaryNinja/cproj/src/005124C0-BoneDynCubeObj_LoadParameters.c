#include "gi_platform.h"
#include "005124C0-BoneDynCubeObj_LoadParameters.h"
int32_t BoneDynCubeObj_LoadParameters(void* a1)

{
    void* v_54 = a1;
    char v_4c;
    void* v_50 = Render_SkinBones_13(&v_4c);
    void* v_48;
    char v_44;
    Render_ComputeNormals_12(&v_48, &v_44);
    int32_t result = ((int(*)())(uintptr_t)(*((DynObj_UpdateDynTree_15() << 2) + &g_a94e84)))(&v_54);
    char v_40;
    memcpy(&v_40, a1 + 0x20, 0x18);
    char v_28;
    memcpy(&v_28, a1 + 0x78, 0x28);
    int32_t* i = (*(int32_t*)(uintptr_t)(a1 + 8));

    if (*i && i)
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
