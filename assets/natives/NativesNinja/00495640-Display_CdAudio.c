#include "00495640-Display_CdAudio.h"
/* 0x00495640 Display_CdAudio full linked: callers=1 callees=17 */
uint32_t sub_495640()

{
    int32_t esi = 0;
    int32_t var_1a8 = 0;
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
        int32_t* phmx = esi * 0x364 + &g_676e58;
        uint32_t dwCallback = 0;
        __builtin_memset(phmx, 0, 0x364);

        if (!mixerOpen(phmx, uMxId, dwCallback, dwInstance, fdwOpen)
            && !mixerGetDevCapsA(*phmx, &phmx[1], 0x30))
        {
            int32_t ebp = 0;
            int32_t var_194_1 = 0;

            if (phmx[0xc] > 0)
            {
                while (true)
                {
                    HMIXEROBJ hmxobj_2 = *phmx;
                    MIXERLINEA var_a8;
                    __builtin_memset(&var_a8, 0, 0xa8);
                    uint32_t fdwInfo = 0x80000000;
                    MIXERLINEA* pmxl = &var_a8;
                    var_a8.cbStruct = 0xa8;
                    var_a8.dwDestination = ebp;
                    var_a8.dwSource = 0;

                    if (!mixerGetLineInfoA(hmxobj_2, pmxl, fdwInfo))
                    {
                        DWORD dwType = var_a8.Target.dwType;

                        if (dwType == 1 || dwType == 5)
                        {
                            int32_t edx_2 = 0;
                            bool cond:4_1 = var_a8.cConnections <= 0;
                            memcpy(&phmx[0xd], &var_a8, 0xa8);
                            int32_t var_188_1 = 0;

                            if (!cond:4_1)
                            {
                                while (true)
                                {
                                    uint32_t fdwInfo_1 = 0x80000001;
                                    MIXERLINEA var_150;
                                    __builtin_memset(&var_150, 0, 0xa8);
                                    HMIXEROBJ hmxobj = *phmx;
                                    MIXERLINEA* pmxl_1 = &var_150;
                                    var_150.cbStruct = 0xa8;
                                    var_150.dwDestination = ebp;
                                    var_150.dwSource = edx_2;
                                    uint32_t eax_8 = mixerGetLineInfoA(hmxobj, pmxl_1, fdwInfo_1);

                                    if (!eax_8)
                                    {
                                        DWORD dwComponentType = var_150.dwComponentType;
                                        void* ebp_1 = nullptr;
                                        void* var_1a4_1 = nullptr;
                                        int32_t* var_1a0_1 = nullptr;
                                        int32_t* var_198_1 = nullptr;
                                        var_118;
                                        int32_t* eax_10;
                                        char edx_3;

                                        if (dwComponentType != 0x1008)
                                        {
                                            char* edi_3 = "Wave";
                                            char* esi_1 = &var_118;

                                            while (true)
                                            {
                                                edx_3 = *esi_1;
                                                eax_8 = edx_3;
                                                char temp0_1 = *edi_3;
                                                bool c_1 = edx_3 < temp0_1;

                                                if (edx_3 == temp0_1)
                                                {
                                                    if (!eax_8)
                                                    {
                                                        eax_10 = nullptr;
                                                        break;
                                                    }

                                                    edx_3 = esi_1[1];
                                                    eax_8 = edx_3;
                                                    char temp3_1 = edi_3[1];
                                                    c_1 = edx_3 < temp3_1;

                                                    if (edx_3 == temp3_1)
                                                    {
                                                        esi_1 = &esi_1[2];
                                                        edi_3 = &edi_3[2];

                                                        if (eax_8)
                                                            continue;

                                                        eax_10 = nullptr;
                                                        break;
                                                    }
                                                }

                                                eax_10 = eax_8 - eax_8 + 1;
                                                break;
                                            }
                                        }

                                        if (dwComponentType == 0x1008 || !eax_10)
                                        {
                                            var_1a4_1 = &phmx[0x37];
                                            eax_10 = &phmx[0xd6];
                                            ebp_1 = &phmx[0x8b];
                                            var_1a0_1 = &phmx[0xd5];
                                            var_198_1 = eax_10;
                                        }

                                        if (dwComponentType != 0x1009 && dwComponentType != 0x1005)
                                        {
                                            char* edi_4 = "CD Audio";
                                            char* esi_2 = &var_118;

                                            while (true)
                                            {
                                                char ecx_2 = *esi_2;
                                                edx_3 = *edi_4;
                                                eax_10 = ecx_2;
                                                bool c_3 = ecx_2 < edx_3;

                                                if (ecx_2 == edx_3)
                                                {
                                                    if (!eax_10)
                                                    {
                                                        eax_10 = nullptr;
                                                        break;
                                                    }

                                                    edx_3 = esi_2[1];
                                                    ecx_2 = edi_4[1];
                                                    eax_10 = edx_3;
                                                    c_3 = edx_3 < ecx_2;

                                                    if (edx_3 == ecx_2)
                                                    {
                                                        esi_2 = &esi_2[2];
                                                        edi_4 = &edi_4[2];

                                                        if (eax_10)
                                                            continue;

                                                        eax_10 = nullptr;
                                                        break;
                                                    }
                                                }

                                                eax_10 = eax_10 - eax_10 + 1;
                                                break;
                                            }
                                        }

                                        if ((dwComponentType == 0x1009 || dwComponentType == 0x1005
                                            || !eax_10) && g_6840e8)
                                        {
                                            var_1a4_1 = &phmx[0x61];
                                            ebp_1 = &phmx[0xb0];
                                            var_1a0_1 = &phmx[0xd7];
                                            var_198_1 = &phmx[0xd8];
                                        }

                                        if (ebp_1)
                                        {
                                            int32_t var_1bc_2 = 4;
                                            MIXERLINECONTROLSA pmxlc;
                                            pmxlc.dwLineID = var_150.dwLineID;
                                            DWORD cControls = var_150.cControls;
                                            pmxlc.cbStruct = 0x18;
                                            pmxlc.cControls = cControls;
                                            pmxlc.cbmxctrl = 0x94;
                                            void* eax_16 = Mem_Alloc(cControls * 0x94, var_1bc_2);
                                            HMIXEROBJ hmxobj_1 = *phmx;
                                            pmxlc.pamxctrl = eax_16;

                                            if (!
                                                mixerGetLineControlsA(hmxobj_1, &pmxlc, 0x80000000))
                                            {
                                                int32_t var_190_1 = 0;

                                                if (pmxlc.cControls > 0)
                                                {
                                                    void* var_19c_1 = nullptr;
                                                    bool cond:8_1;

                                                    do
                                                    {
                                                        void* eax_20 = var_19c_1 + pmxlc.pamxctrl;

                                                        if (*(eax_20 + 8) == 0x50030001)
                                                        {
                                                            int32_t var_1bc_4 = 4;
                                                            memcpy(var_1a4_1, &var_150,
                                                                0xa8);
                                                            memcpy(ebp_1, eax_20, 0x94);
                                                            int32_t ecx_5 = *(ebp_1 + 4);
                                                            int32_t edx_9 = *(ebp_1 + 0x10);
                                                            MIXERCONTROLDETAILS pmxcd;
                                                            pmxcd.cbStruct = 0x18;
                                                            int32_t eax_21 = *(var_1a4_1 + 0x1c);
                                                            pmxcd.dwControlID = ecx_5;
                                                            pmxcd.cChannels = eax_21;
                                                            *(&pmxcd. + 0) = edx_9;
                                                            pmxcd.cbDetails = 4;
                                                            void* eax_23 =
                                                                Mem_Alloc(eax_21 << 2, var_1bc_4);
                                                            HMIXEROBJ hmxobj_3 = *phmx;
                                                            pmxcd.paDetails = eax_23;
                                                            bool cond:9_1 = mixerGetControlDetailsA(
                                                                hmxobj_3, &pmxcd, 0x80000000);
                                                            LPVOID paDetails = pmxcd.paDetails;

                                                            if (!cond:9_1)
                                                            {
                                                                if (*(var_1a4_1 + 0x1c) > 0)
                                                                    *var_1a0_1 = *paDetails;

                                                                if (*(var_1a4_1 + 0x1c) > 1)
                                                                    *var_198_1 = *(paDetails + 4);
                                                            }

                                                            sub_4b0d10(paDetails);
                                                            pmxcd.paDetails = 0;
                                                            var_1a8 += 1;
                                                        }

                                                        cond:8_1 = var_190_1 + 1 < pmxlc.cControls;
                                                        var_190_1 += 1;
                                                        var_19c_1 += 0x94;
                                                    } while (cond:8_1);
                                                }

                                                sub_4b0d10(pmxlc.pamxctrl);
                                                pmxlc.pamxctrl = 0;
                                            }
                                        }
                                    }

                                    ebp = var_194_1;
                                    edx_2 = var_188_1 + 1;
                                    var_188_1 = edx_2;

                                    if (edx_2 >= var_a8.cConnections)
                                        break;
                                }
                            }

                            if (phmx[0x8b] && phmx[0xb0])
                                var_1a8 += 1;

                            esi = var_1a8;
                        }
                    }

                    ebp += 1;
                    var_194_1 = ebp;

                    if (ebp >= phmx[0xc])
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

    g_5ca150 = esi;
    return result;
}
