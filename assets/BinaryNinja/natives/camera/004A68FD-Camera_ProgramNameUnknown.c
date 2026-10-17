// IGI native provenance: Camera_ProgramNameUnknown - 0x004A68FD - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A68FD-Camera_ProgramNameUnknown.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ProgramNameUnknown.h"
int32_t* Camera_ProgramNameUnknown(int32_t context)

{
    int32_t i = context;
    int32_t entity_val = 0;
    int32_t* result = &g_543fc0;

    while (i != *result)
    {
        result = &result[2];
        entity_val += 1;

        if (result >= &g_544050)
            break;
    }

    if (i == *((entity_val << 3) + &g_543fc0))
    {
        result = g_936054;

        if (result == 1)
        {
        label_4a6a30:
            OVERLAPPED* saved_edi_3 = nullptr;
            int32_t* lpNumberOfBytesWritten = &context;
            uint32_t nNumberOfBytesToWrite = Camera_UpdateViewCone_20((&g_543fc4)[entity_val * 2]);
            return WriteFile(GetStdHandle(STD_ERROR_HANDLE), (&g_543fc4)[entity_val * 2],
                nNumberOfBytesToWrite, lpNumberOfBytesWritten, saved_edi_3);
        }

        if (!result && g_543e80 == 1)
            goto label_4a6a30;

        if (i != 0xfc)
        {
            void filename;

            if (!GetModuleFileNameA(nullptr, &filename, 0x104))
                Camera_ApplyLineFilter_20(&filename, "<program name unknown>");

            char* dest_1 = &filename;

            if (Camera_UpdateViewCone_20(&filename) + 1 > 0x3c)
            {
                int32_t item_1b8_2 = 3;
                void item_1e3;
                dest_1 = Camera_UpdateViewCone_20(&filename) + &item_1e3;
                Camera_ApplyLineFilter_5(dest_1, "...", item_1b8_2);
            }

            char item_a4[0xa0];
            Camera_ApplyLineFilter_20(&item_a4, "Runtime Error!\n\nProgram: ");
            Camera_ApplyBandFilter_20(&item_a4, dest_1);
            Camera_ApplyBandFilter_20(&item_a4, "\n\n");
            Camera_ApplyBandFilter_20(&item_a4, (&g_543fc4)[entity_val * 2]);
            return Camera_User32Dll(&item_a4, "Microsoft Visual C++ Runtime Library", 0x12010);
        }
    }

    return result;
}
