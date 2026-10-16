#include "0048C250-Combat_MobileA.h"
/* 0x0048c250 Combat_MobileA full linked: callers=0 callees=0 */
void* sub_48c250(void* a1, void* a2)

{
    *(a1 + 0x3e50) = 0;
    *(a2 + 0x18) = sub_48c280;
    *(a2 + 0x1c) = sub_48c250;
    return a2;
}
