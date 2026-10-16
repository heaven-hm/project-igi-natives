#include "0045FFC0-Weapon_GunPickup.h"
/* 0x0045ffc0 Weapon_GunPickup full linked: callers=0 callees=5 */
int32_t Weapon_GunPickup(void* a1, int32_t* a2)

// Sig: void Weapon_GunPickup(void* player, void* pickupEntity)
// Note: Gives a GUN pickup to the player: checks the player's already-carried
// flag (player+0xCF5), reads the weapon id from pickupEntity+8 -> word +0x1C,
// validates the weapon category via 0x401CF0, hands the weapon over
// (0x477BF0/0x477C50) and plays the 'weaponpickup_1' sound (0x47CE00/0x4E7200).
// Params: player = player/Human struct ptr, pickupEntity = the picked-up world
// entity. Use for custom weapon pickups.
{
    char result = *(a1 + 0xcf5);

    if (result)
        return result;

    int32_t* esi_1 = *(a1 + 8);

    if (!*esi_1 || !esi_1)
    {
    label_460029:
        Weapon_EntityCreate(a1, 0, *a2, a2[1], 1);
    }
    else
    {
        while (true)
        {
            int32_t eax = sub_477bf0();
            int16_t var_10_1 = eax;
            eax = esi_1[7];

            if (TaskType_IsDerivedFrom(eax, var_10_1))
            {
                int32_t* eax_2 = esi_1[0x4a];

                if (eax_2 && *eax_2 == *a2)
                {
                    int32_t* esi_2 = esi_1[0x4b];

                    if (esi_2)
                        sub_47ce00(a1 + 0x340, *esi_2, a2[1]);

                    break;
                }
            }

            esi_1 = *esi_1;

            if (!esi_1)
                goto label_460029;

            if (!*esi_1)
                goto label_460029;

            if (!esi_1)
                goto label_460029;
        }
    }

    return Sound_EventTrigger("weaponpickup_1", nullptr, 0);
}
