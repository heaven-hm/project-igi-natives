# FallLanding

- Address: 00408460
- Observed parameter: one x86 stack pointer to player state. Return value is not consumed by the three resolved callers.
- C translation signature: `void FallLanding(void *human_player)`; this is inferred from call-site use because Ghidra did not recover a signature.
- CC: cdecl
- Range: 0x408460-0x408715 blocks=27
- CFG gate: PASS (score 1.000)
- REA/Ghidra assembly evidence: `ev_2a58670f35511db6ce1c14fd9011eacb7b7cc84e605a9fb3072fafb1ac77a72c`
- REA/Ghidra callers evidence: `ev_00c88a07ecdbe6580242b85791afcd5cb3c9757ccd716a295650485a0a754912`
- Caller assembly evidence: `0x0040BBD0` (`ev_0dcde1d7473e02fb8c51a878daee27dea9302593ffd9258f806c66dc286a253c`), `0x0040BE40` (`ev_72c4186f450726772070011e380ed642163c80b47c91e2562ca0f286e4bee6be`), and `0x0040E620` (`ev_61d5c2d04a7092eea39cd5c848ebe871ff543b30f3ab3c72525e1f170160c818`).
- Retail string references: `player_fall_1` at `0x00538D5C` (`ev_ed61570f0bb47d631a51bbe80bce11ef791cef1e1de3ce131e5e848e608b2aad`); `player_fall_2` at `0x00538D4C` (`ev_c46d3c312f44a066f8c659b676866eaa85ec4e11a2bcd10a8eb313fedf2a1eaa`); `player_fall_3` at `0x00538D3C` (`ev_92e8ad2a63053497fb327a7ab86a1f881b9d690f3ec46749158c2eacf7e63dd1`). These are retail sound event names, not human-readable log messages.
- Binary: retail `igi.exe`, PE32 x86, SHA-256 `dea34892d417715873ea61d7b2ba5556655f1ad65385104348146f9679915a01`.
- Runtime status: not verified against a live retail execution. CFG parity is structural evidence, not a behavioral accuracy percentage.
- Source: confirmed-rea
