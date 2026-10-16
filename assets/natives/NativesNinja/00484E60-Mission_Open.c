#include "00484E60-Mission_Open.h"
/* 0x00484e60 Mission_Open full linked: callers=0 callees=10 */
int32_t Mission_Open(int32_t* a1)

// Sig: void Mission_Open(char **ptr_file)
// Note: Name from igi.exe error string inside function: "Mission_Open():
// Couldn't load script: %s". Opens a mission definition script and builds its
// task tree.
{
    if (a1[2])
        return sub_4b1420(*a1, Mission_Open, nullptr);

    int32_t edi_1 = *a1;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi_1;
        edi_1 += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx = ~i;
    char var_104[0x104];
    int32_t esi_2;
    int32_t edi_3;
    edi_3 = memcpy(&var_104, edi_1 - ecx, ecx & 0xfffffffc);
    memcpy(edi_3, esi_2, ecx & 3);
    sub_516770(&var_104);
    char* edi_4 = "mission.qvm";

    if (!sub_48f340())
        edi_4 = "mission.qsc";

    int32_t result = sub_4b09c0(nullptr, nullptr, nullptr, edi_4, &var_104, 1);

    if (!result)
        return result;

    int32_t* eax_4 = Qvm_Load(*a1);

    if (eax_4)
    {
        Qvm_Execute(eax_4);
        return Qvm_Cleanup(eax_4);
    }

    char* var_114_4 = edi_4;
    Error_Show("Mission_Open(): Couldn't load script: %s");

    while (true)
        /* nop */
}
