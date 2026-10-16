#include "004B5F00-Resource_Load.h"
/* 0x004b5f00 Resource_Load full linked: callers=58 callees=5 */
int32_t* __convention("regparm") Resource_Load(int32_t a1, int32_t a2, void* a3, int32_t* a4 @ 0x8)

// Sig: int* Resource_Load(char* resourcePath, char** outBuffer)
// Note: Loads a resource into memory WITH CACHE CHECK: first asks
// IsResourceLoaded (0x4B5B90); if cached returns the existing entry, otherwise
// loads and registers it. Params: resourcePath = virtual resource path,
// outBuffer = receives the data pointer. RETURNS resource entry pointer.
{
    void* var_4 = a3;
    void* arg_4;
    void* esi = arg_4;

    if (Is_ResourceLoaded(esi, &arg_4))
    {
        void* ecx = arg_4;

        if (a4)
            *a4 = *(ecx + 0x28);

        *(ecx + 0x2c) = 1;
        return *(arg_4 + 0x34);
    }

    int32_t* eax_4 = Resource_PackUnpack(esi, &var_4);

    if (eax_4)
    {
        void* edx_1 = var_4;

        if (a4)
            *a4 = edx_1;

        return sub_4b5f80(&g_943a18, eax_4, edx_1);
    }

    void* var_c_2 = esi;
    Error_Show("Failed to load resource: '%s'");

    while (true)
        /* nop */
}
