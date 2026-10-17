// IGI native provenance: Resource_Load - 0x004B5F00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B5F00-Resource_Load.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Resource_Load.h"
int32_t* Resource_Load(int32_t context, int32_t param_2, void* param_3, int32_t* param_4 )

// Sig: int* Resource_Load(char* resourcePath, char** outBuffer)
// Note: Loads a resource into memory WITH CACHE CHECK: first asks
// IsResourceLoaded (0x4B5B90); if cached returns the existing entry, otherwise
// loads and registers it. Params: resourcePath = virtual resource path,
// outBuffer = receives the data pointer. RETURNS resource entry pointer.
{
    void* item_4 = param_3;
    void* arg_4;
    void* source_val = arg_4;

    if (Is_ResourceLoaded(source_val, &arg_4))
    {
        void* entity_val = arg_4;

        if (param_4)
            *param_4 = *(entity_val + 0x28);

        *(entity_val + 0x2c) = 1;
        return *(arg_4 + 0x34);
    }

    int32_t* data_4 = Resource_PackUnpack(source_val, &item_4);

    if (data_4)
    {
        void* temp_1 = item_4;

        if (param_4)
            *param_4 = temp_1;

        return Sys_Resource(&g_943a18, data_4, temp_1);
    }

    void* item_c_2 = source_val;
    Error_Show("Failed to load resource: '%s'");

    while (true)
        /* nop */
}
