# C project coding guidelines

These rules apply to new and edited code in `cproj`.

See `LANGUAGE_POLICY.md` for the selected C++20/C11/Rust component boundaries.

## Names and formatting

- Use descriptive, complete names for functions, variables, parameters, and types. Prefer `candidate_index` over `i`, `movement_delta` over `data`, and `destination_position` over `destination`.
- Put spaces around operators and after commas. Use one declaration or statement per line, consistent four-space indentation, and blank lines between logical steps.
- Keep comments short and limited to facts that the code cannot make clear, especially verified retail behavior and non-obvious ABI details.
- Keep functions focused and make ownership, units, coordinate layout, and pointer validity explicit in interfaces.

## Failures and invariants

- Validate external pointers, counts, sizes, and state before dereferencing or indexing.
- In C, report recoverable failures through explicit status values or documented output behavior; C has no exceptions. In C++, catch exceptions at subsystem/API boundaries and convert them to the project's error type. In Rust, return `Result` for recoverable errors.
- Use assertions for programmer invariants during development, not as the only handling for malformed input or runtime state.
- Never silently turn a failed lookup or invalid state into plausible gameplay output. Preserve the failure context in a diagnostic.

## Diagnostics

- Use consistent timestamps and severity labels (`DEBUG`, `INFO`, `WARN`, `ERROR`) with a subsystem and operation name.
- Include the relevant operation, address/asset identifier, and failure reason when available. Do not log every successful frame or candidate iteration by default.
- Gate high-volume diagnostics behind an explicit verbose setting; log invalid inputs and failed subsystem operations at error severity.
- Keep logs readable and stable so runtime comparisons can be searched and diffed.

## Verification

- Keep static findings, controlled component probes, and retail runtime observations distinct in comments and reports.
- Do not count a function as game-integrated until its real engine-state provider and call path are connected and verified.
