# Game_SetMusicVolume

Address: 0x00415950
Signature: void Game_SetMusicVolume(float volume)
Data types: scalar/opaque ABI only

## Recovered behavior

Live-sets music volume through the profile real-value setter (fcn.004B8A50): retail body constructs 1.0f (0x3FF00000) and stores via fstp. Param: volume = float 0.0-1.0. Called by ingamemenu.qvm options sliders.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
