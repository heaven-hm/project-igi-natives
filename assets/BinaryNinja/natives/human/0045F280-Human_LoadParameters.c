#include "Human_LoadParameters.h"
uint32_t Human_LoadParameters(float a1, int32_t a2)

{
    void* srcS = *(Level_LoadLevel_6() + 0x5c);
    void* valA1 = SoundSys_InitSoundSys_12();
    uint32_t result = *(a1 + 0x74);
    int32_t v_7c = 0;

    if (result)
    {
        result = Render_DrawLightmapMesh(a1, &v_7c);

        if (!result)
        {
            result = Frames_GetTaskCounter();
            *(a1 + 0x7c4) = result;
        }
    }

    if (*(valA1 + 0x54) != srcS || **(srcS + 0x68) != a1 || *(srcS + 0xe8) != 1)
    {
        AI_CheckHearing_17(a1);
        (*((Render_DrawRigidMesh_12() << 2) + &g_a982e0))(a1, a2);
        void* valA6 = Table_GetAt(a1 + 0x4c4, 0);

        if (valA6)
        {
            int32_t v_48 = 0;
            uint32_t valA8 = Weapon_UpdateRecoil_5();
            int32_t tmpD2 = 0;
            tmpD2 = *(a1 + 0x1c);
            (*(((valA8 * 0x180 + tmpD2) << 2) + &g_a96ae0))(a1, &v_48);
            void v_40;
            void v_28;
            Script_FormatString_12(valA6, &v_40, &v_28);
            (*((DynObj_LookupHashItem_5() << 2) + &g_a982e0))(valA6, 0);
        }

        double v_60[0x2];
        memcpy(&v_60, a1 + 0x20, 0x18);
        double v_50;
        double v_50_1 = v_50 + 4096.0;
        float v_80;
        float v_68;
        result = Display_RestoreDevice_15(&v_68, &v_80, &v_60);
        long double x87_r7_3 = v_80;
        long double f0_1 = 0f;
        x87_r7_3 - f0_1;
        result = (x87_r7_3 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == f0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
        {
            long double x87_r7_4 = v_80;
            long double f1_1 = 184320.0;
            x87_r7_4 - f1_1;
            result = (x87_r7_4 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == f1_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
            {
                int32_t* valA13 = *(a1 + 0x854);
                uint32_t* srcS3 = a1 + 0x854;
                int32_t v_78;
                float v_64;

                if (valA13)
                {
                    int32_t valA16;
                    int32_t tmpD3;
                    tmpD3 = HIGHD(Sys_AllocateMemory_22(valA13) << 5);
                    valA16 = LOWD(Sys_AllocateMemory_22(valA13) << 5);
                    uint32_t objC5 = *srcS3;
                    v_78 = (valA16 - tmpD3) >> 1;
                    v_68 = v_68 - v_78;
                    int32_t valA21;
                    int32_t tmpD4;
                    tmpD4 = HIGHD(Sys_AllocateMemory_22(objC5) << 5);
                    valA21 = LOWD(Sys_AllocateMemory_22(objC5) << 5);
                    v_78 = (valA21 - tmpD4) >> 1;
                    v_64 = v_64 - v_78;
                }

                char* dstD1 = a1 + 0x8d4;
                int32_t i_1 = 0x20;
                int32_t i;

                do
                {
                    uint32_t valA24 = *srcS3;

                    if (!valA24)
                    {
                        result = SoundSys_StopSoundSample_11();

                        if (result)
                        {
                            char valA28 = QHash_ValueGet();

                            if (!valA28)
                                QHash_ValueSet();

                            result = Sys_OpenFileStream_18(SoundSys_StopSoundSample_11(), 0, 0, &g_567c74);
                            *srcS3 = result;

                            if (!valA28)
                                Sys_DispatchOpcode_2();
                        }
                    }
                    else
                    {
                        Sys_FreeMemory_18(valA24, dstD1);
                        int32_t v_70_1 = v_64;
                        *dstD1 = 0;
                        uint32_t objC6 = *srcS3;
                        v_78 = v_68;
                        v_78 = v_78;
                        *(objC6 + 4) = v_78;
                        *(*srcS3 + 8) = v_70_1;
                        uint32_t valA26 = *srcS3;
                        *(valA26 + 0x24) |= 0x40000;
                        *(*srcS3 + 0xc) = 0x45800000;
                        Sys_CloseFileStream_18(*srcS3);
                        result = Sys_AllocateMemory_22(*srcS3);
                        v_64 = result + v_64;
                    }

                    srcS3 = &srcS3[1];
                    dstD1 = &dstD1[0x21];
                    i = i_1;
                    i_1 -= 1;
                } while (i != 1);
            }
        }
    }

    return result;
}
