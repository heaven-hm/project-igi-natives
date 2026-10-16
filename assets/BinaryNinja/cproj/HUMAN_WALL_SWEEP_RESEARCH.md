# Human_WallSweep (0x00461A70) Reverse Engineering Research

## 1. Executive Summary & Verification Provenance

This research document analyzes the retail Project I.G.I. engine's primary horizontal wall collision and sliding routine, `Human_WallSweep`, located at virtual address `0x00461A70`.

### Target Binary & Environment Evidence
- **Target Binary**: `/Users/haseeb-mir/Downloads/IGI/igi.exe`
- **File Size**: `1,384,448` bytes
- **SHA-256**: `dea34892d417715873ea61d7b2ba5556655f1ad65385104348146f9679915a01`
- **Architecture**: PE32 x86 Little-Endian
- **Image Base**: `0x00400000`
- **Function Range**: `0x00461A70` – `0x0046238C`
- **Binary Size**: `2,333` bytes (623 instructions, 75 basic blocks, 117 control-flow edges)
- **Cyclomatic Complexity**: `44`
- **REA Function Evidence ID**: `ev_666487ffbca2dea571486e1eaed68cd653b3923b834ea3fda7bb2b306dc2f2a5`
- **REA Binary Overview Evidence ID**: `ev_13c5fc790534f7f23260aa4c50287f0af62405b7647cb0d043541061ae532b5e`
- **Parent Integrator Evidence ID**: `ev_3e5f1c0885f0b58850b1f2f68776268648bdf1d490c31068a1d769b35e37caac` (`0x004614B0`)
- **Player Tick Evidence ID**: `ev_3fe2506324d916f7fd7bbf4ef283f37d8dc2efbc6cc69b1c445adf04d44de4e9` (`0x004109A0`)

> [!IMPORTANT]
> **Static vs. Runtime Boundary**: All data, offsets, constants, and flow graphs in this document are established through static x86 instruction disassembly, Ghidra 12.1.3 headless analysis, and Binary Ninja AST decompilation. No live memory captures or INT3 instruction traces have been collected under CrossOver/Wine. These findings establish algorithmic ground truth, not runtime parity.

### REA instruction-level revalidation (2026-10-16)

The retail file was re-opened through the live REA/Ghidra 12.1.2 provider. Its SHA-256 remains `dea34892d417715873ea61d7b2ba5556655f1ad65385104348146f9679915a01`. The current evidence IDs are:

- `ev_4ce6ae52ee95b3a7eac8dc942647ec00ee70b867bcd0eecbb1ffed399c914454` — complete wall-sweep dossier and decompilation.
- `ev_06e900704cb39ddbebee11d129cc2821ccacdaa695385c1bb35da051e96cc91e` — wall-sweep assembly, including the collision batch call sequence.
- `ev_d6bc1a291f9ac29d97a72b332bace72419e4c6066c0ccac270de50eb9602dfeb` — `World_TraceBatch` dossier and decompilation.
- `ev_e104d18bf6ded21c476174dd61f74fb8121c74558f58afdd98a00f158d68bf21` — body of `0x00416920`.
- `ev_eb12998f6e3c9d3d21b657c06d28b767105433d3dd6450886fa0fac701fd68c0` — body of `0x00416850`.
- `ev_ac81a34094771d69289e16a4109ab3aed3618b9de66b1d060d5e323a0cacf2` — body of slide projection helper `0x004B2C70`.

The assembly around `0x00461D28` clarifies how the query arguments are assembled. `0x00416850` returns the byte at `0x00539548`; `0x00416920` returns the world-context pointer stored at `[0x0057BABC + 0x20]`. Both are simple getters and return without cleaning the caller's stack. The wall routine pushes the remaining query arguments around those calls, then pushes the returned world-context pointer and calls `0x004CDB20` at `0x00461D71`. The cleanup at `0x00461D7D` removes the accumulated nine 32-bit arguments (`0x24` bytes). Do not translate the two getters as functions that construct the trace arrays or context.

