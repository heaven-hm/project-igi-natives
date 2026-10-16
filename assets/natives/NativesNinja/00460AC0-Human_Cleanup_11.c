#include "00460AC0-Human_Cleanup_11.h"
/* 0x00460ac0 Human_Cleanup_11 full linked: callers=0 callees=2 */
int32_t sub_460ac0(void* a1)

{
    char result = *(a1 + 0xcf6);

    if (result)
        return result;

    int32_t var_c = 0;
    int32_t var_8_1 = Level_StartMission_4();
    int32_t var_4_1 = 2;
    uint32_t eax_2 = sub_4cea10();
    int32_t ecx_1 = 0;
    ecx_1 = *(a1 + 0x1c);
    return (*(((eax_2 * 0x180 + ecx_1) << 2) + &g_a96ae0))(a1, &var_c);
}
