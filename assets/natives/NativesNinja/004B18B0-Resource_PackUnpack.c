#include "004B18B0-Resource_PackUnpack.h"
/* 0x004b18b0 Resource_PackUnpack full linked: callers=3 callees=13 */
void* Resource_PackUnpack(void* a1, int32_t* a2)

// Sig: int Resource_PackUnpack(char* resFile, char** outBuffer)
// Note: Opens a PACKED resource file via QFile_ReadWrite (0x4B1510, mode string
// at 0x53B604) and unpacks its contents through the pack table at 0x9436E8.
// Params: resFile = packed resource path, outBuffer = receives unpacked data.
// RETURNS entry/result pointer.
{
    void* edi = a1;
    int32_t* eax = QFile_ReadWrite(edi, "r");

    if (eax)
    {
        if (*(*eax * 0x8c + &g_9436e8))
        {
            void** eax_4 = sub_4b19c0(edi);
            eax_4[3] = *eax;
            int32_t edx_1 = *eax;
            int32_t eax_5 = (*(edx_1 * 0x8c + &g_9436e8))(edx_1, eax, &a1, eax_4);
            sub_4b1690(eax);

            if (a2)
                *a2 = a1;

            return eax_5;
        }

        int32_t eax_8 = sub_4b1780(eax);
        void* eax_9 = Mem_Alloc(eax_8, 4);
        void** eax_10 = sub_4b19c0(edi);
        eax_10[3] = *eax;
        eax_10[6] = eax_9;
        eax_10[4] = eax_8;
        Resource_Unpack(eax, eax_9, eax_8);
        sub_4b17f0(eax, 0);

        if (!sub_4b17a0(eax))
        {
            if (a2)
                *a2 = eax_8;

            sub_4b1690(eax);
            return eax_9;
        }

        sub_4bada0(eax_10);
        sub_4b0d10(eax_9);
        sub_4b1690(eax);

        if (a2)
            *a2 = 0;
    }

    return 0;
}