The wall sweep zeroes a `0x150`-byte hit buffer before the call. The result scan starts at buffer offset `0x38` and advances by `0x70` bytes per record. For each record, the observed normal starts at `+0x38`, the hit indicator is at `+0x58`, and the hit distance is a double at `+0x60`. The hit point is read as three doubles at `+0x08`, `+0x10`, and `+0x18`. This is the record base; offsets measured relative to the scan's normal pointer must not be mistaken for offsets from the start of the hit buffer.

The wall function's externally observed ABI remains the five-argument cdecl signature in Section 2. A fresh caller audit resolves the portable `World_TraceBatch` declaration: it has nine stack arguments, with an integer ray count in argument five. At `0x00461D71`, the retail wall caller pushes `3` in that slot. The Ghidra body at `0x004CDB20` reads `[EBP + 0x18]` as an integer, adds it to a counter, and loops over that count. The other observed callers are `0x00464BD0` and `0x004CBE40`; their assembly evidence IDs are `ev_f8a8ac742e2e1b1819d8f8599b80befc619541e33246a9a02c52db5985f94c10` and `ev_778837fb0d56d7be0c01c210192c5ef76b0c0ffa0d01b58dbce583c4d9515e34`.

None of the three callers reads EAX as a return value after the call. The wall caller resumes by reading the hit buffer; the AI caller reads its stack hit record; the dynamic-object caller tests its own saved flags. The portable C interface therefore returns `void`. This caller audit is supported by `World_TraceBatch` procedure evidence `ev_d6bc1a291f9ac29d97a72b332bace72419e4c6066c0ccac270de50eb9602dfeb`, caller-list evidence `ev_e34bb13a1607905cc68df0616115fdd16a5d091525d31d0f86e26f6d5f41ef36`, wall assembly evidence `ev_06e900704cb39ddbebee11d129cc2821ccacdaa695385c1bb35da051e96cc91e`, and the two caller assembly records above.

The generated `World_TraceBatch` C body remains untrusted and excluded from the build. Its decompiler output models the ray count as a pointer, assigns unrelated intermediate values to it, and exposes an unused pointer return. The portable declaration and weak fallback now match the audited call ABI, but they still do not provide world collision. The generated C declarations and `00461A70-Human_WallSweep.c` must not be treated as a complete retail implementation until their semantics are normalized against instruction evidence.

This is static instruction evidence only. It does not establish a working native world-trace provider, live memory layout under CrossOver, or retail-versus-port parity.

---

## 2. Function ABI & Calling Convention

### 2.1 Function Signature
```c
void __cdecl Human_WallSweep(
    void* human,              /* [ebp + 0x08] Pointer to Human entity object */
    const double start_pos[3],/* [ebp + 0x0C] Initial position: X, Y, Z (3x double, 24 bytes) */
    double dest_pos[3],       /* [ebp + 0x10] Proposed destination: X, Y, Z (in/out, modified in-place) */
    float out_disp[3],        /* [ebp + 0x14] Resulting effective displacement vector (3x float, 12 bytes) */
    uint32_t* flags           /* [ebp + 0x18] Collision status bitfield pointer (in/out) */
);
```

### 2.2 Caller Argument Order & Stack Frame
The routine is invoked exclusively by `Human_MovementIntegrator` (`0x004614B0`) at instruction `0x004618C2`.

Caller instruction sequence (`0x004618A3` – `0x004618C7`):
```assembly
0x004618A3: mov al, byte [ebx + 0x696]   ; Check wall-sweep enable flag on Human entity
0x004618A9: test al, al
0x004618AB: je 0x004618CA                ; Skip wall sweep entirely if byte is zero
0x004618AD: lea eax, [esp + 0x10]        ; &flags
0x004618B1: lea ecx, [esp + 0x1C]        ; &out_disp
0x004618B5: push eax                     ; Arg 5: uint32_t* flags
0x004618B6: lea edx, [esp + 0x44]        ; &dest_pos
0x004618BA: push ecx                     ; Arg 4: float* out_disp
0x004618BB: lea eax, [esp + 0x60]        ; &start_pos
0x004618BF: push edx                     ; Arg 3: double* dest_pos
0x004618C0: push eax                     ; Arg 2: const double* start_pos
0x004618C1: push ebx                     ; Arg 1: void* human (in ebx register)
0x004618C2: call 0x00461A70              ; Human_WallSweep
0x004618C7: add esp, 0x14                ; cdecl caller cleanup: 5 args * 4 bytes = 20 bytes
```

