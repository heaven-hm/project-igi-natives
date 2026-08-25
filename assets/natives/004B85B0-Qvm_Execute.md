# Qvm_Execute

Address: 0x004B85B0
Signature: int Qvm_Execute(void* qvm)
Data types: scalar/opaque ABI only

## Recovered behavior

EXECUTES a loaded QVM script program (the interpreter entry - despite the old analyst label QvmRead). On runtime failure reports "Error in QVM program: %s" / "An error occured in script file: %s". Param: qvm = pointer from Qvm_Load. RETURNS script result value.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
