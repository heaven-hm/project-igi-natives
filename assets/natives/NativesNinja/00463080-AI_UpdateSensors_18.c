#include "00463080-AI_UpdateSensors_18.h"
/* 0x00463080 AI_UpdateSensors_18 full linked: callers=5 callees=6 */
int32_t* sub_463080(void* a1)

{
    void* var_28 = a1;
    int32_t eax_1 = *(a1 + 0xa0);
    void var_20;
    memcpy(&var_20, a1 + 0x20, 0x18);
    int32_t var_8 = eax_1;
    int32_t i = 0;
    int32_t* result = Level_LoadLevel_4();

    if (*result > 0)
    {
        int32_t esi_1 = 8;

        do
        {
            int32_t edx_1 = 0;
            edx_1 = *(*(Level_LoadLevel_4() + esi_1) + 0x1c);
            uint32_t eax_4 = Level_LoadLevel_2();
            void** var_38 = &var_28;
            (*(((edx_1 + eax_4 * 0x180) << 2) + &g_a96ae0))(*(Level_LoadLevel_4() + esi_1),
                var_38);
            i += 1;
            esi_1 += 4;
            result = Level_LoadLevel_4();
        } while (i < *result);
    }

    return result;
}
