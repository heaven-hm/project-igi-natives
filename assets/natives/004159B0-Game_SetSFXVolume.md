# Game_SetSFXVolume

Address: 0x004159B0
Signature: void Game_SetSFXVolume(float volume)
Data types: scalar/opaque ABI only

## Recovered behavior

Live-sets sound-effects volume through the profile real-value setter (fcn.004B8A50), same 1.0f construction pattern. Param: volume = float 0.0-1.0. Called by ingamemenu.qvm options sliders.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
