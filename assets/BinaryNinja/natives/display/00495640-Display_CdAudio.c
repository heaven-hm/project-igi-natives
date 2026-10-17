// Original IGI.EXE function: Display_CdAudio (VA 0x00495640; static CFG gate PASS, CFG score 0.882).
#include "Display_CdAudio.h"
uint32_t Display_CdAudio()

{
    int32_t srcS = 0;
    int32_t v_1a8 = 0;
    uint32_t result = mixerGetNumDevs();
    uint32_t uMxId = 0;
    uint32_t uMxId_1 = 0;

    if (result <= 0)
    {
        g_5ca150 = 0;
        return result;
    }

    while (true)
    {
        uint32_t fdwOpen = 0;
        uint32_t dwInstance = 0;
        int32_t* phmx = srcS * 0x364 + &g_676e58;
        uint32_t dwCallback = 0;
        __builtin_memset(phmx, 0, 0x364);

        if (!mixerOpen(phmx, uMxId, dwCallback, dwInstance, fdwOpen)
            && !mixerGetDevCapsA(*phmx, &phmx[1], 0x30))
        {
            int32_t flagP = 0;
            int32_t v_194_1 = 0;

            if (phmx[0xc] > 0)
            {
                while (true)
                {
                    HMIXEROBJ hmxobj_2 = *phmx;
                    MIXERLINEA v_a8;
                    __builtin_memset(&v_a8, 0, 0xa8);
                    uint32_t fdwInfo = 0x80000000;
                    MIXERLINEA* pmxl = &v_a8;
                    v_a8.cbStruct = 0xa8;
                    v_a8.dwDestination = flagP;
                    v_a8.dwSource = 0;

                    if (!mixerGetLineInfoA(hmxobj_2, pmxl, fdwInfo))
                    {
                        DWORD dwType = v_a8.Target.dwType;

                        if (dwType == 1 || dwType == 5)
                        {
                            int32_t tmpD2 = 0;
                            bool cond_4_1 = v_a8.cConnections <= 0;
                            memcpy(&phmx[0xd], &v_a8, 0xa8);
                            int32_t v_188_1 = 0;

                            if (!cond_4_1)
                            {
                                while (true)
                                {
                                    uint32_t fdwInfo_1 = 0x80000001;
                                    MIXERLINEA v_150;
                                    __builtin_memset(&v_150, 0, 0xa8);
                                    HMIXEROBJ hmxobj = *phmx;
                                    MIXERLINEA* pmxl_1 = &v_150;
                                    v_150.cbStruct = 0xa8;
                                    v_150.dwDestination = flagP;
                                    v_150.dwSource = tmpD2;
                                    uint32_t valA8 = mixerGetLineInfoA(hmxobj, pmxl_1, fdwInfo_1);

                                    if (!valA8)
                                    {
                                        DWORD dwComponentType = v_150.dwComponentType;
                                        void* flagP1 = nullptr;
                                        void* v_1a4_1 = nullptr;
                                        int32_t* v_1a0_1 = nullptr;
                                        int32_t* v_198_1 = nullptr;
                                        v_118;
                                        int32_t* valA10;
                                        char tmpD3;

                                        if (dwComponentType != 0x1008)
                                        {
                                            char* dstD3 = "Wave";
                                            char* srcS1 = &v_118;

                                            while (true)
                                            {
                                                tmpD3 = *srcS1;
                                                valA8 = tmpD3;
                                                char f0_1 = *dstD3;
                                                bool c_1 = tmpD3 < f0_1;

                                                if (tmpD3 == f0_1)
                                                {
                                                    if (!valA8)
                                                    {
                                                        valA10 = nullptr;
                                                        break;
                                                    }

                                                    tmpD3 = srcS1[1];
                                                    valA8 = tmpD3;
                                                    char f3_1 = dstD3[1];
                                                    c_1 = tmpD3 < f3_1;

                                                    if (tmpD3 == f3_1)
                                                    {
                                                        srcS1 = &srcS1[2];
                                                        dstD3 = &dstD3[2];

                                                        if (valA8)
                                                            continue;

                                                        valA10 = nullptr;
                                                        break;
                                                    }
                                                }

                                                valA10 = valA8 - valA8 + 1;
                                                break;
                                            }
                                        }

                                        if (dwComponentType == 0x1008 || !valA10)
                                        {
                                            v_1a4_1 = &phmx[0x37];
                                            valA10 = &phmx[0xd6];
                                            flagP1 = &phmx[0x8b];
                                            v_1a0_1 = &phmx[0xd5];
                                            v_198_1 = valA10;
                                        }

                                        if (dwComponentType != 0x1009 && dwComponentType != 0x1005)
                                        {
                                            char* dstD4 = "CD Audio";
                                            char* srcS2 = &v_118;

                                            while (true)
                                            {
                                                char objC2 = *srcS2;
                                                tmpD3 = *dstD4;
                                                valA10 = objC2;
                                                bool c_3 = objC2 < tmpD3;

                                                if (objC2 == tmpD3)
                                                {
                                                    if (!valA10)
                                                    {
                                                        valA10 = nullptr;
                                                        break;
                                                    }

                                                    tmpD3 = srcS2[1];
                                                    objC2 = dstD4[1];
                                                    valA10 = tmpD3;
                                                    c_3 = tmpD3 < objC2;

                                                    if (tmpD3 == objC2)
                                                    {
                                                        srcS2 = &srcS2[2];
                                                        dstD4 = &dstD4[2];

                                                        if (valA10)
                                                            continue;

                                                        valA10 = nullptr;
                                                        break;
                                                    }
                                                }

                                                valA10 = valA10 - valA10 + 1;
                                                break;
                                            }
                                        }

                                        if ((dwComponentType == 0x1009 || dwComponentType == 0x1005
                                            || !valA10) && g_6840e8)
                                        {
                                            v_1a4_1 = &phmx[0x61];
                                            flagP1 = &phmx[0xb0];
                                            v_1a0_1 = &phmx[0xd7];
                                            v_198_1 = &phmx[0xd8];
                                        }

                                        if (flagP1)
                                        {
                                            int32_t v_1bc_2 = 4;
                                            MIXERLINECONTROLSA pmxlc;
                                            pmxlc.dwLineID = v_150.dwLineID;
                                            DWORD cControls = v_150.cControls;
                                            pmxlc.cbStruct = 0x18;
                                            pmxlc.cControls = cControls;
                                            pmxlc.cbmxctrl = 0x94;
                                            void* valA16 = Mem_Alloc(cControls * 0x94, v_1bc_2);
                                            HMIXEROBJ hmxobj_1 = *phmx;
                                            pmxlc.pamxctrl = valA16;

                                            if (!
                                                mixerGetLineControlsA(hmxobj_1, &pmxlc, 0x80000000))
                                            {
                                                int32_t v_190_1 = 0;

                                                if (pmxlc.cControls > 0)
                                                {
                                                    void* v_19c_1 = nullptr;
                                                    bool cond_8_1;

                                                    do
                                                    {
                                                        void* valA20 = v_19c_1 + pmxlc.pamxctrl;

                                                        if (*(valA20 + 8) == 0x50030001)
                                                        {
                                                            int32_t v_1bc_4 = 4;
                                                            memcpy(v_1a4_1, &v_150,
                                                                0xa8);
                                                            memcpy(flagP1, valA20, 0x94);
                                                            int32_t objC5 = *(flagP1 + 4);
                                                            int32_t tmpD9 = *(flagP1 + 0x10);
                                                            MIXERCONTROLDETAILS pmxcd;
                                                            pmxcd.cbStruct = 0x18;
                                                            int32_t valA21 = *(v_1a4_1 + 0x1c);
                                                            pmxcd.dwControlID = objC5;
                                                            pmxcd.cChannels = valA21;
                                                            *(&pmxcd. + 0) = tmpD9;
                                                            pmxcd.cbDetails = 4;
                                                            void* valA23 =
                                                                Mem_Alloc(valA21 << 2, v_1bc_4);
                                                            HMIXEROBJ hmxobj_3 = *phmx;
                                                            pmxcd.paDetails = valA23;
                                                            bool cond_9_1 = mixerGetControlDetailsA(
                                                                hmxobj_3, &pmxcd, 0x80000000);
                                                            LPVOID paDetails = pmxcd.paDetails;

                                                            if (!cond_9_1)
                                                            {
                                                                if (*(v_1a4_1 + 0x1c) > 0)
                                                                    *v_1a0_1 = *paDetails;

                                                                if (*(v_1a4_1 + 0x1c) > 1)
                                                                    *v_198_1 = *(paDetails + 4);
                                                            }

                                                            Sys_ExecuteBytecode_2(paDetails);
                                                            pmxcd.paDetails = 0;
                                                            v_1a8 += 1;
                                                        }

                                                        cond_8_1 = v_190_1 + 1 < pmxlc.cControls;
                                                        v_190_1 += 1;
                                                        v_19c_1 += 0x94;
                                                    } while (cond_8_1);
                                                }

                                                Sys_ExecuteBytecode_2(pmxlc.pamxctrl);
                                                pmxlc.pamxctrl = 0;
                                            }
                                        }
                                    }

                                    flagP = v_194_1;
                                    tmpD2 = v_188_1 + 1;
                                    v_188_1 = tmpD2;

                                    if (tmpD2 >= v_a8.cConnections)
                                        break;
                                }
                            }

                            if (phmx[0x8b] && phmx[0xb0])
                                v_1a8 += 1;

                            srcS = v_1a8;
                        }
                    }

                    flagP += 1;
                    v_194_1 = flagP;

                    if (flagP >= phmx[0xc])
                        break;
                }
            }

            uMxId = uMxId_1;
        }

        uMxId += 1;
        uMxId_1 = uMxId;

        if (uMxId >= result)
            break;
    }

    g_5ca150 = srcS;
    return result;
}
