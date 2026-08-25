# IGI reverse-engineering assets

The root `igi_natives_discovery/IGINatives.json` is the authoritative native catalog. This folder contains generated, human-readable views rather than a second source of truth.

| Folder/file | Purpose |
|---|---|
| `natives/` | One Markdown record and one index table for every catalog native. |
| `structures/` | One Markdown record and an index for each recovered structure or opaque record view. |
| `../verification/` | Ghidra/r2 CFG evidence, structure evidence, provenance manifests, and generation metadata. |

Current catalog size: **294** entries.

The PDB is generated as an address-compatible CodeView symbol database with `llvm-pdbutil yaml2pdb (CodeView publics)` in this worktree. It is not a vendor PDB: retail `IGI.EXE` has no embedded CodeView/RSDS identity to match.
