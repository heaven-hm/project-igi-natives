#include "Resource_Load.h"
int32_t* __convention("regparm") Resource_Load(int32_t a1, int32_t a2, void* a3, int32_t* a4 @ 0x8)

// Sig: int* Resource_Load(char* resourcePath, char** outBuffer)
// Note: Loads a resource into memory WITH CACHE CHECK: first asks
// IsResourceLoaded (0x4B5B90); if cached returns the existing entry, otherwise
// loads and registers it. Params: resourcePath = virtual resource path,
// outBuffer = receives the data pointer. RETURNS resource entry pointer.
{
    void* v_4 = a3;
    void* arg_4;
    void* srcS = arg_4;

    if (Is_ResourceLoaded(srcS, &arg_4))
    {
        void* objC = arg_4;

        if (a4)
            *a4 = *(objC + 0x28);

        *(objC + 0x2c) = 1;
        return *(arg_4 + 0x34);
    }

    int32_t* valA4 = Resource_PackUnpack(srcS, &v_4);

    if (valA4)
    {
        void* tmpD1 = v_4;

        if (a4)
            *a4 = tmpD1;

        return Sys_Resource(&g_943a18, valA4, tmpD1);
    }

    void* v_c_2 = srcS;
    Error_Show("Failed to load resource: '%s'");

    while (true)
        /* nop */
}
