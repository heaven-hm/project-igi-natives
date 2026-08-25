# Weapon_ConfigRead

Address: 0x004071E0
Signature: int Weapon_ConfigRead(int context, char* cfgText)
Data types: WeaponContext

## Recovered behavior

Reads weapon configuration entries from parsed config text: repeated repne-scasb string scans + block copies populate weapon structures. Params: context = weapon system context, cfgText = config text buffer. Use within weapon definition parsing flows.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
