# Define_HumanPlayerWeaponCycle

Address: 0x004101C0
Signature: void Define_HumanPlayerWeaponCycle(...)
Data types: WeaponContext

## Recovered behavior

Collects the weapon-cycle list for the human player: loops the parsed entries and stores them into the cycle table at 0x56DF1C with count at 0x56DF18 (verified in igi.exe). Call within a humanplayer weapon-cycle definition block; argc unknown (parser context).

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
