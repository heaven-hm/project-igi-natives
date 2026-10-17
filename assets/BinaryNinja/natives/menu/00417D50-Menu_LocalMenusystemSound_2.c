// Original IGI.EXE function: Menu_LocalMenusystemSound_2 (VA 0x00417D50; static CFG gate PASS, CFG score 0.939).
#include "Menu_LocalMenusystemSound_2.h"
int32_t Menu_LocalMenusystemSound_2(void* a1)

{
    int32_t i = 0xffffffff;
    void* dstD = a1 + 0xd4;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC = ~i;
    void v_100;
    int32_t srcS1;
    int32_t dstD2;
    dstD2 = memcpy(&v_100, dstD - objC, objC & 0xfffffffc);
    memcpy(dstD2, srcS1, objC & 3);
    char* valA1 = Camera_SetFieldOfView_5(&v_100, 0x2f);

    if (valA1)
        *valA1 = 0;

    Menu_LocalMenusystemSound(a1);
    int32_t valA2;
    void* objC4;
    int32_t tmpD;
    valA2 = SoundSys_StopSoundSample_6("LOCAL:menusystem/sound/sounds.res");
    void* v_120 = a1 + 0xd4;
    *(a1 + 0x26bf) = 1;
    *(a1 + 0x1d4) = Resource_Load(valA2, tmpD, objC4, nullptr);
    void* valA4;
    void* objC5;
    int32_t tmpD1;
    valA4 = Sys_OpenFileStream_16(&v_100, sub_417e20, a1);
    char* v_134 = "LOCAL:menusystem/missionsprites.res";
    *(a1 + 0x1d8) = Resource_Load(valA4, tmpD1, objC5, nullptr);
    Sys_OpenFileStream_16(&v_100, sub_417e20, a1);
    Menu_LocalLanguageSS(a1, "menusystem.res");
    Menu_LocalLanguageSS(a1, "missions.res");
    return 6;
}
