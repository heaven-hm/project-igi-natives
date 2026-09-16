# IGI native runtime harness

Runtime evidence from `natives-verification-engine` is written here. The C++
engine source is in `NativeTestCLI/`, and human-friendly build/run commands are
in `tools/native_test_cli/`.

The controller treats these as separate facts:

1. the game process has a visible window;
2. the expected x86 DLL is present in the process module list;
3. the DLL acknowledged the requested case (`CASE_BEGIN`);
4. the native returned (`CASE_END`);
5. the game remained alive and responsive through the observation window; and
6. Windows did not record a correlated application crash.

A hotkey or injection command by itself is never a pass. State is persisted
after every transition, so a game crash or controller restart resumes at the
first unfinished case. Catalog entries with an uncertain ABI are retained in
the report as `signature_blocked`; the generator never invents a prototype.

Build and run from the repository root:

```cmd
tools\native_test_cli\build.cmd
tools\native_test_cli\run.cmd --native AnimTrigger_ParseConfigFile --level 1
```

Generated and runtime artifacts are written below
`tools/native_test_harness/results/`. The catalog path, game path, injector
path, delays, retry limits, selection, and build policy are command-line
settings rather than query-specific source-code branches.
