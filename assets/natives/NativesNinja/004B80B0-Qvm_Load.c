#include "004B80B0-Qvm_Load.h"
/* 0x004b80b0 Qvm_Load full linked: callers=19 callees=39 */
int32_t* Qvm_Load(void* a1)

// Sig: int* Qvm_Load(char* qvmPath)
// Note: Loads a COMPILED .qvm script binary from the virtual filesystem
// (appends/selects ".qvm"; big 0x130 stack frame builds the script object).
// Param: qvmPath = path like "LOCAL:common/ai/guard.qvm". RETURNS pointer to
// the loaded QVM object, 0 on failure (calls engine debug-state check 0x48F1D0
// first). Use before executing/attaching scripts.
{
    int32_t* var_118 = nullptr;
    void** var_11c = nullptr;
    int32_t var_114;
    void var_100;

    if (!sub_48f1d0())
    {
    label_4b81ba:
        int32_t eax_10;
        void* ecx_7;
        eax_10 = sub_4b5b60(a1);

        if (!eax_10)
            return 0;

        void* var_134_2 = a1;
        int32_t* eax_11 = Resource_Load(eax_10, &var_114, ecx_7, &var_114);
        var_118 = eax_11;

        if (!eax_11)
            return 0;
    }
    else
    {
        void* edi_1 = a1;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:0_1 = 0 != *edi_1;
            edi_1 += 1;
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t ecx_1 = ~i;
        int32_t esi_2;
        int32_t edi_3;
        edi_3 = memcpy(&var_100, edi_1 - ecx_1, ecx_1 & 0xfffffffc);
        memcpy(edi_3, esi_2, ecx_1 & 3);
        char* eax_2 = sub_4b1e90(nullptr, 0, &var_100);
        *eax_2 = g_547290[0];
        eax_2[4] = g_547290[4][0];

        if (!sub_48f340())
        {
            if (!sub_4b5b60(&var_100))
                goto label_4b81ba;

            void var_108;
            sub_4b6440(&var_108, &var_100);
            void var_110;
            sub_4b6440(&var_110, a1);

            if (sub_4b6490(&var_108, &var_110) < 0)
                goto label_4b81ba;

            void** eax_9 = sub_4bd220(&var_100, 0, 0);
            var_11c = eax_9;

            if (!eax_9)
                goto label_4b81ba;
        }
        else
        {
            if (!sub_4b5b60(&var_100))
                return 0;

            void** eax_5 = sub_4bd220(&var_100, 0, 0);
            var_11c = eax_5;

            if (!eax_5)
                return 0;
        }
    }

    int32_t* result = Mem_Alloc(0x94, 4);
    __builtin_memset(result, 0, 0x94);
    sub_4b8a10(0);
    void** eax_14 = var_11c;

    if (eax_14)
    {
    label_4b838c:
        result[0x24] = 1;
        result[0x23] = eax_14;
        void* edi_13 = &var_100;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond:3_1 = 0 != *edi_13;
            edi_13 += 1;
            i_1 -= 1;

            if (!cond:3_1)
                break;
        }

        int32_t ecx_19 = ~i_1;
        int32_t esi_8;
        int32_t edi_16;
        edi_16 = memcpy(result, edi_13 - ecx_19, ecx_19 & 0xfffffffc);
        memcpy(edi_16, esi_8, ecx_19 & 3);
    }
    else
    {
        void* edi_5 = a1;
        result[0x20] = var_118;
        int32_t i_2 = 0xffffffff;
        result[0x21] = var_114;
        result[0x22] = eax_14;

        while (i_2)
        {
            bool cond:4_1 = eax_14 != *edi_5;
            edi_5 += 1;
            i_2 -= 1;

            if (!cond:4_1)
                break;
        }

        int32_t ecx_9 = ~i_2;
        int32_t esi_4;
        int32_t edi_8;
        edi_8 = memcpy(result, edi_5 - ecx_9, ecx_9 & 0xfffffffc);
        memcpy(edi_8, esi_4, ecx_9 & 3);

        if (sub_48f1d0())
        {
            void* edi_9 = a1;
            int32_t i_3 = 0xffffffff;

            while (i_3)
            {
                bool cond:6_1 = 0 != *edi_9;
                edi_9 += 1;
                i_3 -= 1;

                if (!cond:6_1)
                    break;
            }

            int32_t ecx_13 = ~i_3;
            void var_80;
            int32_t esi_6;
            int32_t edi_11;
            edi_11 = memcpy(&var_80, edi_9 - ecx_13, ecx_13 & 0xfffffffc);
            memcpy(edi_11, esi_6, ecx_13 & 3);
            char* eax_18 = sub_4b1e90(nullptr, 0, &var_80);
            *eax_18 = g_547288[0];
            eax_18[4] = g_547288[4][0];
            QScript_Cleanup(&var_100);
            QScript_Cleanup(&var_80);

            if (QScript_ParseAndAssemble(&var_80, result))
            {
                Qvm_Cleanup(result);
                void* var_134_5 = a1;
                sub_4b7e10("An error occured when compiling file: %s");
                return 0;
            }

            if (QScript_Assemble(&var_100, &var_80))
            {
                void* var_130_11 = a1;
                sub_4b7e10("An error occured when compiling file: %s");
                return result;
            }

            QScript_Cleanup(&var_80);
            Qvm_Cleanup(result);
            result = Mem_Alloc(0x94, 4);
            __builtin_memset(result, 0, 0x94);
            eax_14 = sub_4bd220(&var_100, 0, 0);

            if (eax_14)
                goto label_4b838c;

            void* var_130_10 = &var_100;
            sub_4b7e10("Failed to load QVM file: %s");
            sub_4b0d10(result);
            return 0;
        }
    }

    return result;
}
