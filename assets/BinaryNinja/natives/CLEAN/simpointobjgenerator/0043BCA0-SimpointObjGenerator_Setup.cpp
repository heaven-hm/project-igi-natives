// IGI native provenance: SimpointObjGenerator_Setup - 0x0043BCA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043BCA0-SimpointObjGenerator_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SimpointObjGenerator_Setup.h"
int32_t SimpointObjGenerator_Setup(void* context)

{
    if (!*(context + 0x138))
        *(context + 0x138) = Physics_CheckHullCollision_2(*(context + 0x124) * 0x1e, context + 0x104, context + 0x114,
            *(context + 0x12c), *(context + 0x130), 0x4232674f, *(context + 0x134), context + 0x148, 0);

    if (*(context + 0xf0) <= 0)
    {
        float item_c = *(context + 0x13c);
        float data_9 = *(context + 0x140);
        float entity_4 = *(context + 0x144);
        item_c = item_c * 4096.0f;
        float item_8_2 = data_9 * 4096.0f;
        float item_4_2 = entity_4 * 4096.0f;
        int32_t data_11 = Physics_SimulateRigidBody_2();
        Physics_VirmodelIsNull(*(context + 0x138), data_11, context + 0x20, context + 0x70, &item_c);
        *(context + 0xf0) = *(context + 0x128) * 0x1e;
    }

    int32_t result = *(context + 0xf0) - 1;
    *(context + 0xf0) = result;
    return result;
}
