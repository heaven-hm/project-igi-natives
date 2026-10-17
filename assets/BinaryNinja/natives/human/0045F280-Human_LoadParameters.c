// Original IGI.EXE function: Human_LoadParameters (VA 0x0045F280; static CFG gate PASS, CFG score 0.986).
#include "Human_LoadParameters.h"
uint32_t Human_LoadParameters(float context, int32_t param_2)

{
    void* source_val = *(Level_LoadLevel_6() + 0x5c);
    void* data_1 = SoundSys_InitSoundSys_12();
    uint32_t result = *(context + 0x74);
    int32_t item_7c = 0;

    if (result)
    {
        result = Render_DrawLightmapMesh(context, &item_7c);

        if (!result)
        {
            result = Frames_GetTaskCounter();
            *(context + 0x7c4) = result;
        }
    }

    if (*(data_1 + 0x54) != source_val || **(source_val + 0x68) != context || *(source_val + 0xe8) != 1)
    {
        AI_CheckHearing_17(context);
        (*((Render_DrawRigidMesh_12() << 2) + &g_a982e0))(context, param_2);
        void* data_6 = Table_GetAt(context + 0x4c4, 0);

        if (data_6)
        {
            int32_t item_48 = 0;
            uint32_t data_8 = Weapon_UpdateRecoil_5();
            int32_t temp_2 = 0;
            temp_2 = *(context + 0x1c);
            (*(((data_8 * 0x180 + temp_2) << 2) + &g_a96ae0))(context, &item_48);
            void item_40;
            void item_28;
            Script_FormatString_12(data_6, &item_40, &item_28);
            (*((DynObj_LookupHashItem_5() << 2) + &g_a982e0))(data_6, 0);
        }

        double item_60[0x2];
        memcpy(&item_60, context + 0x20, 0x18);
        double item_50;
        double item_50_1 = item_50 + 4096.0;
        float item_80;
        float item_68;
        result = Display_RestoreDevice_15(&item_68, &item_80, &item_60);
        long double fpu_val_7_3 = item_80;
        long double f0_1 = 0.0f;
        fpu_val_7_3 - f0_1;
        result = (fpu_val_7_3 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
        {
            long double fpu_val_7_4 = item_80;
            long double f1_1 = 184320.0;
            fpu_val_7_4 - f1_1;
            result = (fpu_val_7_4 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_4 == f1_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
            {
                int32_t* data_13 = *(context + 0x854);
                uint32_t* source_3 = context + 0x854;
                int32_t item_78;
                float item_64;

                if (data_13)
                {
                    int32_t data_16;
                    int32_t temp_3;
                    temp_3 = HIGHD(Sys_AllocateMemory_22(data_13) << 5);
                    data_16 = LOWD(Sys_AllocateMemory_22(data_13) << 5);
                    uint32_t entity_5 = *source_3;
                    item_78 = (data_16 - temp_3) >> 1;
                    item_68 = item_68 - item_78;
                    int32_t data_21;
                    int32_t temp_4;
                    temp_4 = HIGHD(Sys_AllocateMemory_22(entity_5) << 5);
                    data_21 = LOWD(Sys_AllocateMemory_22(entity_5) << 5);
                    item_78 = (data_21 - temp_4) >> 1;
                    item_64 = item_64 - item_78;
                }

                char* dest_1 = context + 0x8d4;
                int32_t i_1 = 0x20;
                int32_t i;

                do
                {
                    uint32_t data_24 = *source_3;

                    if (!data_24)
                    {
                        result = SoundSys_StopSoundSample_11();

                        if (result)
                        {
                            char data_28 = QHash_ValueGet();

                            if (!data_28)
                                QHash_ValueSet();

                            result = Sys_OpenFileStream_18(SoundSys_StopSoundSample_11(), 0, 0, &g_567c74);
                            *source_3 = result;

                            if (!data_28)
                                Sys_DispatchOpcode_2();
                        }
                    }
                    else
                    {
                        Sys_FreeMemory_18(data_24, dest_1);
                        int32_t item_70_1 = item_64;
                        *dest_1 = 0;
                        uint32_t entity_6 = *source_3;
                        item_78 = item_68;
                        item_78 = item_78;
                        *(entity_6 + 4) = item_78;
                        *(*source_3 + 8) = item_70_1;
                        uint32_t data_26 = *source_3;
                        *(data_26 + 0x24) |= 0x40000;
                        *(*source_3 + 0xc) = 0x45800000;
                        Sys_CloseFileStream_18(*source_3);
                        result = Sys_AllocateMemory_22(*source_3);
                        item_64 = result + item_64;
                    }

                    source_3 = &source_3[1];
                    dest_1 = &dest_1[0x21];
                    i = i_1;
                    i_1 -= 1;
                } while (i != 1);
            }
        }
    }

    return result;
}
