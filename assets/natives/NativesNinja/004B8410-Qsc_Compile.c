#include "004B8410-Qsc_Compile.h"
/* 0x004b8410 Qsc_Compile full linked: callers=1 callees=21 */
int32_t Qsc_Compile(void* a1)

// Sig: int Qsc_Compile(char* qscPath)
// Note: Compiles a .qsc SCRIPT SOURCE into a .qvm binary: resolves the path
// (fcn_004B5B60), pulls the source through ResourceLoad (0x4B5F00), allocates a
// 0x94-byte compiler context via Mem_Alloc, emits ".qvm" output. Param: qscPath
// = script source path. RETURNS result object/flag.
{
    int32_t result;
    void* ecx;
    int32_t edx;
    result = sub_4b5b60(a1);

    if (!result)
        return result;

    void* var_11c_1 = a1;
    int32_t var_104;
    int32_t* eax_1 = Resource_Load(&var_104, edx, ecx, &var_104);
    int32_t* eax_2 = Mem_Alloc(0x94, 4);
    __builtin_memset(eax_2, 0, 0x94);
    eax_2[0x20] = eax_1;
    eax_2[0x21] = var_104;
    void* edi_2 = a1;
    int32_t i = 0xffffffff;
    eax_2[0x22] = 0;

    while (i)
    {
        bool cond:0_1 = 0 != *edi_2;
        edi_2 += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx_2 = ~i;
    int32_t esi_3;
    int32_t edi_5;
    edi_5 = memcpy(eax_2, edi_2 - ecx_2, ecx_2 & 0xfffffffc);
    memcpy(edi_5, esi_3, ecx_2 & 3);
    void* edi_6 = a1;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond:1_1 = 0 != *edi_6;
        edi_6 += 1;
        i_1 -= 1;

        if (!cond:1_1)
            break;
    }

    int32_t ecx_6 = ~i_1;
    void var_80;
    int32_t esi_5;
    int32_t edi_8;
    edi_8 = memcpy(&var_80, edi_6 - ecx_6, ecx_6 & 0xfffffffc);
    memcpy(edi_8, esi_5, ecx_6 & 3);
    char* eax_4 = sub_4b1e90(nullptr, 0, &var_80);
    void* edi_9 = a1;
    *eax_4 = g_547290[0];
    eax_4[4] = g_547290[4][0];
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool cond:2_1 = 0 != *edi_9;
        edi_9 += 1;
        i_2 -= 1;

        if (!cond:2_1)
            break;
    }

    int32_t ecx_12 = ~i_2;
    void var_100;
    int32_t esi_7;
    int32_t edi_11;
    edi_11 = memcpy(&var_100, edi_9 - ecx_12, ecx_12 & 0xfffffffc);
    memcpy(edi_11, esi_7, ecx_12 & 3);
    char* eax_6 = sub_4b1e90(nullptr, 0, &var_100);
    *eax_6 = g_547288[0];
    eax_6[4] = g_547288[4][0];
    QScript_Cleanup(&var_80);
    QScript_Cleanup(&var_100);

    if (QScript_ParseAndAssemble(&var_100, eax_2))
    {
        Qvm_Cleanup(eax_2);
        void* __saved_edi_3 = a1;
        return sub_4b7e10("An error occured when compiling file: %s");
    }

    if (QScript_Assemble(&var_80, &var_100))
    {
        void* __saved_esi_3 = a1;
        return sub_4b7e10("An error occured when compiling file: %s");
    }

    QScript_Cleanup(&var_100);
    return Qvm_Cleanup(eax_2);
}
