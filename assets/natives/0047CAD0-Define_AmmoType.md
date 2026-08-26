# Define_AmmoType

Address: 0x0047CAD0
Signature: void Define_AmmoType(...)
Data types: scalar/opaque ABI only

## Recovered behavior

Defines an AMMO TYPE inside an ammo definition block of a .qsc/.cfg script (515-byte parser body; igi.exe embeds str 'DefineAmmoType'). Args follow the Define-ammo grammar (name, damage, range, clip...) - not fully mapped, treat as parser-internal. Do NOT call outside its define block.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
