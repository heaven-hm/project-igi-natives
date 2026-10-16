#include "Qvm_Load.h"
int32_t* Qvm_Load(void* a1)

// Sig: int* Qvm_Load(char* qvmPath)
// Note: Loads a COMPILED .qvm script binary from the virtual filesystem
// (appends/selects ".qvm"; big 0x130 stack frame builds the script object).
// Param: qvmPath = path like "LOCAL:common/ai/guard.qvm". RETURNS pointer to
// the loaded QVM object, 0 on failure (calls engine debug-state check 0x48F1D0
// first). Use before executing/attaching scripts.
{
    int32_t* v_118 = nullptr;
    void** v_11c = nullptr;
    int32_t v_114;
    void v_100;

    if (!FX_FragmentSimulate_24())
    {
    label_4b81ba:
        int32_t valA10;
        void* objC7;
        valA10 = Sys_AllocateMemory_16(a1);

        if (!valA10)
            return 0;

        void* v_134_2 = a1;
        int32_t* valA11 = Resource_Load(valA10, &v_114, objC7, &v_114);
        v_118 = valA11;

        if (!valA11)
            return 0;
    }
    else
    {
        void* dstD1 = a1;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_0_1 = 0 != *dstD1;
            dstD1 += 1;
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t objC1 = ~i;
        int32_t srcS2;
        int32_t dstD3;
        dstD3 = memcpy(&v_100, dstD1 - objC1, objC1 & 0xfffffffc);
        memcpy(dstD3, srcS2, objC1 & 3);
        char* valA2 = Sys_OpenFileStream_7(nullptr, 0, &v_100);
        *valA2 = g_547290[0];
        valA2[4] = g_547290[4][0];

        if (!FX_FireBallUpdate_27())
        {
            if (!Sys_AllocateMemory_16(&v_100))
                goto label_4b81ba;

            void v_108;
            Sys_PushStack_16(&v_108, &v_100);
            void v_110;
            Sys_PushStack_16(&v_110, a1);

            if (Sys_PopStack_16(&v_108, &v_110) < 0)
                goto label_4b81ba;

            void** valA9 = Sys_ResolveSymbol_28(&v_100, 0, 0);
            v_11c = valA9;

            if (!valA9)
                goto label_4b81ba;
        }
        else
        {
            if (!Sys_AllocateMemory_16(&v_100))
                return 0;

            void** valA5 = Sys_ResolveSymbol_28(&v_100, 0, 0);
            v_11c = valA5;

            if (!valA5)
                return 0;
        }
    }

    int32_t* result = Mem_Alloc(0x94, 4);
    __builtin_memset(result, 0, 0x94);
    Sys_PopStack_23(0);
    void** valA14 = v_11c;

    if (valA14)
    {
    label_4b838c:
        result[0x24] = 1;
        result[0x23] = valA14;
        void* dstD13 = &v_100;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond_3_1 = 0 != *dstD13;
            dstD13 += 1;
            i_1 -= 1;

            if (!cond_3_1)
                break;
        }

        int32_t objC19 = ~i_1;
        int32_t srcS8;
        int32_t dstD16;
        dstD16 = memcpy(result, dstD13 - objC19, objC19 & 0xfffffffc);
        memcpy(dstD16, srcS8, objC19 & 3);
    }
    else
    {
        void* dstD5 = a1;
        result[0x20] = v_118;
        int32_t i_2 = 0xffffffff;
        result[0x21] = v_114;
        result[0x22] = valA14;

        while (i_2)
        {
            bool cond_4_1 = valA14 != *dstD5;
            dstD5 += 1;
            i_2 -= 1;

            if (!cond_4_1)
                break;
        }

        int32_t objC9 = ~i_2;
        int32_t srcS4;
        int32_t dstD8;
        dstD8 = memcpy(result, dstD5 - objC9, objC9 & 0xfffffffc);
        memcpy(dstD8, srcS4, objC9 & 3);

        if (FX_FragmentSimulate_24())
        {
            void* dstD9 = a1;
            int32_t i_3 = 0xffffffff;

            while (i_3)
            {
                bool cond_6_1 = 0 != *dstD9;
                dstD9 += 1;
                i_3 -= 1;

                if (!cond_6_1)
                    break;
            }

            int32_t objC13 = ~i_3;
            void v_80;
            int32_t srcS6;
            int32_t dstD11;
            dstD11 = memcpy(&v_80, dstD9 - objC13, objC13 & 0xfffffffc);
            memcpy(dstD11, srcS6, objC13 & 3);
            char* valA18 = Sys_OpenFileStream_7(nullptr, 0, &v_80);
            *valA18 = g_547288[0];
            valA18[4] = g_547288[4][0];
            QScript_Cleanup(&v_100);
            QScript_Cleanup(&v_80);

            if (QScript_ParseAndAssemble(&v_80, result))
            {
                Qvm_Cleanup(result);
                void* v_134_5 = a1;
                Sys_FreeMemory_22("An error occured when compiling file: %s");
                return 0;
            }

            if (QScript_Assemble(&v_100, &v_80))
            {
                void* v_130_11 = a1;
                Sys_FreeMemory_22("An error occured when compiling file: %s");
                return result;
            }

            QScript_Cleanup(&v_80);
            Qvm_Cleanup(result);
            result = Mem_Alloc(0x94, 4);
            __builtin_memset(result, 0, 0x94);
            valA14 = Sys_ResolveSymbol_28(&v_100, 0, 0);

            if (valA14)
                goto label_4b838c;

            void* v_130_10 = &v_100;
            Sys_FreeMemory_22("Failed to load QVM file: %s");
            Sys_ExecuteBytecode_2(result);
            return 0;
        }
    }

    return result;
}
