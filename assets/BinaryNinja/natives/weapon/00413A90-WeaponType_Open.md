# WeaponType_Open

- Address: `0x00413A90`
- Prototype shape: one stack pointer argument. The export spells this as `void`, but the machine code leaves EAX dependent on the path/callees; the return contract is unresolved and callers must not rely on this C declaration as an ABI proof.
- Range: `0x00413A90..0x00413AF7` (Radare2 forced analysis, 103 bytes)
- Radare2 CFG: 6 blocks, 5 calls; matches the saved discovery record
- Registration: xref at `0x00413B72` pushes this address and the `LOCAL:weapons` string before calling `0x004B1420`
- Observed context accesses: pointer at `+0x00`; byte at `+0x08`
- Behavior: if the byte is nonzero, format `<context path>/weapon.qsc`, call `Qvm_Load`, then `Qvm_Execute` and `Qvm_Cleanup` if load succeeds. If load fails, report `WeaponType_Open(): Couldn't load script: %s` and loop forever. If disabled, return immediately.
- Status: **candidate, not Binary Ninja verified**. The configured Binary Ninja MCP endpoint (`127.0.0.1:24642`) refused connections; Ghidra resolves the registration data reference but does not independently create a function boundary at this address. No current runtime or memory capture was available.
- Identifier note: `script_directory` and `load_enabled` are descriptive names inferred from reads and use. The field at `+0x04` remains `unknown_04`.

This export contains absolute helper addresses from the original PE and documents behavior. It is not a macOS-ready implementation.
