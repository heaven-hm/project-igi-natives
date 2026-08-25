# DEBUG_KEYSENABLEINVALID

| Field | Value |
|---|---|
| Address/hash | `0x00415020` |
| Signature | `void DEBUG_KEYSENABLEINVALID()` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

TOMBSTONE - DO NOT INVOKE. The retail debug-keys native address is UNKNOWN. The old value 0x0041502 lies outside .text (0x401000-0x532510) and would crash on invoke; no verified replacement found in igi.exe (unknown > fabricated per RE.md). This entry exists only so JSON consumers see the warning instead of silently missing the key.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
