// Original IGI.EXE function: Resource_Unload (VA 0x004B6380; static CFG gate PASS, CFG score 1.000).
#include "Resource_Unload.h"
int32_t Resource_Unload(int32_t* context)

// Sig: void Resource_Unload(int *resource_file)
// Note: Name from igi.exe error string inside function: "Resource_Unload() :
// Resource '%s' is not loaded." Unloads a resource by name/path.
{
    int32_t* source_val = context;

    if (Is_ResourceLoaded(source_val, &context))
    {
        int32_t* entity_val = context;
        int32_t result = entity_val[9];

        if (result != 3 && result != 1)
            return Sys_FreeMemory_16(entity_val);

        return result;
    }

    int32_t* item_8_1 = source_val;
    Error_Show("Resource_Unload() : Resource '%s' is not loaded.");

    while (true)
        /* nop */
}
