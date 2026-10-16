#include "gi_platform.h"
#include "0045FFC0-Weapon_GunPickup.h"
int32_t Weapon_GunPickup(void* a1, int32_t* a2)

// Sig: void Weapon_GunPickup(void* player, void* pickupEntity)
// Note: Gives a GUN pickup to the player: checks the player's already-carried
// flag (player+0xCF5), reads the weapon id from pickupEntity+8 -> word +0x1C,
// validates the weapon category via 0x401CF0, hands the weapon over
// (0x477BF0/0x477C50) and plays the 'weaponpickup_1' sound (0x47CE00/0x4E7200).
// Params: player = player/Human struct ptr, pickupEntity = the picked-up world
// entity. Use for custom weapon pickups.
{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0xcf5));

    if (result)
        return result;

    int32_t* srcS1 = (*(int32_t*)(uintptr_t)(a1 + 8));

    if (!*srcS1 || !srcS1)
    {
    label_460029: ;
        Weapon_EntityCreate(a1, 0, *a2, a2[1], 1);
    }
    else
    {
        while (true)
        {
            int32_t valA = Weapon_ComputeAccuracy_5();
            int16_t v_10_1 = valA;
            valA = srcS1[7];

            if (TaskType_IsDerivedFrom(valA, v_10_1))
            {
                int32_t* valA2 = srcS1[0x4a];

                if (valA2 && *valA2 == *a2)
                {
                    int32_t* srcS2 = srcS1[0x4b];

                    if (srcS2)
                        Weapon_EjectShell_8(a1 + 0x340, *srcS2, a2[1]);

                    break;
                }
            }

            srcS1 = *srcS1;

            if (!srcS1)
                goto label_460029;

            if (!*srcS1)
                goto label_460029;

            if (!srcS1)
                goto label_460029;
        }
    }

    return Sound_EventTrigger("weaponpickup_1", nullptr, 0);
}
