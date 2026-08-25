# Task_New

| Field | Value |
|---|---|
| Address/hash | `0x004F0780` |
| Signature | `void Task_New(...)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Instantiates a new game task from a declared type (731-byte factory; OpenIGI registers Task_New reading the type name then declared params). Call inside task blocks after Task_DeclareParameters; argc unknown (parser context).

## How it was found

Retail evidence: Task_New.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
