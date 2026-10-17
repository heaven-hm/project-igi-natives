// Original IGI.EXE function: Weapon_CheckAmmo_7 (VA 0x0047CD70; static CFG gate PASS, CFG score 1.000).
#include "Weapon_CheckAmmo_7.h"
void* Weapon_CheckAmmo_7(int32_t context)

{
    int32_t data_val = Weapon_UpdateZoom_7();
    int32_t source_val = 0;

    if (data_val > 0)
    {
        do
        {
            void* result = Weapon_EjectMagazine_7(source_val);

            if (*(result + 4) == context)
                return result;

            source_val += 1;
        } while (source_val < data_val);
    }

    return nullptr;
}
