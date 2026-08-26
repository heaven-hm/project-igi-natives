# Qvm_Load

Address: 0x004B80B0
Signature: int* Qvm_Load(char* qvmPath)
Data types: scalar/opaque ABI only

## Recovered behavior

Loads a COMPILED .qvm script binary from the virtual filesystem (appends/selects ".qvm"; big 0x130 stack frame builds the script object). Param: qvmPath = path like "LOCAL:common/ai/guard.qvm". RETURNS pointer to the loaded QVM object, 0 on failure (calls engine debug-state check 0x48F1D0 first). Use before executing/attaching scripts.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
