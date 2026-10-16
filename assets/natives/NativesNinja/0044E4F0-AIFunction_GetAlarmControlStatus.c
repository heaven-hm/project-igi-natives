#include "0044E4F0-AIFunction_GetAlarmControlStatus.h"
/* 0x0044e4f0 AIFunction_GetAlarmControlStatus full linked: callers=0 callees=7 */
int32_t AIFunction_GetAlarmControlStatus(int32_t a1)

// Sig: int AIFunction_GetAlarmControlStatus()
// Note: RETURNS the status/state of the bound alarm control (raised/used state
// as tracked by the engine). Takes no args.
{
    struct ai_ctx* eax_8 = g_5bda58;
    int32_t eax;
    eax = eax_8->pad[0x3ac4];
    *(&eax + 1) = eax_8->pad[0x3ac5];
    *(&eax + 2) = eax_8->pad[0x3ac6];
    *(&eax + 3) = eax_8->pad[0x3ac7];
    int32_t var_18;

    if (eax == 0xffffffff)
    {
        var_18 = 0;
        int32_t var_10_1 = 0;
        int32_t var_c = 0;
        char* var_8 = &g_567c74;
        memcpy(a1, &var_18, 0x18);
        return a1;
    }

    int32_t eax_2 = sub_4f1030(eax);

    if (eax_2)
    {
        var_18 = sub_440c00(eax_2);
        int32_t var_10;
        var_10 = sub_440c00(eax_2);
        char* var_8_2 = &g_567c74;
        memcpy(a1, &var_18, 0x18);
        return a1;
    }

    struct ai_ctx* ecx = g_5bda58;
    int32_t edx;
    edx = ecx->pad[0x3ac4];
    *(&edx + 1) = ecx->pad[0x3ac5];
    *(&edx + 2) = ecx->pad[0x3ac6];
    *(&edx + 3) = ecx->pad[0x3ac7];
    int32_t var_28_1 = edx;
    Warning_Show("AlarmControl ID #%d not defined");
    var_18 = eax_2;
    int32_t var_10_2 = eax_2;
    int32_t var_c_1 = eax_2;
    char* var_8_1 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
