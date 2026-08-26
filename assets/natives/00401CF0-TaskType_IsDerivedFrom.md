# TaskType_IsDerivedFrom

Address: 0x00401CF0
Signature: bool TaskType_IsDerivedFrom(uint16_t typeId, uint16_t baseTypeId)
Data types: TaskTypeRecord

## Recovered behavior

Checks equality and walks the task-type parent chain until the sentinel type. Ghidra/r2 CFG agreement: 5 basic blocks and 6 edges; see assets/IGI1-Native-Name-Evidence.json.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
