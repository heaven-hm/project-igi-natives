// IGI native provenance: Weapon_GunPickup - 0x0045FFC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045FFC0-Weapon_GunPickup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_GunPickup.h"
int32_t Weapon_GunPickup(void* context, int32_t* param_2)

// Sig: void Weapon_GunPickup(void* player, void* pickupEntity)
// Note: Gives a GUN pickup to the player: checks the player's already-carried
// flag (player+0xCF5), reads the weapon id from pickupEntity+8 -> word +0x1C,
// validates the weapon category via 0x401CF0, hands the weapon over
// (0x477BF0/0x477C50) and plays the 'weaponpickup_1' sound (0x47CE00/0x4E7200).
// Params: player = player/Human struct ptr, pickupEntity = the picked-up world
// entity. Use for custom weapon pickups.
{
    char result = *(context + 0xcf5);

    if (result)
        return result;

    int32_t* source_1 = *(context + 8);

    if (!*source_1 || !source_1)
    {
    label_460029:
        Weapon_EntityCreate(context, 0, *param_2, param_2[1], 1);
    }
    else
    {
        while (true)
        {
            int32_t data_val = Weapon_ComputeAccuracy_5();
            int16_t item_10_1 = data_val;
            data_val = source_1[7];

            if (TaskType_IsDerivedFrom(data_val, item_10_1))
            {
                int32_t* data_2 = source_1[0x4a];

                if (data_2 && *data_2 == *param_2)
                {
                    int32_t* source_2 = source_1[0x4b];

                    if (source_2)
                        Weapon_EjectShell_8(context + 0x340, *source_2, param_2[1]);

                    break;
                }
            }

            source_1 = *source_1;

            if (!source_1)
                goto label_460029;

            if (!*source_1)
                goto label_460029;

            if (!source_1)
                goto label_460029;
        }
    }

    return Sound_EventTrigger("weaponpickup_1", nullptr, 0);
}
