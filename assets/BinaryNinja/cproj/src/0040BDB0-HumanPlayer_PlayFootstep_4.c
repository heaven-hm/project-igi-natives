#include "gi_platform.h"
#include "0040BDB0-HumanPlayer_PlayFootstep_4.h"
float HumanPlayer_PlayFootstep_4(void* a1, void* a2) __location("valA")

{
    (*(int32_t*)(uintptr_t)(a2 + 0x33d)) = 0;
    Human_StateAnimation(a2, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.0f);
    int32_t tmpD1 = (*(int32_t*)(uintptr_t)(a2 + 0x730));
    float result = (*(int32_t*)(uintptr_t)(a2 + 0x520)) + (*(int32_t*)(uintptr_t)(a2 + 0x728));
    long double x87_r7_3 = (*(int32_t*)(uintptr_t)(a2 + 0x524)) + (*(int32_t*)(uintptr_t)(a2 + 0x72c));
    int32_t v_4 = (*(int32_t*)(uintptr_t)(a2 + 0x528));
    (*(int32_t*)(uintptr_t)(a2 + 0x664)) = result;
    int32_t v_4_1 = tmpD1;
    (*(int32_t*)(uintptr_t)(a2 + 0x668)) = x87_r7_3;
    (*(int32_t*)(uintptr_t)(a2 + 0x66c)) = tmpD1;
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = HumanPlayer_PlaySound_4;
    return result;
}
