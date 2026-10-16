#include "0046B070-AI_ComputerComputerRes.h"
/* 0x0046b070 AI_ComputerComputerRes full linked: callers=1 callees=38 */
int32_t* sub_46b070()

{
    char* var_14 = "COMPUTER:computer.res";
    int32_t* eax;
    void* ecx;
    void* ecx_1;
    int32_t edx;
    int32_t edx_1;
    eax = Resource_Load(&g_5bddb0, edx, ecx, nullptr);
    char* var_1c = "LANGUAGE:computer.res";
    g_5bddb0 = eax;
    int32_t* eax_1;
    void* ecx_2;
    int32_t edx_2;
    eax_1 = Resource_Load(eax, edx_1, ecx_1, nullptr);
    char* var_24 = "LANGUAGE:objectives.res";
    g_5bddb4 = eax_1;
    g_5bddb8 = Resource_Load(eax_1, edx_2, ecx_2, nullptr);
    g_5bddbc = sub_4b7000("LOCAL:computer/font1.fnt");
    g_5bddc0 = sub_4b7000("LOCAL:computer/font3.fnt");
    g_5bddc4 = sub_4b7000("LOCAL:computer/font4.fnt");
    sub_4b6720(0x5bddc8, "COMPUTER:pointer.spr");
    sub_4b6720(0x5bdde0, "COMPUTER:arrow1_1.spr");
    sub_4b6720(&g_5bddf8, "COMPUTER:arrow1_2.spr");
    sub_4b6720(0x5bde10, "COMPUTER:arrow1_3.spr");
    sub_4b6720(0x5bde28, "COMPUTER:arrow2_1.spr");
    sub_4b6720(&g_5bde40, "COMPUTER:arrow2_2.spr");
    sub_4b6720(0x5bde58, "COMPUTER:arrow2_3.spr");
    sub_4b6720(0x5bde70, "COMPUTER:arrow3_1.spr");
    sub_4b6720(0x5bde88, "COMPUTER:arrow3_2.spr");
    sub_4b6720(&g_5bdea0, "COMPUTER:arrow3_3.spr");
    sub_4b6720(&g_5bdeb8, "COMPUTER:arrow4_1.spr");
    sub_4b6720(0x5bded0, "COMPUTER:arrow4_2.spr");
    sub_4b6720(0x5bdee8, "COMPUTER:arrow4_3.spr");
    sub_4b6720(0x5bdf00, "COMPUTER:arrowup_1.spr");
    sub_4b6720(&g_5bdf18, "COMPUTER:arrowup_2.spr");
    sub_4b6720(0x5bdf30, "COMPUTER:arrowup_3.spr");
    sub_4b6720(0x5bdf48, "COMPUTER:arrowdown_1.spr");
    sub_4b6720(&g_5bdf60, "COMPUTER:arrowdown_2.spr");
    sub_4b6720(0x5bdf78, "COMPUTER:arrowdown_3.spr");
    sub_4b6720(0x5bdf90, "COMPUTER:plus_1.spr");
    sub_4b6720(0x5bdfa8, "COMPUTER:plus_2.spr");
    sub_4b6720(0x5bdfc0, "COMPUTER:plus_3.spr");
    sub_4b6720(&g_5bdfd8, "COMPUTER:minus_1.spr");
    sub_4b6720(0x5bdff0, "COMPUTER:minus_2.spr");
    sub_4b6720(0x5be008, "COMPUTER:minus_3.spr");
    sub_4b6720(0x5be020, "COMPUTER:sphere_1.spr");
    sub_4b6720(&g_5be038, "COMPUTER:sphere_2.spr");
    sub_4b6720(0x5be050, "COMPUTER:sphere_3.spr");
    sub_4b6720(0x5be068, "COMPUTER:objective_1.spr");
    sub_4b6720(0x5be080, "COMPUTER:objective_2.spr");
    char (** ebx)[0x16] = &g_5be260;
    char (** i)[0x16] = &g_53f800;
    int32_t* esi = &g_5be098;
    int32_t* result;

    do
    {
        result = sub_4b6720(esi, *i);
        char (* ecx_3)[0x16] = *i;
        i = &i[1];
        *ebx = ecx_3;
        esi = &esi[6];
        ebx = &ebx[1];
    } while (i < "COMPUTER:h_scamera2.spr");

    return result;
}
