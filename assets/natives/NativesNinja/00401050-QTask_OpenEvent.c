#include "00401050-QTask_OpenEvent.h"
/* 0x00401050 QTask_OpenEvent full linked: callers=1 callees=4 */
int32_t QTask_OpenEvent(int32_t a1 @ ebp)

{
    int32_t __saved_ebp;
    struct _EXCEPTION_REGISTRATION_RECORD* esi;
    int32_t edi;
    sub_4a5000(&__saved_ebp, esi, edi, 0x54f8e0, 0, esi, a1);
    struct frames_ctx* eax = Game_GetContext();
    int32_t ecx = 0;
    ecx = eax->pad_00[0x1c];
    *(&ecx + 1) = eax->pad_00[0x1d];
    return (*((ecx << 2) + &g_a970e0))(Game_GetContext());
}
