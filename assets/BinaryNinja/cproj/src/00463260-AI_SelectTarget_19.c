#include "gi_platform.h"
#include "00463260-AI_SelectTarget_19.h"
int32_t AI_SelectTarget_19(void *human_object)

{
    double human_position[3];
    float movement_delta[3] = { 0.0f, 0.0f, 0.0f };
    uint32_t *movement_flags =
        (uint32_t *)((unsigned char *)human_object + 0x2F4);

    memcpy(human_position,
           (const unsigned char *)human_object + 0x20,
           sizeof(human_position));
    Human_GroundQuery(human_object,
                      human_position,
                      human_position,
                      movement_delta,
                      movement_flags,
                      4096000.0f);
    AI_UpdateOrders_19(human_object, human_position);
    return 0;
}
