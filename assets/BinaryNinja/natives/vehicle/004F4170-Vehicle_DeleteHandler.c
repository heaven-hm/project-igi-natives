// Original IGI.EXE function: Vehicle_DeleteHandler (VA 0x004F4170; static CFG gate PASS, CFG score 1.000).
#include "Vehicle_DeleteHandler.h"

void Vehicle_DeleteHandler() __noreturn

{
    Error_Show("Vehicle delete handler must be overloaded");

    while (true)
        /* nop */
}
