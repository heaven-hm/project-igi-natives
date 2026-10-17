// Original IGI.EXE function: Qvm_Load (VA 0x004B80B0; static CFG gate PASS, CFG score 0.914).
#include "Qvm_Load.h"
int32_t* Qvm_Load(void* context)

// Sig: int* Qvm_Load(char* qvmPath)
// Note: Loads a COMPILED .qvm script binary from the virtual filesystem
// (appends/selects ".qvm"; big 0x130 stack frame builds the script object).
// Param: qvmPath = path like "LOCAL:common/ai/guard.qvm". RETURNS pointer to
// the loaded QVM object, 0 on failure (calls engine debug-state check 0x48F1D0
// first). Use before executing/attaching scripts.
{
    int32_t* item_118 = nullptr;
    void** item_11c = nullptr;
    int32_t item_114;
    void item_100;

    if (!FX_FragmentSimulate_24())
    {
    label_4b81ba:
        int32_t data_10;
        void* entity_7;
        data_10 = Sys_AllocateMemory_16(context);

        if (!data_10)
            return 0;

        void* item_134_2 = context;
        int32_t* data_11 = Resource_Load(data_10, &item_114, entity_7, &item_114);
        item_118 = data_11;

        if (!data_11)
            return 0;
    }
    else
    {
        void* dest_1 = context;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool flag_0_1 = 0 != *dest_1;
            dest_1 += 1;
            i -= 1;

            if (!flag_0_1)
                break;
        }

        int32_t entity_1 = ~i;
        int32_t source_2;
        int32_t dest_3;
        dest_3 = memcpy(&item_100, dest_1 - entity_1, entity_1 & 0xfffffffc);
        memcpy(dest_3, source_2, entity_1 & 3);
        char* data_2 = Sys_OpenFileStream_7(nullptr, 0, &item_100);
        *data_2 = g_547290[0];
        data_2[4] = g_547290[4][0];

        if (!FX_FireBallUpdate_27())
        {
            if (!Sys_AllocateMemory_16(&item_100))
                goto label_4b81ba;

            void item_108;
            Sys_PushStack_16(&item_108, &item_100);
            void item_110;
            Sys_PushStack_16(&item_110, context);

            if (Sys_PopStack_16(&item_108, &item_110) < 0)
                goto label_4b81ba;

            void** data_9 = Sys_ResolveSymbol_28(&item_100, 0, 0);
            item_11c = data_9;

            if (!data_9)
                goto label_4b81ba;
        }
        else
        {
            if (!Sys_AllocateMemory_16(&item_100))
                return 0;

            void** data_5 = Sys_ResolveSymbol_28(&item_100, 0, 0);
            item_11c = data_5;

            if (!data_5)
                return 0;
        }
    }

    int32_t* result = Mem_Alloc(0x94, 4);
    memset(result, 0, 0x94);
    Sys_PopStack_23(0);
    void** data_14 = item_11c;

    if (data_14)
    {
    label_4b838c:
        result[0x24] = 1;
        result[0x23] = data_14;
        void* dest_13 = &item_100;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool flag_3_1 = 0 != *dest_13;
            dest_13 += 1;
            i_1 -= 1;

            if (!flag_3_1)
                break;
        }

        int32_t entity_19 = ~i_1;
        int32_t source_8;
        int32_t dest_16;
        dest_16 = memcpy(result, dest_13 - entity_19, entity_19 & 0xfffffffc);
        memcpy(dest_16, source_8, entity_19 & 3);
    }
    else
    {
        void* dest_5 = context;
        result[0x20] = item_118;
        int32_t i_2 = 0xffffffff;
        result[0x21] = item_114;
        result[0x22] = data_14;

        while (i_2)
        {
            bool flag_4_1 = data_14 != *dest_5;
            dest_5 += 1;
            i_2 -= 1;

            if (!flag_4_1)
                break;
        }

        int32_t entity_9 = ~i_2;
        int32_t source_4;
        int32_t dest_8;
        dest_8 = memcpy(result, dest_5 - entity_9, entity_9 & 0xfffffffc);
        memcpy(dest_8, source_4, entity_9 & 3);

        if (FX_FragmentSimulate_24())
        {
            void* dest_9 = context;
            int32_t i_3 = 0xffffffff;

            while (i_3)
            {
                bool flag_6_1 = 0 != *dest_9;
                dest_9 += 1;
                i_3 -= 1;

                if (!flag_6_1)
                    break;
            }

            int32_t entity_13 = ~i_3;
            void item_80;
            int32_t source_6;
            int32_t dest_11;
            dest_11 = memcpy(&item_80, dest_9 - entity_13, entity_13 & 0xfffffffc);
            memcpy(dest_11, source_6, entity_13 & 3);
            char* data_18 = Sys_OpenFileStream_7(nullptr, 0, &item_80);
            *data_18 = g_547288[0];
            data_18[4] = g_547288[4][0];
            QScript_Cleanup(&item_100);
            QScript_Cleanup(&item_80);

            if (QScript_ParseAndAssemble(&item_80, result))
            {
                Qvm_Cleanup(result);
                void* item_134_5 = context;
                Sys_FreeMemory_22("An error occured when compiling file: %s");
                return 0;
            }

            if (QScript_Assemble(&item_100, &item_80))
            {
                void* item_130_11 = context;
                Sys_FreeMemory_22("An error occured when compiling file: %s");
                return result;
            }

            QScript_Cleanup(&item_80);
            Qvm_Cleanup(result);
            result = Mem_Alloc(0x94, 4);
            memset(result, 0, 0x94);
            data_14 = Sys_ResolveSymbol_28(&item_100, 0, 0);

            if (data_14)
                goto label_4b838c;

            void* item_130_10 = &item_100;
            Sys_FreeMemory_22("Failed to load QVM file: %s");
            Sys_ExecuteBytecode_2(result);
            return 0;
        }
    }

    return result;
}
