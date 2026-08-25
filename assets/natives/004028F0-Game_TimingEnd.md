# Game_TimingEnd

Address: 0x004028F0
Signature: void Game_TimingEnd(void)
Data types: GameContext

## Recovered behavior

Ends a nested timing interval: decrements the depth counter and, at zero, adds elapsed timer ticks to game-context field +0x50 and clears the interval start timestamp.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
