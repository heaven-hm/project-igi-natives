// Original IGI.EXE function: EnvironmentSound_Update (VA 0x00436CB0; static CFG gate PASS, CFG score 1.000).
#include "EnvironmentSound_Update.h"
int32_t* EnvironmentSound_Update(void* context)

{
    void* data_val = *(context + 0x38);
    *(context + 0x34) = 0;

    if (data_val)
    {
        SoundSys_SetFrequency_7(data_val);
        *(context + 0x38) = 0;
    }

    struct status_msg* data_2 = SoundSys_SetMasterVolume_7(context, context + 0x24);
    int32_t entity_val = *(context + 0x34);
    *(context + 0x38) = data_2;
    SoundSys_LoadSoundDef_7(data_2, 0xbf800000, entity_val);
    int32_t* result = context + 0x4c;
    int32_t i_1 = 4;
    int32_t i;

    do
    {
        result[-4] = 0;
        *result = 0;
        result = &result[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
