// Original IGI.EXE function: PhysicsObj_DeleteHandler (VA 0x004FB2A0; static CFG gate PASS, CFG score 1.000).
#include "PhysicsObj_DeleteHandler.h"

void PhysicsObj_DeleteHandler() __noreturn

{
    Error_Show("PhysicsObj delete handler must be overloaded");

    while (true)
        /* nop */
}