Callee prologue (`0x00461A70` – `0x00461A81`):
```assembly
0x00461A70: push ebp
0x00461A71: mov ebp, esp
0x00461A73: and esp, 0xFFFFFFF8          ; 8-byte stack alignment for double-precision FPU ops
0x00461A76: sub esp, 0x294               ; Allocate 660 bytes of local workspace
0x00461A7C: mov eax, [ebp + 0x08]        ; Load human pointer into eax
0x00461A7F: push ebx                     ; Save non-volatile registers
0x00461A80: push esi
0x00461A81: push edi
```

---

## 3. Important Object Offsets & Status Flags

### 3.1 Human Object Offsets
| Offset | Type | Field Name | Description |
|---|---|---|---|
| `+0x000` | `void*` | `vtable` | Entity virtual method table |
| `+0x070` | `void*` | `bone_matrix_table` | Pointer to skeletal bone/transformation matrix array |
| `+0x078` | `float` | `basis_m11` | 3x3 Orientation Rotation Matrix Row 1 Column 1 |
| `+0x07C` | `float` | `basis_m12` | 3x3 Orientation Rotation Matrix Row 1 Column 2 |
| `+0x080` | `float` | `basis_m13` | 3x3 Orientation Rotation Matrix Row 1 Column 3 |
| `+0x084` | `float` | `basis_m21` | 3x3 Orientation Rotation Matrix Row 2 Column 1 |
| `+0x088` | `float` | `basis_m22` | 3x3 Orientation Rotation Matrix Row 2 Column 2 |
| `+0x08C` | `float` | `basis_m23` | 3x3 Orientation Rotation Matrix Row 2 Column 3 |
| `+0x090` | `float` | `basis_m31` | 3x3 Orientation Rotation Matrix Row 3 Column 1 |
| `+0x094` | `float` | `basis_m32` | 3x3 Orientation Rotation Matrix Row 3 Column 2 |
| `+0x098` | `float` | `basis_m33` | 3x3 Orientation Rotation Matrix Row 3 Column 3 |
| `+0x33D` | `uint8_t` | `is_crouching` | Posture / Stance flag: `0` = Standing, `!= 0` = Crouching/Prone |
| `+0x514` | `float` | `pos_x` | Human root world position X |
| `+0x518` | `float` | `pos_y` | Human root world position Y |
| `+0x51C` | `float` | `pos_z` | Human root world position Z |
| `+0x695` | `uint8_t` | `check_ground_flag` | Gate flag for ground query routine (`0x00462390`) |
| `+0x696` | `uint8_t` | `check_wall_sweep_flag` | Gate flag for wall sweep routine (`0x00461A70`) |

### 3.2 Collision Status Flags (`uint32_t* flags`)
The integer pointed to by `flags` at `[ebp + 0x18]` is a bitmask carrying state between movement stages:
- **Bit 2 (`0x04`) — Sweep Mode Flag**:
  - `flags & 0x04 == 0`: Full vertical profile sweep (dispatches 3 parallel rays: feet, torso, head).
  - `flags & 0x04 != 0`: Reduced profile sweep (dispatches 2 parallel rays).
- **Bit 3 (`0x08`) — Wall Collision Detected**:
  - Cleared at entry (`0x00461AB1`): `*flags &= ~0x08` (`and dword [eax], 0xFFFFFFF7`).
  - Set upon any confirmed wall contact (`0x0046231C`): `*flags |= 0x08` (`or dword [eax], 0x08`). Signals to subsequent movement code that wall sliding occurred this tick.

---

## 4. Collision Query Sequence

