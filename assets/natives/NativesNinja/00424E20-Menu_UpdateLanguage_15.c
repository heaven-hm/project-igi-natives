#include "00424E20-Menu_UpdateLanguage_15.h"
/* 0x00424e20 Menu_UpdateLanguage_15 full linked: callers=1 callees=1 */
struct status_msg* Menu_UpdateLanguage_15(int32_t a1)

{
    int32_t kind;
    kind = g_57bc60;
    return QTask_HandleInput(nullptr, kind, a1);
}
