// Original IGI.EXE function: Computer_Create (VA 0x0046B940; static CFG gate PASS, CFG score 1.000).
#include "Computer_Create.h"

void* Computer_Create(void* pThis, int32_t* param)

{
    return EditRigidObjAttachedToBone_Process_2(param, pThis + 0x54);
}
