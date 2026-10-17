// IGI native provenance: Resource_Unpack - 0x004B16D0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B16D0-Resource_Unpack.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Resource_Unpack.h"
int32_t Resource_Unpack(int32_t* context, int32_t param_2, int32_t param_3)

// Sig: int Resource_Unpack(int* resPtr, int destAddr, int resSize)
// Note: Unpacks a loaded resource blob to a destination address. Params: resPtr
// = packed resource pointer, destAddr = destination memory address, resSize =
// bytes to unpack. RETURNS unpacked size/status.
{
    int32_t entity_val = *context;
    return (*(entity_val * 0x8c + &g_9436c0))(entity_val, context, param_2, param_3);
}
