#include "gi_platform.h"
#include "004B6380-Resource_Unload.h"
int32_t Resource_Unload(int32_t* a1)

// Sig: void Resource_Unload(int *resource_file)
// Note: Name from igi.exe error string inside function: "Resource_Unload() :
// Resource '%s' is not loaded." Unloads a resource by name/path.
{
    int32_t* srcS = a1;

    if (Is_ResourceLoaded(srcS, &a1))
    {
        int32_t* objC = a1;
        int32_t result = objC[9];

        if (result != 3 && result != 1)
            return Sys_FreeMemory_16(objC);

        return result;
    }

    int32_t* v_8_1 = srcS;
    Error_Show("Resource_Unload() : Resource '%s' is not loaded.");

    while (true)
        /* nop */
}
