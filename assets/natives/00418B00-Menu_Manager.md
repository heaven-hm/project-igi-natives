# Menu_Manager

| Field | Value |
|---|---|
| Address/hash | `0x00418B00` |
| Signature | `int* Menu_Manager(int p1,char *menu_str,char p3,char p4,int p5)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

MenuManager load for inagame or Mainmenu,Params:  p1: 0057BABC ,p3,p4,p5: 0.

## How it was found

Retail evidence: MenuManager.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
