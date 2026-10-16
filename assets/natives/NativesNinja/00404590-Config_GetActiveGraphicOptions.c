#include "00404590-Config_GetActiveGraphicOptions.h"
/* 0x00404590 Config_GetActiveGraphicOptions full linked: callers=18 callees=0 */
void* Config_GetActiveGraphicOptions()

{
// Sig: GraphicOptions* Config_GetActiveGraphicOptions()
// Note: Returns a pointer to the ACTIVE PROFILE's graphic-options record inside
// the global config array. The record base is 0xBC2394 + 0xD14 *
// activeProfileIndex (verified in igi.exe). Useful for reading/writing raw
// graphic fields directly (gamma sits at record+0x220).
    return g_bc2384 * 0x564 + &g_bc2394;
}
