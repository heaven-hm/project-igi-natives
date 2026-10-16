#include "00403C10-GO_ContentControlPW.h"
/* 0x00403c10 GO_ContentControlPW full linked: callers=0 callees=2 */
int32_t GO_ContentControlPW(int32_t a1, float a2 @ 0xc)

// Sig: int Config_SetContentControlPassword()
// Note: Menu-script setter form (argc=0): same address registered twice by
// igi.exe - site 0x4034C1 pushes str "Config_SetContentControlPassword" ->
// registrar 0x4B8890. Password comes from the script context, not an explicit
// arg. Returns 1.
{
    char* var_24 = 0x20;
    char* var_28 = &g_bc79c8;
    int32_t var_2c = 0;
    float var_30 = a2;
    sub_4b8a80(var_30, var_2c, var_28, var_24);
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
