// Original IGI.EXE function: Display_CdAudio (VA 0x00495640; static CFG gate PASS, CFG score 0.882).
#include "Display_CdAudio.h"
uint32_t Display_CdAudio()

{
    int32_t source_val = 0;
    int32_t item_1a8 = 0;
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
        int32_t* phmx = source_val * 0x364 + &g_676e58;
        uint32_t dwCallback = 0;
        memset(phmx, 0, 0x364);

        if (!mixerOpen(phmx, uMxId, dwCallback, dwInstance, fdwOpen)
            && !mixerGetDevCapsA(*phmx, &phmx[1], 0x30))
        {
            int32_t flagP = 0;
            int32_t item_194_1 = 0;

            if (phmx[0xc] > 0)
            {
                while (true)
                {
                    HMIXEROBJ hmxobj_2 = *phmx;
                    MIXERLINEA item_a8;
                    memset(&item_a8, 0, 0xa8);
                    uint32_t fdwInfo = 0x80000000;
                    MIXERLINEA* pmxl = &item_a8;
                    item_a8.cbStruct = 0xa8;
                    item_a8.dwDestination = flagP;
                    item_a8.dwSource = 0;

                    if (!mixerGetLineInfoA(hmxobj_2, pmxl, fdwInfo))
                    {
                        DWORD dwType = item_a8.Target.dwType;

                        if (dwType == 1 || dwType == 5)
                        {
                            int32_t temp_2 = 0;
                            bool flag_4_1 = item_a8.cConnections <= 0;
                            memcpy(&phmx[0xd], &item_a8, 0xa8);
                            int32_t item_188_1 = 0;

                            if (!flag_4_1)
                            {
                                while (true)
                                {
                                    uint32_t fdwInfo_1 = 0x80000001;
                                    MIXERLINEA item_150;
                                    memset(&item_150, 0, 0xa8);
                                    HMIXEROBJ hmxobj = *phmx;
                                    MIXERLINEA* pmxl_1 = &item_150;
                                    item_150.cbStruct = 0xa8;
                                    item_150.dwDestination = flagP;
                                    item_150.dwSource = temp_2;
                                    uint32_t data_8 = mixerGetLineInfoA(hmxobj, pmxl_1, fdwInfo_1);

                                    if (!data_8)
                                    {
                                        DWORD dwComponentType = item_150.dwComponentType;
                                        void* flagP1 = nullptr;
                                        void* item_1a4_1 = nullptr;
                                        int32_t* item_1a0_1 = nullptr;
                                        int32_t* item_198_1 = nullptr;
                                        item_118;
                                        int32_t* data_10;
                                        char temp_3;

                                        if (dwComponentType != 0x1008)
                                        {
                                            char* dest_3 = "Wave";
                                            char* source_1 = &item_118;

                                            while (true)
                                            {
                                                temp_3 = *source_1;
                                                data_8 = temp_3;
                                                char f0_1 = *dest_3;
                                                bool c_1 = temp_3 < f0_1;

                                                if (temp_3 == f0_1)
                                                {
                                                    if (!data_8)
                                                    {
                                                        data_10 = nullptr;
                                                        break;
                                                    }

                                                    temp_3 = source_1[1];
                                                    data_8 = temp_3;
                                                    char f3_1 = dest_3[1];
                                                    c_1 = temp_3 < f3_1;

                                                    if (temp_3 == f3_1)
                                                    {
                                                        source_1 = &source_1[2];
                                                        dest_3 = &dest_3[2];

                                                        if (data_8)
                                                            continue;

                                                        data_10 = nullptr;
                                                        break;
                                                    }
                                                }

                                                data_10 = data_8 - data_8 + 1;
                                                break;
                                            }
                                        }

                                        if (dwComponentType == 0x1008 || !data_10)
                                        {
                                            item_1a4_1 = &phmx[0x37];
                                            data_10 = &phmx[0xd6];
                                            flagP1 = &phmx[0x8b];
                                            item_1a0_1 = &phmx[0xd5];
                                            item_198_1 = data_10;
                                        }

                                        if (dwComponentType != 0x1009 && dwComponentType != 0x1005)
                                        {
                                            char* dest_4 = "CD Audio";
                                            char* source_2 = &item_118;

                                            while (true)
                                            {
                                                char entity_2 = *source_2;
                                                temp_3 = *dest_4;
                                                data_10 = entity_2;
                                                bool c_3 = entity_2 < temp_3;

                                                if (entity_2 == temp_3)
                                                {
                                                    if (!data_10)
                                                    {
                                                        data_10 = nullptr;
                                                        break;
                                                    }

                                                    temp_3 = source_2[1];
                                                    entity_2 = dest_4[1];
                                                    data_10 = temp_3;
                                                    c_3 = temp_3 < entity_2;

                                                    if (temp_3 == entity_2)
                                                    {
                                                        source_2 = &source_2[2];
                                                        dest_4 = &dest_4[2];

                                                        if (data_10)
                                                            continue;

                                                        data_10 = nullptr;
                                                        break;
                                                    }
                                                }

                                                data_10 = data_10 - data_10 + 1;
                                                break;
                                            }
                                        }

                                        if ((dwComponentType == 0x1009 || dwComponentType == 0x1005
                                            || !data_10) && g_6840e8)
                                        {
                                            item_1a4_1 = &phmx[0x61];
                                            flagP1 = &phmx[0xb0];
                                            item_1a0_1 = &phmx[0xd7];
                                            item_198_1 = &phmx[0xd8];
                                        }

                                        if (flagP1)
                                        {
                                            int32_t item_1bc_2 = 4;
                                            MIXERLINECONTROLSA pmxlc;
                                            pmxlc.dwLineID = item_150.dwLineID;
                                            DWORD cControls = item_150.cControls;
                                            pmxlc.cbStruct = 0x18;
                                            pmxlc.cControls = cControls;
                                            pmxlc.cbmxctrl = 0x94;
                                            void* data_16 = Mem_Alloc(cControls * 0x94, item_1bc_2);
                                            HMIXEROBJ hmxobj_1 = *phmx;
                                            pmxlc.pamxctrl = data_16;

                                            if (!
                                                mixerGetLineControlsA(hmxobj_1, &pmxlc, 0x80000000))
                                            {
                                                int32_t item_190_1 = 0;

                                                if (pmxlc.cControls > 0)
                                                {
                                                    void* item_19c_1 = nullptr;
                                                    bool flag_8_1;

                                                    do
                                                    {
                                                        void* data_20 = item_19c_1 + pmxlc.pamxctrl;

                                                        if (*(data_20 + 8) == 0x50030001)
                                                        {
                                                            int32_t item_1bc_4 = 4;
                                                            memcpy(item_1a4_1, &item_150,
                                                                0xa8);
                                                            memcpy(flagP1, data_20, 0x94);
                                                            int32_t entity_5 = *(flagP1 + 4);
                                                            int32_t temp_9 = *(flagP1 + 0x10);
                                                            MIXERCONTROLDETAILS pmxcd;
                                                            pmxcd.cbStruct = 0x18;
                                                            int32_t data_21 = *(item_1a4_1 + 0x1c);
                                                            pmxcd.dwControlID = entity_5;
                                                            pmxcd.cChannels = data_21;
                                                            *(&pmxcd. + 0) = temp_9;
                                                            pmxcd.cbDetails = 4;
                                                            void* data_23 =
                                                                Mem_Alloc(data_21 << 2, item_1bc_4);
                                                            HMIXEROBJ hmxobj_3 = *phmx;
                                                            pmxcd.paDetails = data_23;
                                                            bool flag_9_1 = mixerGetControlDetailsA(
                                                                hmxobj_3, &pmxcd, 0x80000000);
                                                            LPVOID paDetails = pmxcd.paDetails;

                                                            if (!flag_9_1)
                                                            {
                                                                if (*(item_1a4_1 + 0x1c) > 0)
                                                                    *item_1a0_1 = *paDetails;

                                                                if (*(item_1a4_1 + 0x1c) > 1)
                                                                    *item_198_1 = *(paDetails + 4);
                                                            }

                                                            Sys_ExecuteBytecode_2(paDetails);
                                                            pmxcd.paDetails = 0;
                                                            item_1a8 += 1;
                                                        }

                                                        flag_8_1 = item_190_1 + 1 < pmxlc.cControls;
                                                        item_190_1 += 1;
                                                        item_19c_1 += 0x94;
                                                    } while (flag_8_1);
                                                }

                                                Sys_ExecuteBytecode_2(pmxlc.pamxctrl);
                                                pmxlc.pamxctrl = 0;
                                            }
                                        }
                                    }

                                    flagP = item_194_1;
                                    temp_2 = item_188_1 + 1;
                                    item_188_1 = temp_2;

                                    if (temp_2 >= item_a8.cConnections)
                                        break;
                                }
                            }

                            if (phmx[0x8b] && phmx[0xb0])
                                item_1a8 += 1;

                            source_val = item_1a8;
                        }
                    }

                    flagP += 1;
                    item_194_1 = flagP;

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

    g_5ca150 = source_val;
    return result;
}
