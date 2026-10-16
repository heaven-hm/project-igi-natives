#include "gi_platform.h"
#include "0042D1D0-Rotor_OnEvent.h"
int32_t Rotor_OnEvent(void* a1)

{
    void* v_50 = 0x24;
    void* valA = Display_CloseDevice_14(v_50);
    (*(int32_t*)(uintptr_t)(valA + 4)) = g_57bd14;
    (*(int32_t*)(uintptr_t)(valA + 0xc)) = a1;
    (*(int32_t*)(uintptr_t)(valA + 0x14)) = Render_SkinBones_13(valA + 0x18);
    int32_t* v_58 = valA + 0x1c;
    Render_ComputeNormals_12(valA + 0x20, v_58);
    int32_t result = Display_SyncVSync_14(valA);
    char v_40;
    memcpy(&v_40, a1 + 0x20, 0x18);
    char v_28;
    memcpy(&v_28, a1 + 0x70, 0x28);
    int32_t* i = (*(int32_t*)(uintptr_t)(a1 + 8));

    if (*i && i)
    {
        int32_t objC1 = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
            void* valA7;

            if (!tmpD1)
                valA7 = nullptr;
            else
            {
                int32_t valA4 = *tmpD1;
                int32_t valA5 = -(valA4);
                valA7 = (valA5 - valA5) & tmpD1;
            }

            *((objC1 << 2) + &g_afa6e0) = valA7;
            g_afa7e0 = objC1 + 1;
            uint32_t valA9 = DynObj_FindSymbol_6();
            int32_t tmpD2 = 0;
            tmpD2 = i[7];
            result = *(((valA9 * 0x180 + tmpD2) << 2) + &g_a96ae0);

            if (result)
            {
                v_50 = &v_40;
                result = result(i, v_50);
            }

            objC1 = g_afa7e0 - 1;
            g_afa7e0 = objC1;
            i = *((objC1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
