// Original IGI.EXE function: DynObj_InvalidDyncubetree (VA 0x004C58B0; static CFG gate PASS, CFG score 1.000).
#include "DynObj_InvalidDyncubetree.h"
int32_t DynObj_InvalidDyncubetree(int32_t context)

{
    if (context > 5)
    {
        Error_Show("Invalid dyncubetree");

        while (true)
            /* nop */
    }
    else
        switch (context)
        {
            case 0:
            {
                return 1;
                break;
            }
            case 1:
            case 2:
            case 3:
            {
                return 2;
                break;
            }
            case 4:
            {
                return 4;
                break;
            }
            case 5:
            {
                return 8;
                break;
            }
        }
}
