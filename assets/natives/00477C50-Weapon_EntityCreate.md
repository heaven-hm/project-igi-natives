# Weapon_EntityCreate

Address: 0x00477C50
Signature: WeaponEntityView* Weapon_EntityCreate(uint32_t p1, uint16_t objectType, uint32_t weaponType, uint32_t p4, uint8_t p5)
Data types: WeaponContext, WeaponEntityView

## Recovered behavior

Validates the weapon type, allocates/configures the weapon entity, initializes object fields, and dispatches the type handler. Ghidra/r2 CFG agreement: 6 basic blocks and 7 edges; see assets/IGI1-Native-Name-Evidence.json.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
