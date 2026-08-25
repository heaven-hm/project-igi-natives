# TaskType_Set

| Field | Value |
|---|---|
| Address/hash | `0x004B8810` |
| Signature | `void TaskType_Set(int** taskDef, int taskTypeId)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Stores the TYPE ID onto a task definition structure (simple field write, verified 2-arg store). Params: taskDef = task definition object, taskTypeId = TASKTYPE_* enum value (TASKTYPE_GUN, TASKTYPE_BUILDING, etc. - full enum embedded in igi.exe .data).

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
