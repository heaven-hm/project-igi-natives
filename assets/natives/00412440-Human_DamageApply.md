# Human_DamageApply

Address: 0x00412440
Signature: void Human_DamageApply(HumanPlayer* human)
Data types: HumanPlayer

## Recovered behavior

Applies DAMAGE/knockback to the human player: reads enable flag byte +0xCF6 and patrol sub-struct +0x254 of the human struct. IGI-MP disables bullet knockback here. Prologue-verified.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
