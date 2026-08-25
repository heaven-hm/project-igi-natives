# Task_New

Address: 0x004F0780
Signature: void Task_New(...)
Data types: TaskTypeRecord

## Recovered behavior

Instantiates a new game task from a declared type (731-byte factory; OpenIGI registers Task_New reading the type name then declared params). Call inside task blocks after Task_DeclareParameters; argc unknown (parser context).

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