```
                    ┌─────────────────────────┐
                    │    Human_WallSweep      │
                    │      (0x00461A70)       │
                    └────────────┬────────────┘
                                 │
                   Extract reference bone height
                   via Human_GetBoneWorldPosition
                                 │
                  Clear collision bit (*flags &= ~0x08)
                  Initialize iteration count = 0
                                 │
     ┌───────────────────────────┴───────────────────────────┐
     ▼                                                       ▼
Compute delta:                                      Check iteration count:
dest_pos - start_pos                                if count > 10:
     │                                                ROLLBACK dest_pos = start_pos
Is delta == (0,0,0)?                                  break to displacement output
 (Vec3d_IsZero)
     ├─── YES ──► Exit loop
     │
     └─── NO
           │
  Calculate travel distance & normalize direction
  Extend travel distance by +10.24 margin (1 cm)
           │
  Query posture (+0x33D):
   - Standing: Ray0=409.6, Ray1=1638.4, Ray2=7372.8
   - Crouching: Ray0=409.6, Ray1=819.2,  Ray2=5324.8
           │
  Build 2 or 3 parallel horizontal rays (start -> end)
           │
  Call World_TraceBatch(0x004CDB20) against world BSP / colliders
           │
  Inspect hit records:
   - For each hit, check surface normal |N.z| < 0.10f
   - If |N.z| >= 0.10f -> Ignore (Floor/Ramp/Ceiling)
   - If |N.z| < 0.10f  -> Valid vertical Wall
           │
  Pick closest wall intersection across all rays
           │
  Any wall hit?
     ├─── NO  ──► Exit loop (unobstructed)
     │
     └─── YES
           │
         Project remaining velocity onto wall plane
         via Vec3f_ProjectSlide (0x004B2C70)
         Update dest_pos = hit_pos + slide_delta + normal * 10.24
         Set flag (*flags |= 0x08)
         iteration++
         Loop back to re-trace deflected segment
```

### 4.1 Detailed Algorithmic Stages

1. **Reference Bone Coordinate Extraction (`0x00461A82` – `0x00461AAD`)**:
   Calls `Human_GetBoneWorldPosition(out_vector, human, bone_index=0)` at `0x0048A340`.
   Extracts `tmpD1 = out_vector.z`. All subsequent ray probe heights are calculated relative to `tmpD1`.

2. **Loop Initialization & Delta Zero Check (`0x00461AB4` – `0x00461AEA`)**:
   - `delta.x = dest_pos.x - start_pos.x`
   - `delta.y = dest_pos.y - start_pos.y`
   - `delta.z = dest_pos.z - start_pos.z`
   - Calls `Vec3d_IsZero(&delta)` at `0x004B3320`. If all three double components equal `0.0`, the loop exits immediately.

3. **Ray Construction with Skin Padding (`0x00461AF0` – `0x00461D26`)**:
   - Computes `travel_dist = Vec3d_Length(&delta)` via `0x004B3130`.
   - Extends sweep distance by `10.24` units (`1 cm` skin margin): `sweep_len = travel_dist + 10.24`.
   - Computes unit direction vector `unit_dir = delta / travel_dist` via `0x004B3100`.
   - Inspects `human->is_crouching` (`+0x33D`):
     - **Ray 0 (Lowest probe / Shin level)**:
       $$\text{height}_0 = 409.6 - \text{tmpD1}$$
     - **Ray 1 (Mid probe / Torso level)**:
       $$\text{height}_1 = (\text{is\_crouching} \,?\, 819.2 : 1638.4) - \text{tmpD1}$$
     - **Ray 2 (Upper probe / Head level)**:
       $$\text{height}_2 = (\text{is\_crouching} \,?\, 5324.8 : 7372.8) - \text{tmpD1}$$
   - For each ray $i \in \{0, 1, 2\}$, formats endpoints:
     $$\text{Start}_i = (\text{start\_pos.x}, \, \text{start\_pos.y}, \, \text{start\_pos.z} + \text{height}_i)$$
     $$\text{End}_i = \text{Start}_i + \text{unit\_dir} \cdot \text{sweep\_len}$$

