# AIFunction_SendResponse

| Field | Value |
|---|---|
| Address/hash | `0x0044EE40` |
| Signature | `void AIFunction_SendResponse()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sends the AI's RESPONSE to the current event (used for ALERT_RESPONSE chains so buddy AIs react too). Takes no args. Call inside alert handlers.

## How it was found

Retail evidence: AIFunction_SendResponse.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
