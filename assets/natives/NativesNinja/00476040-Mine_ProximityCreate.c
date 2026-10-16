#include "00476040-Mine_ProximityCreate.h"
/* 0x00476040 Mine_ProximityCreate full linked: callers=1 callees=9 */
struct status_msg* Mine_ProximityCreate(void* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, char a9)

// Sig: void Mine_ProximityCreate(void)
// Note: Creates a PROXIMITY MINE entity: initializes hash state via
// QHash_Init(0x4B0D60), reads mine id word 0x5BE3A0. IGI-MP hooks for network
// mine sync.
{
    int32_t kind = Qhash_Init(1);
    kind = g_5be3a0;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    memcpy(&result->sprite[0x3c], a2, 0x18);
    memcpy(&result->sprite[0x54], a3, 0x28);
    int32_t edi_2 = a4;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi_2;
        edi_2 += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx_1 = ~i;
    int32_t esi_3;
    int32_t edi_5;
    edi_5 = memcpy(&result->sprite[0xbc], edi_2 - ecx_1, ecx_1 & 0xfffffffc);
    memcpy(edi_5, esi_3, ecx_1 & 3);
    *(result + 0x240) = a6;
    *(result + 0x238) = a5;
    *(result + 0x244) = a7;
    *(result + 0x249) = a9;
    sub_481360(result, 1f, a8, 0, 0x3f800000, 0, 5, 1, "explo_proxy");
    sub_475d90(result, 0);
    Qhash_Reset();
    return result;
}
