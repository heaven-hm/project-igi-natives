// Original IGI.EXE function: Physics_VirmodelIsNull (VA 0x00503CC0; static CFG gate PASS, CFG score 0.889).
#include "Physics_VirmodelIsNull.h"
struct status_msg* Physics_VirmodelIsNull(void* a1, int32_t a2, int32_t a3, int32_t a4, int32_t* a5)

{
    struct status_msg* result = QTask_HandleInput(a1, a2, 0);
    void* valA = DynObj_Missing(a1 + 0x24);

    if (valA)
    {
        DynObj_CreateMagicObject_5(result, valA);
        memcpy(&result->head[8], a3, 0x18);
        memcpy(&result->head[0x1c], a4, 0x28);
        int32_t objC1 = *a5;
        result->sprite[0x3c] = objC1;
        result->sprite[0x3d] = *(&objC1 + 1);
        result->sprite[0x3e] = *(&objC1 + 2);
        result->sprite[0x3f] = *(&objC1 + 3);
        int32_t objC2 = a5[1];
        result->sprite[0x40] = objC2;
        result->sprite[0x41] = *(&objC2 + 1);
        result->sprite[0x42] = *(&objC2 + 2);
        result->sprite[0x43] = *(&objC2 + 3);
        int32_t valA2 = a5[2];
        result->sprite[0x44] = valA2;
        result->sprite[0x45] = *(&valA2 + 1);
        result->sprite[0x46] = *(&valA2 + 2);
        result->sprite[0x47] = *(&valA2 + 3);
        int32_t objC3 = *(a1 + 0x20);
        result->sprite[0x48] = objC3;
        result->sprite[0x49] = *(&objC3 + 1);
        result->sprite[0x4a] = *(&objC3 + 2);
        result->sprite[0x4b] = *(&objC3 + 3);
        return result;
    }

    Error_Show("VirModel is null");

    while (true)
        /* nop */
}
