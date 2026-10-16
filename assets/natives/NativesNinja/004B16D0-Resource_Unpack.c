#include "004B16D0-Resource_Unpack.h"
/* 0x004b16d0 Resource_Unpack full linked: callers=21 callees=0 */
int32_t Resource_Unpack(int32_t* a1, int32_t a2, int32_t a3)

// Sig: int Resource_Unpack(int* resPtr, int destAddr, int resSize)
// Note: Unpacks a loaded resource blob to a destination address. Params: resPtr
// = packed resource pointer, destAddr = destination memory address, resSize =
// bytes to unpack. RETURNS unpacked size/status.
{
    int32_t ecx = *a1;
    return (*(ecx * 0x8c + &g_9436c0))(ecx, a1, a2, a3);
}
