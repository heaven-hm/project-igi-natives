# Config_VerifyContentControlPassword

Address: 0x00403CC0
Signature: int Config_VerifyContentControlPassword(char* password)
Data types: scalar/opaque ABI only

## Recovered behavior

Checks a password attempt against the stored content-control password. Param: password = string to test. RETURNS non-zero when correct, 0 when wrong. Use before unlocking violent-content options.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
