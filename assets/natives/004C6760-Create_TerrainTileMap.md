# Create_TerrainTileMap

| Field | Value |
|---|---|
| Address/hash | `0x004C6760` |
| Signature | `void Create_TerrainTileMap(...)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Creates the TERRAIN TILE MAP for a level during level load (113-byte function). Engine-internal: called by the terrain loader, not meant for gameplay scripts.

## How it was found

Retail evidence: CreateTerrainTileMap.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
