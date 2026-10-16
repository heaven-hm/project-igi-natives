#include "Sys_QvertexRegisterstrip.h"
int32_t Sys_QvertexRegisterstrip()

{
    g_a84a50 = 0;
    g_a84a58 = 0;
    g_a84a54 = Sys_RendermodeFailedToCr_2("QVertex:RegisterStrip");
    /* tailcall */
    return Physics_QvertexDrawstrip();
}
