# Config_ResetGraphicOptions

Address: 0x00403B70
Signature: void Config_ResetGraphicOptions()
Data types: GraphicOptions, ProfileRecord

## Recovered behavior

Resets graphic options to FACTORY DEFAULTS - machine-verified field writes: width=0x280 (640), height=0x1E0 (480), plus clearing adjacent flag bytes on the profile record. Takes no script args. Registered by igi.exe as "Config_ResetGraphicOptions" (site 0x40352B) and called by retail MAINMENU.QVM. Use to restore 640x480 defaults programmatically.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
