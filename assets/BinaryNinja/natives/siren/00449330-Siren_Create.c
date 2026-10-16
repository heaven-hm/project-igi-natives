#include "Siren_Create.h"

char* Siren_Create(void* pThis)

{
    (*((FX_TrailUpdate() << 2) + &g_a976e0))(pThis);
    return Script_CallNativeHandler_6(pThis + 0x278);
}