4. **Batch Collision Query (`0x00461D28` – `0x00461D76`)**:
   - Reads global collision category mask byte from `0x00416850` (`byte [0x00539548]`).
   - Reads world spatial partitioning tree pointer from `0x00416920` (`dword [0x0057BABC] -> +0x20`).
   - Invokes `World_TraceBatch` (`0x004CDB20`):
     - `arg1`: Collision root context
     - `arg2`: Output hit array (size 336 bytes, 3 records $\times$ 112 bytes)
     - `arg3`: Ray start array
     - `arg4`: Ray direction array
     - `arg5`: Ray count (2 if `flags & 4`, else 3)
     - `arg6`: Category mask byte
     - `arg7`: Endpoints array
     - `arg8`: Filter mask (`0xFFFFFFFF`)
     - `arg9`: Trace options (`1`)

5. **Surface Classification & Wall Filtering (`0x00461D97` – `0x00461EB0`)**:
   - For each ray hit returned, examines normal vector $(N_x, N_y, N_z)$.
   - Evaluates:
     $$|N_z| < 0.10f \quad (\text{constant at } 0x005333C8)$$
     - If $|N_z| \ge 0.10f$: Surface is a floor, walkable slope, or ceiling. **Ignored by the wall sweep**.
     - If $|N_z| < 0.10f$: Surface incline is $\ge 84.26^\circ$. Classified as a **vertical wall**.
   - Zeroes the vertical normal component ($N_z = 0.0$) and re-normalizes $(N_x, N_y)$ to produce a purely horizontal 2D wall normal.
   - Compares hit distances across the active rays and selects the intersection with the minimum distance.

6. **Deflection & Sliding Vector Calculation (`0x004621E0` – `0x0046231C`)**:
   - If a wall contact is confirmed:
     - Calls `Vec3f_ProjectSlide` (`0x004B2C70`):
       - Computes dot product $\text{dot} = \text{travel\_dir} \cdot N$.
       - If $|\text{dot}| \le 1.0 \times 10^{-5}$ (constant at `0x00534A90`), velocity is tangential; no projection needed.
       - Otherwise, projects the remainder of the movement trajectory along the wall plane:
         $$\vec{v}_{\text{slide}} = \vec{v}_{\text{remaining}} - (\vec{v}_{\text{remaining}} \cdot N) N$$
     - Updates `dest_pos` to contact point plus $\vec{v}_{\text{slide}}$, with an outward normal standoff of $10.24$ units.
     - Sets wall collision flag: `*flags |= 0x08`.
     - Increments loop iteration: `iteration++`.

7. **Anti-Pinch Iteration Guard & Rollback (`0x00462322` – `0x0046234C`)**:
   - Evaluates `iteration > 10`:
     - If `iteration > 10` (character trapped in acute geometry or corner pinch):
       - **Destructive Rollback**:
         ```c
         dest_pos[0] = start_pos[0];
         dest_pos[1] = start_pos[1];
         dest_pos[2] = start_pos[2];
         ```
       - Zero movement allowed. Loop breaks immediately.
     - If `iteration <= 10` and collision occurred: repeats the sweep from the new position to test for secondary wall impacts.

8. **Output State Generation & Telemetry (`0x00462355` – `0x00462383`)**:
   - Computes net 3D displacement vector:
     $$\text{out\_disp}[0] = (\text{float})(\text{dest\_pos}[0] - \text{start\_pos}[0])$$
     $$\text{out\_disp}[1] = (\text{float})(\text{dest\_pos}[1] - \text{start\_pos}[1])$$
     $$\text{out\_disp}[2] = (\text{float})(\text{dest\_pos}[2] - \text{start\_pos}[2])$$
   - Dispatches debug telemetry via `0x00460C80(human, "Checks: %d\n", iteration)`.
   - Restores stack and returns.

---

## 5. Constants & Units Reference

