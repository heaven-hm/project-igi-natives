// Original IGI.EXE function: Mine_ProximityCreate (VA 0x00476040; static CFG gate PASS, CFG score 0.852).
#include "Mine_ProximityCreate.h"
struct status_msg* Mine_ProximityCreate(void* context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, int32_t param_7, int32_t param_8, char param_9)

// Sig: void Mine_ProximityCreate(void)
// Note: Creates a PROXIMITY MINE entity: initializes hash state via
// QHash_Init(0x4B0D60), reads mine id word 0x5BE3A0. IGI-MP hooks for network
// mine sync.
{
    int32_t kind = Qhash_Init(1);
    kind = g_5be3a0;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    memcpy(&result->sprite[0x3c], param_2, 0x18);
    memcpy(&result->sprite[0x54], param_3, 0x28);
    int32_t dest_2 = param_4;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_2;
        dest_2 += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_1 = ~i;
    int32_t source_3;
    int32_t dest_5;
    dest_5 = memcpy(&result->sprite[0xbc], dest_2 - entity_1, entity_1 & 0xfffffffc);
    memcpy(dest_5, source_3, entity_1 & 3);
    *(result + 0x240) = param_6;
    *(result + 0x238) = param_5;
    *(result + 0x244) = param_7;
    *(result + 0x249) = param_9;
    FX_FireBallUpdate_2(result, 1.0f, param_8, 0, 0x3f800000, 0, 5, 1, "explo_proxy");
    Mine_Process(result, 0);
    Qhash_Reset();
    return result;
}
