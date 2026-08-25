# Task_DeclareParameters

| Field | Value |
|---|---|
| Address/hash | `0x004F0740` |
| Signature | `void Task_DeclareParameters(...)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Declares the parameter list of the task currently being defined inside a .qsc task block (OpenIGI TaskScriptCommands implements it reading a type name + parameter names). Call as FIRST statement of a task definition; argc unknown (parser context).

## How it was found

Retail evidence: Task_DeclareParameters.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
