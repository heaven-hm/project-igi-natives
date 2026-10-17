// Original IGI.EXE function: AI_ComputerComputerRes (VA 0x0046B070; static CFG gate PASS, CFG score 1.000).
#include "AI_ComputerComputerRes.h"
int32_t* AI_ComputerComputerRes()

{
    char* v_14 = "COMPUTER:computer.res";
    int32_t* valA;
    void* objC;
    void* objC1;
    int32_t tmpD;
    int32_t tmpD1;
    valA = Resource_Load(&g_5bddb0, tmpD, objC, nullptr);
    char* v_1c = "LANGUAGE:computer.res";
    g_5bddb0 = valA;
    int32_t* valA1;
    void* objC2;
    int32_t tmpD2;
    valA1 = Resource_Load(valA, tmpD1, objC1, nullptr);
    char* v_24 = "LANGUAGE:objectives.res";
    g_5bddb4 = valA1;
    g_5bddb8 = Resource_Load(valA1, tmpD2, objC2, nullptr);
    g_5bddbc = Sys_DispatchOpcode_18("LOCAL:computer/font1.fnt");
    g_5bddc0 = Sys_DispatchOpcode_18("LOCAL:computer/font3.fnt");
    g_5bddc4 = Sys_DispatchOpcode_18("LOCAL:computer/font4.fnt");
    Sys_IlfFileCorruptS(0x5bddc8, "COMPUTER:pointer.spr");
    Sys_IlfFileCorruptS(0x5bdde0, "COMPUTER:arrow1_1.spr");
    Sys_IlfFileCorruptS(&g_5bddf8, "COMPUTER:arrow1_2.spr");
    Sys_IlfFileCorruptS(0x5bde10, "COMPUTER:arrow1_3.spr");
    Sys_IlfFileCorruptS(0x5bde28, "COMPUTER:arrow2_1.spr");
    Sys_IlfFileCorruptS(&g_5bde40, "COMPUTER:arrow2_2.spr");
    Sys_IlfFileCorruptS(0x5bde58, "COMPUTER:arrow2_3.spr");
    Sys_IlfFileCorruptS(0x5bde70, "COMPUTER:arrow3_1.spr");
    Sys_IlfFileCorruptS(0x5bde88, "COMPUTER:arrow3_2.spr");
    Sys_IlfFileCorruptS(&g_5bdea0, "COMPUTER:arrow3_3.spr");
    Sys_IlfFileCorruptS(&g_5bdeb8, "COMPUTER:arrow4_1.spr");
    Sys_IlfFileCorruptS(0x5bded0, "COMPUTER:arrow4_2.spr");
    Sys_IlfFileCorruptS(0x5bdee8, "COMPUTER:arrow4_3.spr");
    Sys_IlfFileCorruptS(0x5bdf00, "COMPUTER:arrowup_1.spr");
    Sys_IlfFileCorruptS(&g_5bdf18, "COMPUTER:arrowup_2.spr");
    Sys_IlfFileCorruptS(0x5bdf30, "COMPUTER:arrowup_3.spr");
    Sys_IlfFileCorruptS(0x5bdf48, "COMPUTER:arrowdown_1.spr");
    Sys_IlfFileCorruptS(&g_5bdf60, "COMPUTER:arrowdown_2.spr");
    Sys_IlfFileCorruptS(0x5bdf78, "COMPUTER:arrowdown_3.spr");
    Sys_IlfFileCorruptS(0x5bdf90, "COMPUTER:plus_1.spr");
    Sys_IlfFileCorruptS(0x5bdfa8, "COMPUTER:plus_2.spr");
    Sys_IlfFileCorruptS(0x5bdfc0, "COMPUTER:plus_3.spr");
    Sys_IlfFileCorruptS(&g_5bdfd8, "COMPUTER:minus_1.spr");
    Sys_IlfFileCorruptS(0x5bdff0, "COMPUTER:minus_2.spr");
    Sys_IlfFileCorruptS(0x5be008, "COMPUTER:minus_3.spr");
    Sys_IlfFileCorruptS(0x5be020, "COMPUTER:sphere_1.spr");
    Sys_IlfFileCorruptS(&g_5be038, "COMPUTER:sphere_2.spr");
    Sys_IlfFileCorruptS(0x5be050, "COMPUTER:sphere_3.spr");
    Sys_IlfFileCorruptS(0x5be068, "COMPUTER:objective_1.spr");
    Sys_IlfFileCorruptS(0x5be080, "COMPUTER:objective_2.spr");
    char (** ctxB)[0x16] = &g_5be260;
    char (** i)[0x16] = &g_53f800;
    int32_t* srcS = &g_5be098;
    int32_t* result;

    do
    {
        result = Sys_IlfFileCorruptS(srcS, *i);
        char (* objC3)[0x16] = *i;
        i = &i[1];
        *ctxB = objC3;
        srcS = &srcS[6];
        ctxB = &ctxB[1];
    } while (i < "COMPUTER:h_scamera2.spr");

    return result;
}
