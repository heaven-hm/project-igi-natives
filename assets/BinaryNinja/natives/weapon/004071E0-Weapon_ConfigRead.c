// Original IGI.EXE function: Weapon_ConfigRead (VA 0x004071E0; static CFG gate FAIL, CFG score 0.833).
#include "Weapon_ConfigRead.h"
void* Weapon_ConfigRead(int32_t context, void* param_2)

// Sig: int Weapon_ConfigRead(int context, char* cfgText)
// Note: Reads weapon configuration entries from parsed config text: repeated
// repne-scasb string scans + block copies populate weapon structures. Params:
// context = weapon system context, cfgText = config text buffer. Use within
// weapon definition parsing flows.
{
    void* dest_val = param_2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_val = ~i;
    int32_t source_1;
    int32_t dest_2;
    dest_2 = memcpy(0x5690f0, dest_val - entity_val, entity_val & 0xfffffffc);
    memcpy(dest_2, source_1, entity_val & 3);
    void* result = Config_Compile(context, param_2, 0);

    if (result)
    {
        int32_t* i_1 = *(result + 8);

        if (*i_1 && i_1)
        {
            int32_t data_1 = g_afa7e0;

            do
            {
                int32_t* temp_val = *i_1;
                void* entity_8;

                if (!temp_val)
                    entity_8 = nullptr;
                else
                {
                    int32_t entity_5 = *temp_val;
                    int32_t entity_6 = -(entity_5);
                    entity_8 = (entity_6 - entity_6) & temp_val;
                }

                *((data_1 << 2) + &g_afa6e0) = entity_8;
                g_afa7e0 = data_1 + 1;
                uint32_t data_4 = Script_ParseEnumReal32_8();
                int32_t data_5 = 0;
                data_5 = i_1[7];
                (*(((data_4 * 0x180 + data_5) << 2) + &g_a96ae0))(i_1, 0);
                data_1 = g_afa7e0 - 1;
                g_afa7e0 = data_1;
                i_1 = *((data_1 << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
