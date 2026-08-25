# Soldier_Execute

| Field | Value |
|---|---|
| Address/hash | `0x0045C440` |
| Signature | `void Soldier_Execute(void* context, void* soldierPtr)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Executes/initializes a SOLDIER AI entity in the level. Params: context = task/context object (2nd arg is the soldier ptr - verified: esi=[esp+0x1C] after prologue). The function reads soldier-struct fields +0x800 (ptr), +0x4C4 and +0x254 (sub-object bases passed to spawner 0x4F2060), +0xD1C, then installs a per-soldier callback (0x45C700) into the created object at +0x14 and routes through 0x48A330. Referenced via soldier-task VTABLE at .data 0x53EC90 (not called directly). SOLDIER STRUCT LAYOUT (recovered from the 0x45C190-0x45CA50 vtable family): +0x68 name/string area; +0x254 patrol/waypoint sub-struct (field +0x94 used); +0x2EC param ptr slot; +0x33D flag byte; +0x4C4 object ref; +0x696 active/enable flag (0=off, 1=on); +0x800 ptr; +0xD0C id (0xFFFFFFFF = unset); +0xD14 dword; +0xD1C ptr. Sibling vtable methods: 0x45C190, 0x45C1C0, 0x45C2E0, 0x45C330, 0x45C5A0, 0x45C650, 0x45C750, 0x45C8B0, 0x45CA50 (same struct, enable/disable/reset semantics).

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
