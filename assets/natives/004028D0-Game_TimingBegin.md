# Game_TimingBegin

Address: 0x004028D0
Signature: void Game_TimingBegin(void)
Data types: GameContext

## Recovered behavior

Begins a nested timing interval: starts the retail timer when the timing depth is zero, then increments the depth counter. Level_Start and Game_Restart bracket their load work with this helper and Game_TimingEnd.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
