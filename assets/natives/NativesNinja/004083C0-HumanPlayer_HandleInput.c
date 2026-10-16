#include "004083C0-HumanPlayer_HandleInput.h"
/* 0x004083c0 HumanPlayer_HandleInput full linked: callers=1 callees=0 */
int32_t HumanPlayer_HandleInput(int16_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t* a5)

{
    int32_t var_18 = a3;
    int32_t eax_3 = 0;
    eax_3 = g_53851a;
    return (*(((eax_3 * 0x180 + a1) << 2) + &g_a96ae0))(0, &var_18, var_18, a2, *a5,
        a5[1], a5[2], a4);
}
