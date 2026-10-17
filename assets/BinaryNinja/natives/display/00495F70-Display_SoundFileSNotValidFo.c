// Original IGI.EXE function: Display_SoundFileSNotValidFo (VA 0x00495F70; static CFG gate PASS, CFG score 0.946).
#include "Display_SoundFileSNotValidFo.h"
int32_t Display_SoundFileSNotValidFo(int32_t* a1)

{
    char result = g_6840e9;

    if (!result)
        return result;

    int32_t* v_88_1 = a1;
    void v_68;
    void* objC;
    int32_t tmpD;
    int32_t* valA1 = Resource_Load(&v_68, tmpD, objC, &v_68);

    if (*valA1 != 0x46534c49)
    {
        Warning_Show("SOUND - File %s not valid format!");
        return Resource_Unload(a1);
    }

    void v_44;
    Display_SoundInvalidFilename(&v_44, a1);
    uint32_t valA4 = Display_CheckCapabilities_12(&v_44);
    int32_t valA5 = Display_RestoreDevice_12(&v_44);

    if (Display_RestoreDevice_10(valA4, valA5))
    {
        int32_t* v_84_3 = a1;
        Warning_Show("SOUND - File %s already loaded!");
        return Resource_Unload(a1);
    }

    void** flagP1 = Mem_Alloc(0x30, 4);
    __builtin_memset(flagP1, 0, 0x30);
    memcpy(&flagP1[4], valA1, 0x14);

    switch (flagP1[5])
    {
        case 0:
        case 2:
        {
            int32_t* dstD4 = a1;
            int32_t i = 0xffffffff;

            while (i)
            {
                bool cond_1_1 = 0 != *dstD4;
                dstD4 += 1;
                i -= 1;

                if (!cond_1_1)
                    break;
            }

            void* valA10 = Mem_Alloc(~i, 4);
            flagP1[0xa] = valA10;

            if (!valA10)
            {
                Sys_ExecuteBytecode_2(flagP1);
                flagP1 = nullptr;
                Resource_Unload(a1);
            }

            int32_t* dstD5 = a1;
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool cond_2_1 = 0 != *dstD5;
                dstD5 += 1;
                i_1 -= 1;

                if (!cond_2_1)
                    break;
            }

            int32_t objC2 = ~i_1;
            int32_t srcS3;
            int32_t dstD8;
            dstD8 = memcpy(flagP1[0xa], dstD5 - objC2, objC2 & 0xfffffffc);
            memcpy(dstD8, srcS3, objC2 & 3);
            break;
        }
        case 1:
        {
            flagP1[0xb] = &valA1[5];
            break;
        }
        case 3:
        {
            int32_t srcS4 = flagP1[8];
            void* valA12 = Mem_Alloc((flagP1[6] * *(flagP1 + 0x16) * srcS4) >> 3, 4);
            flagP1[0xb] = valA12;

            if (!valA12)
            {
                Sys_ExecuteBytecode_2(flagP1);
                flagP1 = nullptr;
                Resource_Unload(a1);
            }

            void v_64;
            Display_ClearSurfaces_10(&v_64, flagP1[6]);
            Display_SwapBuffers_10(&valA1[5], flagP1[0xb], srcS4, &v_64);
            break;
        }
    }

    if (flagP1[0xb])
    {
        int16_t v_48 = 0x12;
        int16_t v_58 = 1;
        int16_t v_56_1 = flagP1[6];
        int32_t objC12 = flagP1[7];
        int32_t v_54_1 = objC12;
        int16_t v_4a_1 = *(flagP1 + 0x16);
        int32_t valA19;
        int32_t tmpD5;
        tmpD5 = HIGHD(flagP1[6] * *(flagP1 + 0x16));
        valA19 = LOWD(flagP1[6] * *(flagP1 + 0x16));
        uint32_t tmpD8 = (valA19 + (tmpD5 & 7)) >> 3;
        int32_t v_50_1 = tmpD8 * objC12;
        int32_t v_24;
        __builtin_memset(&v_24, 0, 0x24);
        v_24 = 0x24;
        int32_t v_20_1 = 0x100e8;
        int32_t* valA24 = g_67a498;
        int16_t* v_14_1 = &v_58;
        int32_t v_1c_1 = flagP1[8] * tmpD8;

        if ((*(*valA24 + 0xc))(valA24, &v_24, &flagP1[9], 0))
        {
            Sys_ExecuteBytecode_2(flagP1);
            return Resource_Unload(a1);
        }

        if (!Display_SetGammaRamp_10(nullptr, flagP1, 0))
        {
            int32_t* srcS6 = flagP1[9];
            (*(*srcS6 + 8))(srcS6);
            Sys_ExecuteBytecode_2(flagP1);
            return Resource_Unload(a1);
        }

        if (flagP1[5] == 3)
        {
            Sys_ExecuteBytecode_2(flagP1[0xb]);
            flagP1[0xb] = 0;
        }

        flagP1[0xb] = 0;
    }

    Display_SyncVSync_10(0x5ca1b8, valA4, valA5, flagP1);
    return Resource_Unload(a1);
}
