# natives-verification-engine

Build the x86 DLL and CLI:

```cmd
tools\native_test_cli\build.cmd
```

Test a native by name in a level-1 window:

```cmd
tools\native_test_cli\run.cmd --native AnimTrigger_ParseConfigFile --abi cdecl --level 1
```

Resolve by address, build Release, and launch fullscreen:

```cmd
tools\native_test_cli\run.cmd --address 0x004EC070 --abi cdecl --configuration release --display fullscreen --level 5
```

The runner validates x86 architecture and requires `D:\IGI1\igi.exe`,
`D:\IGI1\Assets\IGINatives.json`, and `D:\IGI1\IGIModels.json`. It stages
the exact runtime files beside the injected DLL and writes JSONL, JSON, DLL,
build, and Markdown evidence under `tools\native_test_harness\results`.
