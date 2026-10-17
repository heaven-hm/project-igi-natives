// Original IGI.EXE function: Lensflare_LoadParameters (VA 0x00520F50; static CFG gate PASS, CFG score 1.000).
#include "Lensflare_LoadParameters.h"
void* Lensflare_LoadParameters(void* context)

{
    void* data_val = *(context + 0x84);

    if (data_val == 0xffffffff)
    {
        void* dest_2 = *(context + 0x14);

        if (dest_2)
        {
            data_val = Light_SampleLightmap_5();

            if (*(dest_2 + 0x1c) == data_val)
            {
                *(context + 0x6c) = *(dest_2 + 0x24);
                *(context + 0x70) = *(dest_2 + 0x28);
                *(context + 0x74) = *(dest_2 + 0x2c);
                *(context + 0x78) = *(dest_2 + 0x30);
                data_val = *(dest_2 + 0x34);
                *(context + 0x7c) = data_val;
                *(context + 0x80) = *(dest_2 + 0x38);
            }
        }
    }
    else
    {
        data_val = Script_ExecuteLevelScript_4(data_val);
        void* dest_val = data_val;

        if (dest_val)
        {
            data_val = Light_SampleLightmap_5();

            if (*(dest_val + 0x1c) == data_val)
            {
                *(context + 0x6c) = *(dest_val + 0x24);
                *(context + 0x70) = *(dest_val + 0x28);
                *(context + 0x74) = *(dest_val + 0x2c);
                *(context + 0x78) = *(dest_val + 0x30);
                *(context + 0x7c) = *(dest_val + 0x34);
                int32_t data_3 = *(dest_val + 0x38);
                *(context + 0x80) = data_3;
                return data_3;
            }
        }
    }

    return data_val;
}
