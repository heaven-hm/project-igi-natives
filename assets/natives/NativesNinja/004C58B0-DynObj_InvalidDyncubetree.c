#include "004C58B0-DynObj_InvalidDyncubetree.h"
/* 0x004c58b0 DynObj_InvalidDyncubetree full linked: callers=1 callees=1 */
int32_t sub_4c58b0(int32_t a1)

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
