#include "0046F950-AI_MoveToNode_30.h"
/* 0x0046f950 AI_MoveToNode_30 full linked: callers=2 callees=2 */
void* sub_46f950(int32_t a1, char a2)

{
    void* result = Table_GetAt(a1 + 0x1c4, 0);

    if (!result)
        return result;

    char var_2f_1 = 0;
    char var_30 = a2;
    int32_t var_2c_1 = 0;
    int32_t var_28_1 = 0;
    int32_t var_24_1 = 0;
    int32_t var_20_1 = 0;
    int32_t var_10_1 = 0;
    int32_t var_c_1 = 0;
    int32_t var_8_1 = 0x3f800000;
    int32_t var_4_1 = 0;
    uint32_t eax_2 = sub_460bf0();
    int32_t eax_3 = 0;
    eax_3 = *(result + 0x1c);
    return (*(((eax_2 * 0x180 + eax_3) << 2) + &g_a96ae0))(result, &var_30);
}
