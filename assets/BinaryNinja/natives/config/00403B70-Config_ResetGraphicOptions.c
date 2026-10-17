// IGI native provenance: Config_ResetGraphicOptions - 0x00403B70 - CFG score 97.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00403B70-Config_ResetGraphicOptions.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_ResetGraphicOptions.h"
int32_t Config_ResetGraphicOptions(int32_t context)

// Sig: void Config_ResetGraphicOptions()
// Note: Resets graphic options to FACTORY DEFAULTS - machine-verified field
// writes: width=0x280 (640), height=0x1E0 (480), plus clearing adjacent flag
// bytes on the profile record. Takes no script args. Registered by igi.exe as
// "Config_ResetGraphicOptions" (site 0x40352B) and called by retail
// MAINMENU.QVM. Use to restore 640x480 defaults programmatically.
{
    *(Config_GetActivePlayerProfileRecord() + 0x1d) = 1;
    *(Config_GetActivePlayerProfileRecord() + 0x1e) = 1;
    *(Config_GetActivePlayerProfileRecord() + 0x1c) = 1;
    *(Config_GetActivePlayerProfileRecord() + 0x10) = 0x1e0;
    *(Config_GetActivePlayerProfileRecord() + 0xc) = 0x280;
    *(Config_GetActivePlayerProfileRecord() + 0x14) = 0x20;
    *(Config_GetActivePlayerProfileRecord() + 0x11f) = 0;
    *(Config_GetActivePlayerProfileRecord() + 0x1f) = 0;
    *(Config_GetActivePlayerProfileRecord() + 0x220) = 0x3f800000;
    *(Config_GetActivePlayerProfileRecord() + 0x18) = 0;
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
