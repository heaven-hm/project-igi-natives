// Original IGI.EXE function: DynObj_QtasklistIsFull (VA 0x004C1790; static CFG gate PASS, CFG score 1.000).
#include "DynObj_QtasklistIsFull.h"
int32_t* DynObj_QtasklistIsFull(int32_t* a1, int32_t a2)

{
    int32_t objC = *a1;

    if (objC < a1[1])
    {
        a1[objC + 2] = a2;
        *a1 += 1;
        return a1;
    }

    Error_Show("QTaskList is full");

    while (true)
        /* nop */
}
