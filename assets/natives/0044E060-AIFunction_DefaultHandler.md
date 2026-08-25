# AIFunction_DefaultHandler

| Field | Value |
|---|---|
| Address/hash | `0x0044E060` |
| Signature | `void AIFunction_DefaultHandler()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

The default AI event handler: call this for any AIEVENT_* your script does not handle explicitly (retail template shows it as the else-branch body). Takes no args. Put inside every event if-else chain as fallback.

## How it was found

Retail evidence: AIFunction_DefaultHandler.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
