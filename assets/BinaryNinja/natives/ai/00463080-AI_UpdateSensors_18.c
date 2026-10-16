#include "AI_UpdateSensors_18.h"
int32_t* AI_UpdateSensors_18(void* a1)

{
    void* v_28 = a1;
    int32_t valA1 = *(a1 + 0xa0);
    void v_20;
    memcpy(&v_20, a1 + 0x20, 0x18);
    int32_t v_8 = valA1;
    int32_t i = 0;
    int32_t* result = Level_LoadLevel_4();

    if (*result > 0)
    {
        int32_t srcS1 = 8;

        do
        {
            int32_t tmpD1 = 0;
            tmpD1 = *(*(Level_LoadLevel_4() + srcS1) + 0x1c);
            uint32_t valA4 = Level_LoadLevel_2();
            void** v_38 = &v_28;
            (*(((tmpD1 + valA4 * 0x180) << 2) + &g_a96ae0))(*(Level_LoadLevel_4() + srcS1),
                v_38);
            i += 1;
            srcS1 += 4;
            result = Level_LoadLevel_4();
        } while (i < *result);
    }

    return result;
}
