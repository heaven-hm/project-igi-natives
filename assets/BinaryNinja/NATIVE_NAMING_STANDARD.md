# IGI Native Naming and Provenance

## Naming

Use `Subsystem_Action` for native names, with a descriptive PascalCase action:

```cpp
Game_SetThing();
Level_LoadParams();
HumanPlayer_UpdateMovement();
Weapon_Fire();
```

Keep the retail function name when it is supported by the verified catalog or
binary evidence. Do not invent a more specific action just to make a name fit
the pattern. If an address has multiple same-named functions, preserve the
catalog's address disambiguation until analysis establishes a meaningful
semantic name. Names in this repository identify functions recovered from the
retail executable; a catalog entry alone does not prove runtime parity or that
the function is registered as a QVM script native.

## Source provenance comments

Every per-function C source under `natives/` starts with a comment identifying
the original `IGI.EXE` function name and virtual address. Generate or refresh
those comments with:

```sh
python3 assets/BinaryNinja/scripts/add_native_provenance.py
```

The comment records static catalog provenance only. It does not claim that a
ported implementation has passed runtime verification.

