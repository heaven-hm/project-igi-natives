# Config_ResetGraphicOptions

| Field | Value |
|---|---|
| Address/hash | `0x00403B70` |
| Signature | `void Config_ResetGraphicOptions()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Resets graphic options to FACTORY DEFAULTS - machine-verified field writes: width=0x280 (640), height=0x1E0 (480), plus clearing adjacent flag bytes on the profile record. Takes no script args. Registered by igi.exe as "Config_ResetGraphicOptions" (site 0x40352B) and called by retail MAINMENU.QVM. Use to restore 640x480 defaults programmatically.

## How it was found

Retail evidence: Config_ResetGraphicOptions.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
