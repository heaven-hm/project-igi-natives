#include "004B6380-Resource_Unload.h"
/* 0x004b6380 Resource_Unload full linked: callers=23 callees=3 */
int32_t Resource_Unload(int32_t* a1)

// Sig: void Resource_Unload(int *resource_file)
// Note: Name from igi.exe error string inside function: "Resource_Unload() :
// Resource '%s' is not loaded." Unloads a resource by name/path.
{
    int32_t* esi = a1;

    if (Is_ResourceLoaded(esi, &a1))
    {
        int32_t* ecx = a1;
        int32_t result = ecx[9];

        if (result != 3 && result != 1)
            return sub_4b5c90(ecx);

        return result;
    }

    int32_t* var_8_1 = esi;
    Error_Show("Resource_Unload() : Resource '%s' is not loaded.");

    while (true)
        /* nop */
}
