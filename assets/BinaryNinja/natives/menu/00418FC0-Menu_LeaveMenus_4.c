#include "Menu_LeaveMenus_4.h"
void* Menu_LeaveMenus_4(void* a1)

{
    *(a1 + 0x28) = 3;
    return a1;
}
