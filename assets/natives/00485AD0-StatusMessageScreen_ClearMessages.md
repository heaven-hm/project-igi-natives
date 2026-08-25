# StatusMessageScreen_ClearMessages

| Field | Value |
|---|---|
| Address/hash | `0x00485AD0` |
| Signature | `void StatusMessageScreen_ClearMessages(void)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Clears all on-screen status messages. Takes no args.

## How it was found

Retail evidence: StatusMessageScreen_ClearMessages.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
