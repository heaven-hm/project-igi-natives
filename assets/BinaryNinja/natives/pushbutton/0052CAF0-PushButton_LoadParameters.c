#include "PushButton_LoadParameters.h"
int32_t PushButton_LoadParameters(void* a1, int32_t* a2)

{
    int32_t result = *(a1 + 0x78);

    if (!result)
        return result;

    *(a1 + 0x74) = a1;
    Sys_ExecuteBytecode_18(result, a1 + 0x5c);
    return EditRigidObjAttachedToBone_Process_2(a2, a1 + 0x54);
}
