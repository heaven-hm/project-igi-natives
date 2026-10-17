// Original IGI.EXE function: Weapon_ConfigRead (VA 0x004071E0; static CFG gate FAIL, CFG score 0.833).
#include "Weapon_ConfigRead.h"
void* Weapon_ConfigRead(int32_t a1, void* a2)

// Sig: int Weapon_ConfigRead(int context, char* cfgText)
// Note: Reads weapon configuration entries from parsed config text: repeated
// repne-scasb string scans + block copies populate weapon structures. Params:
// context = weapon system context, cfgText = config text buffer. Use within
// weapon definition parsing flows.
{
    void* dstD = a2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC = ~i;
    int32_t srcS1;
    int32_t dstD2;
    dstD2 = memcpy(0x5690f0, dstD - objC, objC & 0xfffffffc);
    memcpy(dstD2, srcS1, objC & 3);
    void* result = Config_Compile(a1, a2, 0);

    if (result)
    {
        int32_t* i_1 = *(result + 8);

        if (*i_1 && i_1)
        {
            int32_t valA1 = g_afa7e0;

            do
            {
                int32_t* tmpD = *i_1;
                void* objC8;

                if (!tmpD)
                    objC8 = nullptr;
                else
                {
                    int32_t objC5 = *tmpD;
                    int32_t objC6 = -(objC5);
                    objC8 = (objC6 - objC6) & tmpD;
                }

                *((valA1 << 2) + &g_afa6e0) = objC8;
                g_afa7e0 = valA1 + 1;
                uint32_t valA4 = Script_ParseEnumReal32_8();
                int32_t valA5 = 0;
                valA5 = i_1[7];
                (*(((valA4 * 0x180 + valA5) << 2) + &g_a96ae0))(i_1, 0);
                valA1 = g_afa7e0 - 1;
                g_afa7e0 = valA1;
                i_1 = *((valA1 << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
