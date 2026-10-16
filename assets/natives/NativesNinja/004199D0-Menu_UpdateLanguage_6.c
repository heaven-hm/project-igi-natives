#include "004199D0-Menu_UpdateLanguage_6.h"
/* 0x004199d0 Menu_UpdateLanguage_6 full linked: callers=1 callees=1 */
struct status_msg* Menu_UpdateLanguage_6(void* a1)

{
    int32_t kind;
    kind = g_539af0;
    return QTask_HandleInput(a1, kind, 0);
}
