# Qvm_Cleanup

Address: 0x004B83D0
Signature: void Qvm_Cleanup(void* qvm)
Data types: scalar/opaque ABI only

## Recovered behavior

Frees a loaded QVM script object: reads qvm+0x8C and releases the program block when non-zero. Param: qvm = pointer from Qvm_Load. Pair with Qvm_Load to avoid leaks.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
