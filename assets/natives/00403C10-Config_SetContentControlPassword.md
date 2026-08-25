# Config_SetContentControlPassword

| Field | Value |
|---|---|
| Address/hash | `0x00403C10` |
| Signature | `int Config_SetContentControlPassword()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Menu-script setter form (argc=0): same address registered twice by igi.exe - site 0x4034C1 pushes str "Config_SetContentControlPassword" -> registrar 0x4B8890. Password comes from the script context, not an explicit arg. Returns 1.

## How it was found

Retail evidence: Config_SetContentControlPassword.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
