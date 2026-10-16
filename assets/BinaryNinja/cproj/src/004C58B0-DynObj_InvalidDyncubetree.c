#include "gi_platform.h"
#include "004C58B0-DynObj_InvalidDyncubetree.h"
int32_t DynObj_InvalidDyncubetree(int32_t a1)

{
    if (a1 > 5)
    {
        Error_Show("Invalid dyncubetree");

        while (true)
            /* nop */
    }
    else
        switch (a1)
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