| Address | Hex (LE) | Type | Value | Engine Meaning |
|---|---|---|---|---|
| `0x005333B0` | `0000000000000000` | `double` | `0.0` | Zero vector comparison baseline |
| `0x005333C8` | `cdccb03d` | `float` | `0.10f` | Maximum $|N_z|$ threshold for wall classification |
| `0x005333EC` | `00000000` | `float` | `0.0f` | Single-precision zero baseline |
| `0x005333F8` | `000000000000f03f` | `double` | `1.0` | Unit scalar for reciprocal normalization |
| `0x00533418` | `9a99999999997940` | `double` | `409.6` | Lowest probe ray height (0.40 m) |
| `0x00533478` | `9a99999999999940` | `double` | `1638.4` | Standing middle probe ray height (1.60 m) |
| `0x0053395C` | `2cd37fbf` | `float` | `-0.9999f` | Ceiling normal dot threshold |
| `0x00533968` | `cdccccccccccbc40` | `double` | `7372.8` | Standing upper probe ray height (7.20 m) |
| `0x00533970` | `cdccccccccccb440` | `double` | `5324.8` | Crouching upper probe ray height (5.20 m) |
| `0x00533978` | `9a99999999998940` | `double` | `819.2` | Crouching middle probe ray height (0.80 m) |
| `0x00533980` | `7b14ae47e17a2440` | `double` | `10.24` | Wall skin margin / standoff distance (0.01 m) |
| `0x00534A8C` | `acc527b7` | `float` | `-1.0e-5` | Negative parallelism epsilon threshold |
| `0x00534A90` | `acc52737` | `float` | `+1.0e-5` | Positive parallelism epsilon threshold |
| `0x0053F4C4` | `436865636b...` | `string` | `"Checks: %d\n"` | Telemetry log format string |
| Immediate | `0x0A` | `int` | `10` | Maximum iterative sweeps before rollback |

*Note on engine scale*: The Project I.G.I. engine uses internal integer/fixed-point derived units where **1,024 units = 1.0 meter**. Therefore, `10.24` units represents exactly 1.0 centimeter ($0.01$ m), and `1638.4` represents 1.60 meters.

---

## 6. Helper Calls & Callees

| Address | Symbolic Name | Protocol / Signature | Description |
|---|---|---|---|
| `0x0048A340` | `Human_GetBoneWorldPosition` | `void(float* out, void* human, int bone_id)` | Transforms skeletal bone offset into world coordinates using character orientation basis and position. |
| `0x004B3320` | `Vec3d_IsZero` | `int(const double v[3])` | Returns `1` if all three components are equal to `0.0`. |
| `0x004B3130` | `Vec3d_Length` | `double(const double v[3])` | Returns Euclidean length $\sqrt{x^2 + y^2 + z^2}$ via x87 `fsqrt`. |
| `0x004B3100` | `Vec3d_Normalize` | `void(double v[3])` | Normalizes 3D double vector in place. |
| `0x00416850` | `Level_GetCollisionMask` | `uint8_t(void)` | Returns active collision layer mask byte from `byte [0x00539548]`. |
| `0x00416920` | `Level_GetSpatialTree` | `void*(void)` | Returns pointer to world spatial collision quadtree/BSP from `dword [0x0057BABC] + 0x20`. |
| `0x004CDB20` | `World_TraceBatch` | `void(int world_context, int* hit_records, double* ray_starts, double* ray_ends, int ray_count, char trace_flags, double* trace_auxiliary, int collision_mask, int trace_mode)` | Dispatches a batch multi-ray trace against static geometry and dynamic colliders. The ABI is caller-audited; the generated body remains excluded pending semantic normalization. |
| `0x004B2C70` | `Vec3f_ProjectSlide` | `int(float* out, float* dir, float* normal, float* vel)` | Projects velocity vector along plane tangent, handling near-orthogonal edge cases. |
| `0x00460C80` | `Human_LogPhysicsChecks` | `void(void* human, const char* fmt, int count)` | Debug logging gate; logs iteration checks count. |

---

## 7. Uncertainties & Verification Gaps

1. **Trace Batch Hit Structure Memory Layout**:
   The hit buffer allocated on the stack is `336` bytes (`3` records $\times$ `112` bytes = `0x70`). While the hit flag (`+0x20`), surface normal (`+0x00..+0x08`), and hit distance (`+0x28`) are identified, the remaining fields in the 112-byte block contain material IDs, surface texture pointers, and face indexes whose full C struct definitions remain unmapped.
