#include "gi_platform.h"
#include "004B6490-Sys_PopStack_16.h"
int32_t Sys_PopStack_16(FILETIME* a1, FILETIME* a2)

{
    return Physics_SimulateRigidBody_9(a1, a2);
}
