#include "00475D90-Mine_Process.h"
/* 0x00475d90 Mine_Process full linked: callers=1 callees=2 */
int32_t sub_475d90(void* a1, int32_t a2)

{
    int32_t result = (*(((sub_4f1a70() * 0x180 + sub_481340()) << 2) + &g_a96ae0))(a1, a2);
    *(a1 + 0x23c) = *(a1 + 0x240) * 30f;
    return result;
}
