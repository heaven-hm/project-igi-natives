#include "004F3D30-Script_ExecuteLevelScript_14.h"
/* 0x004f3d30 Script_ExecuteLevelScript_14 full linked: callers=0 callees=4 */
int32_t sub_4f3d30(void* a1, int32_t* a2)

{
    int32_t* var_28 = *(a1 + 0x2014c);
    void* eax_1 = sub_4f1030(var_28);
    int32_t result = *a2;
    int32_t var_14;
    memcpy(&var_14, a2, 0x14);
    var_14 = result + 0xe8;
    memcpy(result, a1 + 0x6c, 0xe8);

    if (eax_1)
    {
        uint32_t eax_3 = sub_4f4120();
        int32_t eax_4 = 0;
        eax_4 = *(eax_1 + 0x1c);
        result = *(((eax_3 * 0x180 + eax_4) << 2) + &g_a96ae0);

        if (result)
        {
            var_28 = &var_14;
            return result(eax_1, var_28);
        }
    }

    return result;
}
