#include "0047C420-GunShot_Unpack.h"
/* 0x0047c420 GunShot_Unpack full linked: callers=0 callees=1 */
int32_t sub_47c420(int32_t* a1 @ 0x8)

{
    int32_t eax = 0;
    void* ecx = *a1;
    void* edi = a1[8];
    int32_t ebx = a1[9];
    eax = *(ecx + 0x1c);
    void* var_14;
    (*(((eax + *g_5be3cc * 0x180) << 2) + &g_a96ae0))(ecx, &var_14);
    void* eax_5 = a1[5];
    int32_t var_c = *(eax_5 + 4);
    int32_t var_8 = *(eax_5 + 0x10);
    int32_t var_4 = *(eax_5 + 0x1c);
    return sub_47b190(var_14, a1[2], &var_c, edi, ebx, a1[0xb]);
}
