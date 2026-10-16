#include "00417D50-Menu_LocalMenusystemSound_2.h"
/* 0x00417d50 Menu_LocalMenusystemSound_2 full linked: callers=1 callees=11 */
int32_t Menu_LocalMenusystemSound_2(void* a1)

{
    int32_t i = 0xffffffff;
    void* edi = a1 + 0xd4;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx = ~i;
    void var_100;
    int32_t esi_1;
    int32_t edi_2;
    edi_2 = memcpy(&var_100, edi - ecx, ecx & 0xfffffffc);
    memcpy(edi_2, esi_1, ecx & 3);
    char* eax_1 = sub_4a54d0(&var_100, 0x2f);

    if (eax_1)
        *eax_1 = 0;

    Menu_LocalMenusystemSound(a1);
    int32_t eax_2;
    void* ecx_4;
    int32_t edx;
    eax_2 = sub_4e6750("LOCAL:menusystem/sound/sounds.res");
    void* var_120 = a1 + 0xd4;
    *(a1 + 0x26bf) = 1;
    *(a1 + 0x1d4) = Resource_Load(eax_2, edx, ecx_4, nullptr);
    void* eax_4;
    void* ecx_5;
    int32_t edx_1;
    eax_4 = sub_4b5d80(&var_100, sub_417e20, a1);
    char* var_134 = "LOCAL:menusystem/missionsprites.res";
    *(a1 + 0x1d8) = Resource_Load(eax_4, edx_1, ecx_5, nullptr);
    sub_4b5d80(&var_100, sub_417e20, a1);
    Menu_LocalLanguageSS(a1, "menusystem.res");
    Menu_LocalLanguageSS(a1, "missions.res");
    return 6;
}