2. **Global Pointer Initialization**:
   The world spatial collision pointer at `0x0057BABC` and category mask at `0x00539548` are initialized by mission scripts and engine world loading. In an isolated host-side test harness without loaded level RES archives, these pointers are NULL.
3. **Floating Point Rounding & FPU Precision**:
   The original binary compiles against x87 80-bit extended precision stack registers (`long double` intermediaries). Modern SSE/AVX compilation on ARM64 macOS will evaluate using IEEE-754 64-bit doubles, introducing potential sub-millimeter rounding divergences on edge cases.

---

## 8. Controlled Test Cases for C Port

The following test cases define the exact behavioral expectations for the clean C reimplementation:

### Test Case 1: Unobstructed Forward Movement
- **Input**:
  - `start_pos = { 1000.0, 2000.0, 500.0 }`
  - `dest_pos  = { 1100.0, 2000.0, 500.0 }` (travel delta = `+100.0` X)
  - `human.is_crouching = 0`
  - `flags = 0`
  - Simulated `World_TraceBatch`: No hits on all 3 rays.
- **Expected Output**:
  - `dest_pos` unmodified: `{ 1100.0, 2000.0, 500.0 }`
  - `out_disp = { 100.0f, 0.0f, 0.0f }`
  - `flags` unmodified: `0` (bit `0x08` remains 0)
  - Loop iterations: `1`

### Test Case 2: Perpendicular Wall Impact
- **Input**:
  - `start_pos = { 1000.0, 2000.0, 500.0 }`
  - `dest_pos  = { 1200.0, 2000.0, 500.0 }` (travel delta = `+200.0` X)
  - Flat vertical wall at `x = 1100.0`, surface normal $N = (-1.0, 0.0, 0.0)$.
  - Simulated `World_TraceBatch`: Hit at distance `100.0`.
- **Expected Output**:
  - Destination clamped to wall plane plus skin margin:
    `dest_pos.x = 1100.0 - 10.24 = 1089.76`
    `dest_pos.y = 2000.0`
    `dest_pos.z = 500.0`
  - `out_disp = { 89.76f, 0.0f, 0.0f }`
  - Wall collision flag set: `flags & 0x08 != 0`
  - Loop iterations: `2` (initial impact, followed by zero-delta re-trace)

### Test Case 3: Glancing / Oblique Wall Sliding
- **Input**:
  - Movement at $45^\circ$: `start_pos = { 1000.0, 2000.0, 500.0 }`, `dest_pos = { 1100.0, 2100.0, 500.0 }`.
  - Vertical wall aligned to Y-axis at $x = 1050.0$, normal $N = (-1.0, 0.0, 0.0)$.
- **Expected Output**:
  - X movement clamped to wall standoff: `dest_pos.x = 1050.0 - 10.24 = 1039.76`.
  - Y movement allowed to slide along wall face: `dest_pos.y = 2100.0`.
  - `flags & 0x08 != 0`.

### Test Case 4: Non-Vertical Surface Rejection (Floor / Walkable Ramp)
- **Input**:
  - Movement into a slope with normal $N = (-0.7071, 0.0, 0.7071)$ ($45^\circ$ ground ramp).
- **Evaluation**:
  - $|N_z| = 0.7071 \ge 0.10f$.
- **Expected Output**:
  - Surface rejected by wall filter.
  - Wall sweep does not clamp position; ground pass (`0x00462390`) handles slope interaction.

### Test Case 5: Acute Corner Pinch / Anti-Pinch Rollback
- **Input**:
  - Character moving into an acute wedge formed by two walls intersecting at $30^\circ$.
  - Deflection from Wall A immediately collides with Wall B, and vice-versa.
- **Expected Output**:
  - Loop reaches iteration `11` (`iteration > 10`).
  - Destructive rollback triggered:
    `dest_pos.x = start_pos.x`
    `dest_pos.y = start_pos.y`
    `dest_pos.z = start_pos.z`
  - `out_disp = { 0.0f, 0.0f, 0.0f }`
  - Prevents game engine lockup / infinite loops in tight geometric corners.
