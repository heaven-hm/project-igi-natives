#include "gi_platform.h"
#include "00406220-Config_GetActivePlayerProfileRecord.h"
void* Config_GetActivePlayerProfileRecord()

{
// Sig: ProfileRecord* Config_GetActivePlayerProfileRecord()
// Note: RETURNS pointer to the ACTIVE PROFILE's graphic-options/config record:
// computed as 0xBC2388 + 0xD14*[0xBC2384] (verified against retail
// defaults-reset fcn.00403B70 which walks the same layout). Takes no args.
// Despite the historical name this returns a record pointer, not a bool. Old
// analyst name IsPlayerProfileActive was wrong - it returns the record pointer,
// not a bool.
    return &(&g_bc2388)[g_bc2384 * 0x159];
}
