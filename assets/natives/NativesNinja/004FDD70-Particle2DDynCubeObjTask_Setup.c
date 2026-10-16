#include "004FDD70-Particle2DDynCubeObjTask_Setup.h"
/* 0x004fdd70 Particle2DDynCubeObjTask_Setup full linked: callers=0 callees=7 */
int32_t sub_4fdd70(void* a1)

{
    sub_4b0d10(*(a1 + 0x68));
    void* ecx = *(a1 + 0x6c);
    *(a1 + 0x68) = 0;
    sub_4b0d10(ecx);
    void* edx = *(a1 + 0x70);
    *(a1 + 0x6c) = 0;
    sub_4b0d10(edx);
    void* eax_1 = *(a1 + 0x7c);
    *(a1 + 0x70) = 0;
    sub_4b0d10(eax_1);
    void* ecx_1 = *(a1 + 0x74);
    *(a1 + 0x7c) = 0;
    sub_4b0d10(ecx_1);
    void* edx_1 = *(a1 + 0x78);
    *(a1 + 0x74) = 0;
    sub_4b0d10(edx_1);
    int32_t eax_2 = *(a1 + 0xb8);
    *(a1 + 0x78) = 0;
    sub_4c7560(eax_2, a1);
    int32_t esi_1 = *(a1 + 0xf8);
    g_a7a4d0 += 0xffffff00 - esi_1 * 0x58;
    return 0xffffff00 - esi_1 * 0x58;
}
