#include "Qsc_Compile.h"
int32_t Qsc_Compile(void* a1)

// Sig: int Qsc_Compile(char* qscPath)
// Note: Compiles a .qsc SCRIPT SOURCE into a .qvm binary: resolves the path
// (fcn_004B5B60), pulls the source through ResourceLoad (0x4B5F00), allocates a
// 0x94-byte compiler context via Mem_Alloc, emits ".qvm" output. Param: qscPath
// = script source path. RETURNS result object/flag.
{
    int32_t result;
    void* objC;
    int32_t tmpD;
    result = Sys_AllocateMemory_16(a1);

    if (!result)
        return result;

    void* v_11c_1 = a1;
    int32_t v_104;
    int32_t* valA1 = Resource_Load(&v_104, tmpD, objC, &v_104);
    int32_t* valA2 = Mem_Alloc(0x94, 4);
    __builtin_memset(valA2, 0, 0x94);
    valA2[0x20] = valA1;
    valA2[0x21] = v_104;
    void* dstD2 = a1;
    int32_t i = 0xffffffff;
    valA2[0x22] = 0;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD2;
        dstD2 += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC2 = ~i;
    int32_t srcS3;
    int32_t dstD5;
    dstD5 = memcpy(valA2, dstD2 - objC2, objC2 & 0xfffffffc);
    memcpy(dstD5, srcS3, objC2 & 3);
    void* dstD6 = a1;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond_1_1 = 0 != *dstD6;
        dstD6 += 1;
        i_1 -= 1;

        if (!cond_1_1)
            break;
    }

    int32_t objC6 = ~i_1;
    void v_80;
    int32_t srcS5;
    int32_t dstD8;
    dstD8 = memcpy(&v_80, dstD6 - objC6, objC6 & 0xfffffffc);
    memcpy(dstD8, srcS5, objC6 & 3);
    char* valA4 = Sys_OpenFileStream_7(nullptr, 0, &v_80);
    void* dstD9 = a1;
    *valA4 = g_547290[0];
    valA4[4] = g_547290[4][0];
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool cond_2_1 = 0 != *dstD9;
        dstD9 += 1;
        i_2 -= 1;

        if (!cond_2_1)
            break;
    }

    int32_t objC12 = ~i_2;
    void v_100;
    int32_t srcS7;
    int32_t dstD11;
    dstD11 = memcpy(&v_100, dstD9 - objC12, objC12 & 0xfffffffc);
    memcpy(dstD11, srcS7, objC12 & 3);
    char* valA6 = Sys_OpenFileStream_7(nullptr, 0, &v_100);
    *valA6 = g_547288[0];
    valA6[4] = g_547288[4][0];
    QScript_Cleanup(&v_80);
    QScript_Cleanup(&v_100);

    if (QScript_ParseAndAssemble(&v_100, valA2))
    {
        Qvm_Cleanup(valA2);
        void* __saved_edi_3 = a1;
        return Sys_FreeMemory_22("An error occured when compiling file: %s");
    }

    if (QScript_Assemble(&v_80, &v_100))
    {
        void* __saved_esi_3 = a1;
        return Sys_FreeMemory_22("An error occured when compiling file: %s");
    }

    QScript_Cleanup(&v_100);
    return Qvm_Cleanup(valA2);
}
