#include "004071E0-Weapon_ConfigRead.h"
/* 0x004071e0 Weapon_ConfigRead full linked: callers=1 callees=4 */
void* Weapon_ConfigRead(int32_t a1, void* a2)

// Sig: int Weapon_ConfigRead(int context, char* cfgText)
// Note: Reads weapon configuration entries from parsed config text: repeated
// repne-scasb string scans + block copies populate weapon structures. Params:
// context = weapon system context, cfgText = config text buffer. Use within
// weapon definition parsing flows.
{
    void* edi = a2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx = ~i;
    int32_t esi_1;
    int32_t edi_2;
    edi_2 = memcpy(0x5690f0, edi - ecx, ecx & 0xfffffffc);
    memcpy(edi_2, esi_1, ecx & 3);
    void* result = Config_Compile(a1, a2, 0);

    if (result)
    {
        int32_t* i_1 = *(result + 8);

        if (*i_1 && i_1)
        {
            int32_t eax_1 = g_afa7e0;

            do
            {
                int32_t* edx = *i_1;
                void* ecx_8;

                if (!edx)
                    ecx_8 = nullptr;
                else
                {
                    int32_t ecx_5 = *edx;
                    int32_t ecx_6 = -(ecx_5);
                    ecx_8 = (ecx_6 - ecx_6) & edx;
                }

                *((eax_1 << 2) + &g_afa6e0) = ecx_8;
                g_afa7e0 = eax_1 + 1;
                uint32_t eax_4 = sub_4f1a70();
                int32_t eax_5 = 0;
                eax_5 = i_1[7];
                (*(((eax_4 * 0x180 + eax_5) << 2) + &g_a96ae0))(i_1, 0);
                eax_1 = g_afa7e0 - 1;
                g_afa7e0 = eax_1;
                i_1 = *((eax_1 << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
