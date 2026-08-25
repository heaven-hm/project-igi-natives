# DEBUG_KEYSENABLEINVALID

Address: 0x00415020
Signature: void DEBUG_KEYSENABLEINVALID()
Data types: scalar/opaque ABI only

## Recovered behavior

TOMBSTONE - DO NOT INVOKE. The retail debug-keys native address is UNKNOWN. The old value 0x0041502 lies outside .text (0x401000-0x532510) and would crash on invoke; no verified replacement found in igi.exe (unknown > fabricated per the local reverse-engineering acceptance policy). This entry exists only so JSON consumers see the warning instead of silently missing the key.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
