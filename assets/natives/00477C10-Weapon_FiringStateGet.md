# Weapon_FiringStateGet

Address: 0x00477C10
Signature: uint8_t Weapon_FiringStateGet(void)
Data types: WeaponContext

## Recovered behavior

Returns the byte at the retail weapon firing-state configuration global 0x005407B9. Ghidra/r2 CFG agreement: 1 basic block and 0 edges; see assets/IGI1-Native-Name-Evidence.json.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
