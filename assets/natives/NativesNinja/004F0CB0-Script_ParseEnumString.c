#include "004F0CB0-Script_ParseEnumString.h"
/* 0x004f0cb0 Script_ParseEnumString full linked: callers=1 callees=1 */
struct status_msg* sub_4f0cb0(void* a1)

{
    int32_t kind;
    kind = g_54dd0c;
    return QTask_HandleInput(a1, kind, 0);
}
