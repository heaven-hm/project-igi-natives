# Throwable_Create

Address: 0x00477040
Signature: void Throwable_Create(void)
Data types: scalar/opaque ABI only

## Recovered behavior

Creates a GRENADE/THROWABLE projectile: checks+registers it in the hash table via QHash_ValueGet(0x4B0DB0)/QHash_ValueSet(0x4B0D40). IGI-MP hooks for network throwable sync.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
