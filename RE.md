# RE.md

# Project IGI Autonomous Reverse Engineering Architecture

> Autonomous reverse-engineering specification for discovering, validating,
> cataloguing, testing, and porting Project IGI native engine functions.
> 
> Primary goal:
> 
>     igi.exe + igi2.pdb + Ghidra + radare2 + AI
>                         ↓
>            Autonomous Native Discovery
>                         ↓
>                IGINatives.json
>                         ↓
>                  Natives.hpp
>                         ↓
>                 OpenIGI Ports
> 
> The system MUST NOT invent addresses, signatures, calling conventions,
> structure layouts, offsets, return types, parameters, or semantics.
> 
> Unknown is always preferable to fabricated.

---

# 1. PURPOSE

This document defines the complete architecture for an autonomous
reverse-engineering system targeting Project IGI binaries.

The system is intended to automatically:

1. Load the available IGI executable.
2. Load the available `igi2.pdb`.
3. Import PDB symbols and types into Ghidra.
4. Repair/improve Ghidra analysis.
5. Enumerate known engine functions.
6. Build fingerprints for known functions.
7. Discover previously undocumented functions.
8. Traverse callers, callees, xrefs, globals, strings, vtables and tables.
9. Infer candidate semantics.
10. Recover probable function prototypes.
11. Recover calling conventions.
12. Recover object/structure field usage.
13. Compare functions across executable versions when multiple binaries exist.
14. Validate candidates using radare2/r2mcp.
15. Assign independent confidence scores.
16. Reject insufficiently supported conclusions.
17. Store all evidence and provenance.
18. Generate `IGINatives.json`.
19. Generate native C++ wrappers in `Natives.hpp`.
20. Generate reusable C#/OpenIGI definitions where appropriate.
21. Build the native DLL.
22. Build/test OpenIGI.
23. Optionally perform controlled runtime verification.
24. Feed runtime evidence back into the knowledge base.
25. Continue autonomously until the research queue is exhausted.

The objective is not merely function renaming.

The objective is to construct an evidence-backed model of the IGI engine.

---

# 2. PRIMARY PRINCIPLE & TRUST MODEL

## 2.1 The Asymmetric Trust Model: Semantic Dictionary vs Ground Truth

> **`igi2.pdb` is NOT ground truth for IGI 1.**
> It is an engine reference and semantic dictionary from a related game/version.

The autonomous agent uses `igi2.pdb` as a **semantic map** (class names, subsystem hierarchies, algorithmic motifs, structure relationships, bone/mesh math patterns), but NEVER as an authoritative address or 1:1 layout truth for `igi.exe`.

### Multi-Pillar Verification Pipeline:

```text
IGI 2 PDB
   ↓
provides names / subsystem clues / type hints / algorithmic templates
   ↓
search for structurally similar functions in IGI 1
   ↓
Ghidra analyzes actual IGI 1 machine code
   ↓
r2mcp independently validates CFG / stack frame / calling convention
   ↓
compare callers, callees, strings, constants, globals
   ↓
AI proposes: "IGI 1 FUN_0049F700 MAY correspond to IGI2::Mesh_SkinBones"
   ↓
Candidate Score >= 0.85  ──> [ STRONG CANDIDATE ONLY ]
   ↓
+ IGI 1 Internal Evidence (call graph, registers, struct offsets, stack balance)
+ Runtime Verification (injection, non-crashing hook, telemetry validation)
   ↓
[ ACCEPTED AS VERIFIED IGI 1 NATIVE ]
```

### Confidence Tiering:

| Stage | Evidence Required | Status | Action |
|---|---|---|---|
| **Tier 1: Motif Match** | Name/string clue from PDB or table scan | `UNEXPLORED` | Enqueue in research priority queue |
| **Tier 2: Cross-Game Similarity** | CFG & opcode similarity $\ge 0.85$ vs IGI2 reference | `STRONG CANDIDATE` | **Do NOT commit yet**; proceed to internal validation |
| **Tier 3: IGI 1 Internal Validation** | Calling convention verified, call graph matched, registers clean | `STATICALLY VERIFIED` | Generate C++ wrapper candidate in test harness |
| **Tier 4: Runtime Execution** | Injected into live `igi.exe`, executed without AV / crash, validated telemetry | `ACCEPTED IGI 1 NATIVE` | Commit to `IGINatives.json`, `Natives.hpp`, and OpenIGI ports |

Never:

    IGI 2 PDB Address/Layout
        ↓
    Copy directly into IGI 1 Natives.hpp

Always:

    Cross-Game Clues + IGI 1 Decompilation + Independent r2 CFG + Runtime Verification
        ↓
    Verified IGI 1 Native

---

# 3. TOOLCHAIN

## 3.1 Ghidra

Version:

    Ghidra 12.1.2

Path:

    D:\Software\ghidra_12.1.2_PUBLIC_20260605

Purpose:

- Binary analysis
- PDB ingestion
- Symbol recovery
- Data-type recovery
- Function identification
- Decompilation
- Xref analysis
- Call graph extraction
- Global-variable analysis
- Structure reconstruction
- Vtable discovery
- String-reference analysis
- Automated headless scripting

---

## 3.2 Ghidra Headless MCP

Path:

    D:\Code\open-igi\ghidra-headless-mcp\

Purpose:

Expose Ghidra analysis operations to the autonomous AI agent.

Typical capabilities required:

    get_function_by_address
    get_function_by_name
    list_functions
    decompile_function
    disassemble_function
    get_xrefs_to
    get_xrefs_from
    function_callers
    function_callees
    list_strings
    inspect_data
    inspect_memory
    rename_function
    set_function_signature
    set_calling_convention
    apply_data_type
    run_script
    save_program

The MCP layer is a TOOL.

It is not itself the autonomous reasoning agent.

---

# 3.3 Target Game Binary

Primary binary:

    D:\IGI1\igi.exe

The architecture must support adding additional builds later:

    binaries/
        retail/
        demo/
        debug/
        regional/
        patched/
        alternate-version/

Every binary receives a unique Build ID.

Example:

    {
        "build_id": "igi-retail-1",
        "path": "D:\\IGI1\\igi.exe",
        "sha256": "...",
        "image_base": "0x00400000",
        "architecture": "x86",
        "pdb_available": false
    }

---

# 3.4 Debug Symbol File

PDB:

    D:\IGI1\igi2.pdb

Purpose:

Provide symbol/type/debug information which acts as one of the strongest
available evidence sources.

The PDB may provide:

- Function names
- Namespaces/classes
- Source-related names
- Type definitions
- Enums
- Structures
- Globals
- Function parameters
- Return types
- Member names

IMPORTANT:

PDB data is evidence.

It is NOT automatically treated as unquestionable truth for another binary.

Cross-version symbols must still be validated.

---

# 3.5 radare2

Path:

    C:\Users\hasee\tools\r2\radare2-6.2.0-w64\bin\radare2.exe

Purpose:

Provide an independent disassembly and control-flow analysis source.

Used for:

- Function boundaries
- Basic blocks
- CFG extraction
- Cyclomatic complexity
- Instruction analysis
- Stack-frame information
- Cross-reference verification
- Call graph analysis
- Opcode comparison
- Function fingerprints

---

# 3.6 r2mcp

Path:

    C:\Users\hasee\tools\r2mcp\r2mcp.cmd

Purpose:

Expose radare2 analysis to the AI/orchestration layer.

r2mcp is primarily an independent validator.

Ghidra and radare2 should not simply confirm each other's labels.

Their independently derived structural evidence should be compared.

---

# 3.7 AI Reasoning Agent

Recommended architecture supports:

    OpenAI Codex
    OpenAI API models
    Claude Code
    Anthropic API models
    other tool-capable reasoning models

The AI is responsible for:

- Research planning
- Evidence interpretation
- Hypothesis generation
- Candidate prioritization
- Semantic analysis
- Conflict resolution
- Research queue management
- Deciding which tools to invoke next
- Determining whether evidence is sufficient
- Producing human-readable explanations

The AI SHOULD NOT perform work that deterministic tools can perform more
accurately or cheaply.

Example:

BAD:

    Send 20,000 raw assembly instructions to the LLM and ask:
    "Which functions look similar?"

GOOD:

    Python/radare2 computes structural similarity.
    
    AI receives:
    
        Candidate A
        CFG similarity: 0.94
        constants similarity: 0.88
        shared callees: 8/10
        string similarity: 1.0
        prototype evidence: conflicting
    
    AI investigates only the ambiguity.

---

# 4. COMPLETE SYSTEM ARCHITECTURE

                           ┌─────────────────────┐
                           │   AI RE AGENT       │
                           │ Codex / Claude /    │
                           │ tool-capable LLM    │
                           └──────────┬──────────┘
                                      │
                                      ▼
                           ┌─────────────────────┐
                           │ RE ORCHESTRATOR     │
                           │ Python              │
                           │ state machine       │
                           └──────────┬──────────┘
                                      │
          ┌───────────────────────────┼───────────────────────────┐
          │                           │                           │
          ▼                           ▼                           ▼

 ┌────────────────┐          ┌────────────────┐          ┌────────────────┐
 │ Ghidra         │          │ Ghidra MCP     │          │ radare2/r2mcp │
 │ Headless       │          │ Interactive RE │          │ Validation     │
 └───────┬────────┘          └───────┬────────┘          └───────┬────────┘
         │                           │                           │
         └───────────────────────────┼───────────────────────────┘
                                     │
                                     ▼
                          ┌──────────────────────┐
                          │ EVIDENCE EXTRACTION  │
                          └──────────┬───────────┘
                                     │
                 ┌───────────────────┼────────────────────┐
                 │                   │                    │
                 ▼                   ▼                    ▼
             Functions           Strings              Globals
             CFG                 Tables               VTables
             Calls               Constants            Types
             Xrefs               Opcodes              Structures
                 │                   │                    │
                 └───────────────────┼────────────────────┘
                                     │
                                     ▼
                          ┌──────────────────────┐
                          │ KNOWLEDGE GRAPH      │
                          └──────────┬───────────┘
                                     │
                                     ▼
                          ┌──────────────────────┐
                          │ RESEARCH QUEUE       │
                          └──────────┬───────────┘
                                     │
                                     ▼
                          ┌──────────────────────┐
                          │ CANDIDATE ANALYZER   │
                          └──────────┬───────────┘
                                     │
                       ┌─────────────┼─────────────┐
                       ▼             ▼             ▼
                  Function ID     Prototype      Semantics
                  confidence      confidence     confidence
                       │             │             │
                       └─────────────┼─────────────┘
                                     │
                                     ▼
                          ┌──────────────────────┐
                          │ VALIDATION ENGINE    │
                          └──────────┬───────────┘
                                     │
                       ┌─────────────┴─────────────┐
                       ▼                           ▼
                    ACCEPT                       REJECT
                       │                           │
                       ▼                           ▼
              IGINatives.json           rejected_natives.log
                       │
                       ▼
              ┌──────────────────┐
              │ Code Generation  │
              └─────────┬────────┘
                        │
              ┌─────────┴──────────┐
              ▼                    ▼
         Natives.hpp          OpenIGI ports
              │                    │
              └─────────┬──────────┘
                        ▼
               Build/Test/Runtime
                        │
                        ▼
                Evidence Feedback
                        │
                        └──────────────► Knowledge Graph

---

# 5. DIRECTORY ARCHITECTURE

Recommended layout:

    reverse-engineering/
    │
    ├── RE.md
    │
    ├── config/
    │   ├── re_config.json
    │   ├── binaries.json
    │   ├── confidence_rules.json
    │   └── models.json
    │
    ├── scripts/
    │   ├── pdb/
    │   │   ├── import_pdb.py
    │   │   ├── export_pdb_symbols.py
    │   │   └── export_types.py
    │   │
    │   ├── ghidra/
    │   │   ├── analyze_binary.py
    │   │   ├── export_functions.py
    │   │   ├── export_callgraph.py
    │   │   ├── export_strings.py
    │   │   ├── export_globals.py
    │   │   ├── export_vtables.py
    │   │   ├── export_structures.py
    │   │   └── harvest_tables.py
    │   │
    │   ├── r2/
    │   │   ├── analyze_binary.py
    │   │   ├── export_cfg.py
    │   │   ├── compare_functions.py
    │   │   └── verify_function.py
    │   │
    │   ├── matching/
    │   │   ├── fingerprint.py
    │   │   ├── cross_version_match.py
    │   │   ├── similarity.py
    │   │   └── rank_candidates.py
    │   │
    │   ├── agent/
    │   │   ├── orchestrator.py
    │   │   ├── research_queue.py
    │   │   ├── researcher.py
    │   │   ├── semantic_analyzer.py
    │   │   ├── confidence.py
    │   │   └── evidence_gate.py
    │   │
    │   ├── runtime/
    │   │   ├── generate_probe.py
    │   │   ├── launch_and_inject.py
    │   │   ├── collect_runtime_log.py
    │   │   └── verify_runtime.py
    │   │
    │   └── generation/
    │       ├── generate_iginatives.py
    │       ├── generate_natives_hpp.py
    │       └── generate_openigi_ports.py
    │
    ├── database/
    │   ├── binaries.json
    │   ├── pdb_symbols.json
    │   ├── functions.json
    │   ├── fingerprints.json
    │   ├── callgraph.json
    │   ├── globals.json
    │   ├── strings.json
    │   ├── structures.json
    │   ├── vtables.json
    │   ├── knowledge_graph.json
    │   ├── research_queue.json
    │   └── evidence/
    │
    ├── output/
    │   ├── IGINatives.json
    │   ├── Natives.hpp
    │   ├── discovered_natives.json
    │   ├── rejected_natives.log
    │   ├── uncertain_natives.json
    │   └── reports/
    │
    └── logs/
        ├── agent.log
        ├── ghidra.log
        ├── r2.log
        ├── runtime.log
        ├── acceptance.log
        └── rejection.log

---

# 6. PHASE 0 — BINARY IDENTIFICATION

Before analysis:

1. Calculate SHA-256.
2. Determine PE architecture.
3. Determine image base.
4. Extract PE sections.
5. Detect compiler/linker metadata where possible.
6. Detect presence of debug metadata.
7. Associate PDB if available.
8. Create immutable Build ID.

Example:

    {
      "build_id": "igi-retail-a1",
      "path": "D:\\IGI1\\igi.exe",
      "sha256": "...",
      "architecture": "x86",
      "image_base": "0x00400000",
      "pdb": "D:\\IGI1\\igi2.pdb"
    }

Never compare addresses between builds without recording build identity.

---

# 7. PHASE 1 — PDB INGESTION

Use Ghidra's PDB Universal Analyzer.

Required analyzer configuration conceptually:

    PDB Universal.Do Force-Load = true
    
    PDB Universal.Force-Load FilePath =
        D:\IGI1\igi2.pdb

The automated process must:

1. Load `igi.exe`.
2. Begin Ghidra transaction.
3. Configure PDB force load.
4. Run PDB Universal Analyzer.
5. Wait for analysis completion.
6. Save program.
7. Export imported symbols.
8. Export imported types.
9. Record all PDB-derived provenance.

Useful classes include:

    AutoAnalysisManager
    PdbUniversalAnalyzer
    MessageLog
    ConsoleTaskMonitor
    File

Every imported symbol should contain:

    symbol name
    address
    symbol source
    type
    namespace
    parent type/class
    PDB provenance

---

# 8. PHASE 2 — GHIDRA ACCURACY PRE-PASS

Before trusting decompilation, automatically run analysis repair steps.

Required/preferred scripts:

    FixupNoReturnFunctionsScript.java
    
    FindUnrecoveredSwitchesScript.java

Where useful:

    DecompileParameterIDCmd

Goals:

- Improve function boundaries.
- Repair no-return analysis.
- Recover switches.
- Improve parameter analysis.
- Improve local-variable analysis.
- Improve calling-convention inference.
- Reduce false callgraph edges.

The pipeline must save the analyzed program before moving on.

---

# 9. PHASE 3 — FUNCTION ENUMERATION

Export EVERY discovered function.

For every function:

    build ID
    address
    RVA
    name
    namespace
    symbol source
    size
    instruction count
    basic block count
    cyclomatic complexity
    stack-frame size
    calling convention
    inferred argument count
    return usage
    callers
    callees
    strings
    constants
    referenced globals
    read globals
    written globals
    imported API calls
    vtable relationship
    decompiler signature
    raw decompilation reference

Example:

    {
      "build": "igi-retail-a1",
      "address": "0x0049F700",
      "rva": "0x0009F700",
      "name": "Mesh_SkinBones",
      "source": "PDB",
      "size": 421,
      "basic_blocks": 18,
      "cyclomatic_complexity": 11,
      "calling_convention": "__cdecl"
    }

---

# 10. PHASE 4 — TABLE AND STRING HARVESTER

Automatically search `.rdata`, `.data`, and relevant readonly sections.

Priority prefixes:

    Config_
    AI_
    Player_
    Human_
    Camera_
    Sound_
    Mission_
    Task_
    Weapon_
    Mesh_
    Animation_
    Terrain_
    Map_
    Computer_
    Binocular_
    Object_
    Entity_
    Vehicle_
    Physics_
    Render_
    Texture_
    Material_

For every interesting string:

    string
      ↓
    xrefs
      ↓
    referencing functions
      ↓
    related globals
      ↓
    pointer tables
      ↓
    sibling functions
      ↓
    subsystem cluster

Example:

    "Mesh_SkinBones"
            │
            ├── function A
            ├── function B
            └── table pointer
                    │
                    ▼
              Mesh subsystem

The harvester should also identify:

- Null-terminated pointer arrays
- Dispatch tables
- Command tables
- Name/function pairs
- Name/value tables
- Vtables
- Native registration tables
- Configuration tables
- Task registration tables

---

# 11. PHASE 5 — FUNCTION FINGERPRINTING

Absolute addresses are not sufficient.

For every function generate multiple fingerprints.

## Structural fingerprint

Include:

    function size
    instruction count
    basic block count
    CFG edge count
    cyclomatic complexity
    loop count
    conditional count
    switch count

## Instruction fingerprint

Normalize instructions by ignoring:

    relocated addresses
    absolute addresses
    branch destinations
    stack offsets where appropriate

Retain:

    opcode sequence
    operand categories
    register usage patterns

Example:

    mov eax,[absolute-address]

can normalize toward:

    mov reg,[global]

---

## Call fingerprint

Store:

    direct calls
    imported calls
    number of calls
    call ordering
    known callee identities
    recursive properties

---

## Data fingerprint

Store:

    strings
    integer constants
    floating constants
    bit masks
    enum-like constants
    global-variable access patterns

---

## Stack fingerprint

Store:

    frame size
    local storage
    argument accesses
    return instruction type

Examples:

    ret
    
    ret 4
    
    ret 8

This contributes to calling-convention evidence.

---

## Semantic fingerprint

Derived from:

    function names
    PDB names
    neighboring symbols
    strings
    called APIs
    shared data
    subsystem cluster

---

# 12. PHASE 6 — CROSS-VERSION MATCHING

When multiple IGI executables are available:

    SYMBOLIZED BUILD
           │
           ▼
      known functions
           │
           ▼
      fingerprints
           │
           ▼
    TARGET BUILD FUNCTIONS
           │
           ▼
     candidate search
           │
           ▼
     similarity scoring

Do not depend on address equality.

Suggested weighted identity score:

    IdentityScore =
        0.25 * CFGSimilarity
      + 0.20 * OpcodeSimilarity
      + 0.15 * CalleeSimilarity
      + 0.10 * CallerSimilarity
      + 0.10 * ConstantSimilarity
      + 0.10 * StringSimilarity
      + 0.05 * StackSimilarity
      + 0.05 * SizeSimilarity

Weights may evolve based on empirical performance.

All component scores MUST be retained.

Never retain only the final score.

---

# 13. PHASE 7 — KNOWLEDGE GRAPH

Build a graph rather than storing isolated functions.

Nodes:

    Function
    Global
    String
    Structure
    Field
    VTable
    Type
    Table
    Constant
    Import
    Subsystem
    BinaryBuild

Edges:

    CALLS
    CALLED_BY
    REFERENCES
    READS
    WRITES
    CONTAINS
    MEMBER_OF
    POSSIBLE_MEMBER_OF
    USES_TYPE
    IMPLEMENTS
    SIMILAR_TO
    VERSION_MATCH
    DERIVED_FROM
    VALIDATED_BY

Example:

    Mesh_SkinBones
        │
        ├── CALLS → MatrixTransform
        ├── READS → Mesh::vertices
        ├── READS → BonePose
        ├── MEMBER_OF → Mesh subsystem
        └── VERSION_MATCH → FUN_004A2810

The graph is what allows autonomous discovery to expand from known functions
to unknown neighbors.

---

# 14. PHASE 8 — RESEARCH QUEUE

The autonomous agent must never wander randomly.

Maintain a persistent priority queue.

Example:

    {
      "address": "0x004A18F0",
      "priority": 0.94,
    
      "reasons": [
        "called by Mesh_SkinBones",
        "references three Mesh_ globals",
        "unknown function name",
        "probable match exists in symbolized build"
      ]
    }

Candidate priority should increase when:

- Called by verified native.
- Calls verified native.
- Shares globals with verified subsystem.
- References subsystem-specific strings.
- Appears in a vtable.
- Appears in registration table.
- Has strong cross-version match.
- Manipulates known structures.
- Is near important callgraph frontier.
- Is required by requested feature.

Priority should decrease when:

- Library/compiler-runtime function.
- Already fully analyzed.
- Low relevance.
- Insufficient evidence after repeated attempts.

---

# 15. AUTONOMOUS RESEARCH LOOP

Core conceptual loop:

    while research_queue is not empty:
    
        candidate = get_highest_priority_candidate()
    
        collect_ghidra_evidence(candidate)
    
        collect_r2_evidence(candidate)
    
        inspect_callers(candidate)
    
        inspect_callees(candidate)
    
        inspect_strings(candidate)
    
        inspect_constants(candidate)
    
        inspect_globals(candidate)
    
        inspect_structure_access(candidate)
    
        search_pdb_candidates(candidate)
    
        search_cross_version_candidates(candidate)
    
        classify_subsystem(candidate)
    
        generate_hypotheses(candidate)
    
        validate_hypotheses(candidate)
    
        calculate_confidence(candidate)
    
        if verified:
            accept(candidate)
    
        elif additional research possible:
            enqueue_related_candidates(candidate)
    
        else:
            reject_or_defer(candidate)
    
        persist_state()

This loop must be resumable.

If the AI process dies or reaches a token limit, no research state should be
lost.

---

# 16. AI AGENT RESPONSIBILITIES

The AI reasoning layer handles questions like:

    "This unknown function is called by Mesh_SkinBones,
     reads the same BonePose pointer,
     and writes into a vertex-buffer-like region.
    
     What are the strongest plausible semantics?"

The AI may produce hypotheses:

    H1: transforms bone matrices
    H2: performs CPU vertex skinning
    H3: uploads transformed vertices

The agent then requests evidence that distinguishes them.

Example:

    inspect callee calls
    inspect memory writes
    inspect loop stride
    inspect floating-point operations
    inspect vertex count parameter
    inspect DX calls

The AI MUST NOT simply pick H1 because it sounds plausible.

---

# 17. MULTI-HYPOTHESIS REASONING

For ambiguous functions, preserve competing interpretations.

Example:

    {
      "candidate": "0x004A18F0",
    
      "hypotheses": [
        {
          "name": "Mesh_UpdateSkinning",
          "confidence": 0.73
        },
        {
          "name": "Mesh_UpdateVertexBuffer",
          "confidence": 0.69
        }
      ]
    }

Then seek discriminating evidence.

Do not prematurely rename functions.

---

# 18. CALLING-CONVENTION ANALYSIS

Calling convention must receive its own confidence score.

Possible conventions:

    __cdecl
    __stdcall
    __thiscall
    __fastcall
    custom/unknown

Evidence includes:

## Stack cleanup

    caller adjusts ESP
        → supports __cdecl
    
    callee ret N
        → supports stdcall-like convention

## ECX usage

    ECX contains object pointer across callers
        → supports __thiscall

## EDX usage

May support fastcall/custom behavior.

## Caller consistency

Inspect multiple independent call sites.

Do NOT infer calling convention from a single call site when others are
available.

---

# 19. PROTOTYPE RECOVERY

Function identity and function prototype are separate questions.

Example:

The system may know with 0.97 confidence that:

    0x0049F700 = Mesh_SkinBones

while only knowing the prototype with 0.75 confidence.

Prototype analysis must infer:

    return type
    parameter count
    parameter ordering
    pointer/value distinction
    parameter width
    object pointer
    optional parameters
    structure parameters

Store uncertainty explicitly.

---

# 20. STRUCTURE RECONSTRUCTION

Structure reconstruction requires stricter evidence.

Suppose multiple functions access:

    [ECX + 0x1E4]
    [ECX + 0x1E8]

The system may infer:

    object.field_1E4
    object.field_1E8

before assigning semantic names.

Only later, with evidence:

    struct HumanPlayer {
        ...
        float something; // +0x1E4
        ...
    };

Do not immediately claim:

    float binocularZoom;

without direct supporting evidence.

Track each field:

    {
      "offset": "0x1E4",
      "size": 4,
      "type": "float",
      "semantic_name": null,
      "type_confidence": 0.96,
      "semantic_confidence": 0.42
    }

---

# 21. CONFIDENCE MODEL

DO NOT use one number for everything.

Every candidate should contain:

    address_confidence
    identity_confidence
    semantic_confidence
    prototype_confidence
    calling_convention_confidence
    return_type_confidence
    structure_confidence
    runtime_confidence
    overall_confidence

Example:

    {
      "identity_confidence": 0.97,
      "address_confidence": 0.99,
      "semantic_confidence": 0.94,
      "prototype_confidence": 0.91,
      "calling_convention_confidence": 0.98,
      "structure_confidence": 0.72,
      "runtime_confidence": 1.00,
      "overall_confidence": 0.93
    }

---

# 22. ACCEPTANCE THRESHOLDS

Historical/global minimum:

    Score >= 0.85

However, safety-critical properties should have stricter individual gates.

Recommended:

    FUNCTION IDENTITY
        >= 0.85
    
    ADDRESS
        >= 0.90
    
    SEMANTIC NAME
        >= 0.85
    
    CALLING CONVENTION
        >= 0.90
    
    PROTOTYPE
        >= 0.90
    
    STRUCTURE OFFSET FOR WRITE
        >= 0.95
    
    RUNTIME VERIFIED
        strongest available confirmation

An overall value >= 0.85 MUST NOT override a failed critical property.

Example:

    overall = 0.92

but:

    calling_convention = 0.61

Result:

    NOT SAFE FOR GENERATED WRAPPER

---

# 23. ACCEPTANCE STATES

Every researched native enters one of:

    VERIFIED
    
    VALIDATED_STATIC
    
    PROBABLE
    
    UNCERTAIN
    
    REJECTED

Definitions:

## VERIFIED

Strong static evidence + runtime evidence.

## VALIDATED_STATIC

Static evidence satisfies all required thresholds but runtime verification has
not yet been performed.

## PROBABLE

Strong function identity but incomplete prototype/semantic evidence.

## UNCERTAIN

Evidence insufficient or conflicting.

## REJECTED

Candidate comparison failed required thresholds.

---

# 24. MANDATORY 0.85 FAILURE RULE

If:

    identity score < 0.85

then:

    REJECT cross-version identity claim.

Record:

    rejected_natives.log

Example:

    [REJECTED]
    Source: Mesh_SkinBones
    Candidate: 0x004A19B0
    IdentityScore: 0.72
    Reason:
      CFG mismatch
      caller mismatch
      stack-frame mismatch

Never silently promote rejected matches.

---

# 25. RADARE2 / R2MCP VALIDATION

For every high-value candidate:

1. Analyze function in Ghidra.

2. Analyze independently in radare2.

3. Compare:
   
       function boundary
       basic blocks
       edges
       complexity
       stack behavior
       calls
       return behavior
       instruction patterns

4. Record disagreement.

Example:

    {
      "ghidra_blocks": 18,
      "r2_blocks": 18,
      "cfg_similarity": 0.96
    }

If major disagreement exists:

    DO NOT ACCEPT

Instead:

    re-run analysis
    inspect function boundary
    inspect tail calls
    inspect switch recovery
    inspect thunk status
    inspect overlapping code

---

# 26. SEMANTIC SUBSYSTEM CLUSTERING

Automatically cluster functions into likely engine systems.

Initial subsystems:

    AI
    Animation
    Camera
    Configuration
    ComputerMap
    Entity
    Human
    Input
    Map
    Mesh
    Mission
    Object
    Physics
    Player
    Renderer
    Sound
    Task
    Terrain
    Texture
    UI
    Vehicle
    Weapon

Signals:

    shared strings
    callgraph proximity
    shared globals
    namespace from PDB
    table membership
    structure usage
    naming patterns

Example:

    Unknown FUN_004A3320
    
    calls:
        Mesh_SkinBones
        Mesh_Draw
    
    globals:
        g_mesh_manager
    
    strings:
        "Mesh_*"

Result:

    Mesh subsystem confidence = 0.97

---

# 27. DISCOVERING NEW NATIVES

Known natives are starting anchors.

Example anchors:

    WorldToScreen
    DrawLine2D
    Mesh_SkinBones
    Binoculars_Draw
    BinocularDetectorPass
    ComputerMap routines
    GetHumanEntities

Discovery expands through:

    anchor
      ↓
    callers
      ↓
    callees
      ↓
    siblings
      ↓
    shared globals
      ↓
    shared structures
      ↓
    registration tables
      ↓
    previously undocumented native

This is how the system discovers functions not manually listed beforehand.

---

# 28. FRONTIER-BASED DISCOVERY

Maintain a frontier around verified functions.

Example:

                   VERIFIED
                Mesh_SkinBones
                 /     |     \
                /      |      \
               ▼       ▼       ▼
           unknown   known   unknown
            A                  B
            │                  │
            ▼                  ▼
         inspect            inspect

Each newly verified function expands the frontier.

This creates autonomous graph exploration.

---

# 29. NATIVE REGISTRATION TABLE DISCOVERY

Search for structures resembling:

    [name pointer]
    [function pointer]

or:

    [hash/id]
    [function pointer]

or:

    [name pointer]
    [metadata]
    [function pointer]

For each table:

1. Determine stride.
2. Validate repeated structure.
3. Resolve string pointers.
4. Resolve code pointers.
5. Verify function destinations.
6. Recover all entries.
7. Add functions to research queue.

This may discover large groups of engine natives automatically.

---

# 30. VTABLE DISCOVERY

Search `.rdata` for consecutive code pointers.

For each probable vtable:

    validate pointers → executable section
    
    find xrefs → constructor/object setup
    
    infer class/object
    
    enumerate virtual methods
    
    cluster methods
    
    compare against PDB class names

Potential result:

    Human
       +0x00 destructor
       +0x04 update
       +0x08 render
       +0x0C damage
       ...

Names remain provisional until evidence passes thresholds.

---

# 31. GLOBAL ANALYSIS

Track globals according to:

    address
    size
    read/write functions
    subsystem
    inferred type
    inferred semantics

Example:

    global_008F1234
        ↑ read by Player_Update
        ↑ read by Camera_Update
        ↑ written by Mission_Load

This relationship can reveal:

    active player pointer
    world pointer
    mission state
    camera state
    renderer globals

Do not assign names until evidence supports them.

---

# 32. CROSS-BUILD STRUCTURE TRANSFER

If structure layouts exist in a symbolized build:

    old build structure
           ↓
      access patterns
           ↓
     compare target
           ↓
    possible transferred
        structure layout

Validate each offset independently.

Do not assume all offsets remain unchanged between builds.

---

# 33. DECOMPILER NORMALIZATION

Before sending pseudocode to the LLM:

Remove unnecessary noise.

Normalize:

    FUN_00481234
    DAT_00812345
    local_1c
    local_18

where useful into stable internal IDs.

Preserve original addresses separately.

The objective is to reduce token usage while maintaining evidence.

---

# 34. LLM CONTEXT PACKETS

The AI should receive compact evidence packets rather than entire binaries.

Example:

    Candidate:
        0x004A18F0
    
    Function:
        size: 288
        blocks: 13
        complexity: 8
    
    Callers:
        Mesh_SkinBones
        Mesh_Draw
    
    Callees:
        memcpy
        FUN_004A1200
    
    Strings:
        none
    
    Globals:
        g_mesh_manager
        DAT_008E1340
    
    Candidate old-build match:
        Mesh_UpdateVertices
    
    Similarity:
        CFG: 0.93
        opcode: 0.88
        callees: 0.91
        constants: 0.96
    
    Ghidra prototype:
        void FUN_004A18F0(void*, void*)
    
    r2 stack:
        caller cleanup

The LLM then decides what evidence should be gathered next.

---

# 35. TOKEN/COST OPTIMIZATION

Most operations MUST NOT require LLM calls.

FREE deterministic operations:

    PE parsing
    hashing
    PDB import
    function enumeration
    CFG creation
    opcode normalization
    similarity scoring
    table scanning
    string extraction
    xref extraction
    callgraph generation
    build execution
    test execution

LLM should primarily handle:

    semantic interpretation
    ambiguous matches
    research planning
    conflicting evidence
    prototype reasoning
    structure reasoning

Model-routing strategy:

    deterministic analyzer
           ↓
    cheap reasoning model
           ↓
    difficult ambiguity?
        ├── NO → continue
        └── YES
               ↓
          stronger model
               ↓
          still ambiguous?
               ↓
          strongest model

Never use the most expensive model for every function.

---

# 36. AGENT STATE MACHINE

Suggested states:

    INITIALIZE
        ↓
    INGEST_BINARY
        ↓
    INGEST_PDB
        ↓
    STATIC_ANALYSIS
        ↓
    HARVEST
        ↓
    BUILD_KNOWLEDGE_GRAPH
        ↓
    POP_RESEARCH_QUEUE
        ↓
    GATHER_EVIDENCE
        ↓
    GENERATE_HYPOTHESIS
        ↓
    VALIDATE
        ↓
      ┌───────────────┐
      │               │
      ▼               ▼
    ACCEPT          NEED_MORE
      │               │
      │               └── enqueue evidence tasks
      │
      ▼
    GENERATE_OUTPUT
      ↓
    BUILD
      ↓
    TEST
      ↓
    RUNTIME VERIFY
      ↓
    UPDATE EVIDENCE
      ↓
    NEXT CANDIDATE

---

# 37. AGENT MEMORY

The autonomous agent must maintain durable project memory.

Store:

    discovered facts
    rejected hypotheses
    accepted hypotheses
    function mappings
    structure hypotheses
    unresolved questions
    prior tool outputs
    confidence changes
    runtime evidence

This prevents repeated research and hallucination drift.

---

# 38. EVIDENCE PROVENANCE

Every conclusion MUST indicate where it came from.

Possible sources:

    PDB
    GHIDRA
    R2
    STRING
    GLOBAL
    CALLGRAPH
    CFG
    CROSS_VERSION
    RUNTIME
    HUMAN_CONFIRMED

Example:

    {
      "claim": "0x0049F700 is Mesh_SkinBones",
    
      "evidence": [
        {
          "source": "PDB",
          "strength": 1.0
        },
        {
          "source": "GHIDRA",
          "strength": 0.94
        },
        {
          "source": "R2",
          "strength": 0.95
        }
      ]
    }

---

# 39. NATIVE DATABASE SCHEMA

Recommended representation:

    {
      "address": "0x0049F700",
      "rva": "0x0009F700",
      "build": "igi-retail-a1",
    
      "name": "Mesh_SkinBones",
      "subsystem": "Mesh",
    
      "signature": {
        "return_type": "void",
        "calling_convention": "__cdecl",
        "parameters": []
      },
    
      "confidence": {
        "address": 1.0,
        "identity": 0.99,
        "semantic": 0.99,
        "prototype": 0.92,
        "calling_convention": 0.97,
        "structure": 0.78,
        "runtime": 0.90,
        "overall": 0.94
      },
    
      "evidence": {
        "pdb": true,
        "ghidra": true,
        "r2": true,
        "cfg_similarity": 0.96,
        "runtime_verified": true
      },
    
      "callers": [],
      "callees": [],
    
      "status": "VERIFIED"
    }

---

# 40. IGINatives.json OUTPUT RULES

`IGINatives.json` should contain only natives meeting required acceptance
criteria.

Never place speculative natives into the production list.

Separate:

    IGINatives.json
        production-safe
    
    discovered_natives.json
        discoveries with evidence
    
    uncertain_natives.json
        unresolved candidates
    
    rejected_natives.log
        failed candidates

---

# 41. NATIVES.HPP GENERATION

Generate C++ definitions only from sufficiently verified records.

Example:

    namespace MESH
    {
        constexpr uintptr_t SKIN_BONES = 0x0049F700;
    }

Generated wrappers should include evidence metadata in comments where useful.

Example:

    // VERIFIED
    // Identity: 0.99
    // Prototype: 0.94
    // Calling convention: 0.98
    // Sources: PDB, Ghidra, r2, runtime

Do not generate callable wrappers if calling convention/prototype confidence
does not meet required thresholds.

---

# 42. OPENIGI PORT GENERATION

Where an engine behavior is suitable for OpenIGI:

    verified native semantics
           ↓
    understand algorithm/data
           ↓
    reproduce clean-room behavior
           ↓
    OpenIGI implementation
           ↓
    tests

Do not blindly port decompiler output.

The objective is behavior reproduction, not assembly translation.

---

# 43. BUILD VALIDATION

Native project build:

    Debug Win32

Required:

    0 build errors

Warnings must be reported, not hidden.

For OpenIGI:

    dotnet test OpenIGI.slnx

A stalled or interrupted test run must never be reported as passing.

---

# 44. RUNTIME VERIFICATION

Runtime verification is optional per candidate but strongly preferred for
high-impact functionality.

Possible verification methods:

    safe logging hook
    read-only probe
    argument logging
    return-value logging
    limited detour
    breakpoint/tracing
    controlled DLL injection

Runtime verification must:

1. Avoid destructive writes unless explicitly required.
2. Validate process responsiveness.
3. Detect crashes.
4. Capture relevant logs.
5. Record tested binary hash.
6. Record native address.
7. Record invocation evidence.

---

# 45. RUNTIME SAFETY LEVELS

Level 0:

    static analysis only

Level 1:

    read-only runtime observation

Level 2:

    function-entry logging

Level 3:

    argument/result inspection

Level 4:

    controlled function invocation

Level 5:

    state modification

Autonomous RE should prefer the lowest sufficient safety level.

---

# 46. CRASH FEEDBACK

If runtime testing causes a crash:

Capture:

    exception code
    fault address
    module offset
    registers
    stack
    tested function
    arguments
    recent hooks
    Windows Event Log entry

Then:

    decrease relevant confidence
    mark runtime_failed
    enqueue investigation
    disable unsafe wrapper until resolved

Never continue treating a crashing native as verified.

---

# 47. REJECTION LOG

Example:

    [2026-08-19T03:00:00]
    Candidate: 0x004A20F0
    Proposed Name: Mesh_UpdateVertices
    
    Identity:
        0.79
    
    Prototype:
        0.61
    
    CFG:
        0.83
    
    Calling convention:
        unresolved
    
    STATUS:
        REJECTED
    
    Reason:
        Identity score below 0.85.
        Calling convention insufficiently supported.

---

# 48. AUTONOMOUS FEATURE-DRIVEN RESEARCH

The system should support goals.

Example:

    Goal:
        "Implement OpenIGI-style enhanced computer map in igi.exe DLL"

Agent converts goal into required knowledge:

    ComputerMap state
    player coordinates
    entity coordinates
    map state
    map zoom
    map projection
    HUD render callback
    native line drawing
    native text drawing

Then research queue prioritizes relevant subsystem functions.

Likewise:

    Goal:
        "Render body silhouette in binoculars"

Research priorities become:

    Mesh_SkinBones
    animated mesh
    skeleton
    bone matrices
    vertex transforms
    render callback
    binocular camera
    depth state

This keeps autonomous RE aligned with engineering requirements.

---

# 49. EXAMPLE — COMPUTER MAP RESEARCH GRAPH

    ComputerMap
       │
       ├── task/update routine
       │
       ├── draw routine
       │
       ├── player map state
       │
       ├── map-open flag
       │
       ├── zoom state
       │
       ├── map projection
       │
       ├── map resources
       │
       ├── entity markers
       │
       └── HUD calls

Each discovered dependency enters the research queue automatically.

---

# 50. EXAMPLE — MESH/BINOCULAR RESEARCH GRAPH

    BinocularDetector
            │
            ▼
     target enumeration
            │
            ▼
        Human object
            │
            ▼
      live mesh pointer
            │
            ▼
     Mesh_SkinBones
          /     \
         ▼       ▼
      skeleton   vertices
         │          │
         ▼          ▼
      BonePose   transforms
          \        /
           ▼      ▼
          skinned mesh
               │
               ▼
        binocular camera
               │
               ▼
          projection
               │
               ▼
        silhouette edges
               │
               ▼
          DX7 rendering

---

# 51. HUMAN INTERVENTION POLICY

Normal operation should require no manual function-by-function interaction.

The agent should autonomously:

    inspect
    compare
    decompile
    disassemble
    traverse
    classify
    test hypotheses
    reject
    retry
    document

Human intervention is requested only when:

1. Required binary/file unavailable.
2. Tool authentication/setup required.
3. Runtime action has unacceptable risk.
4. Evidence remains fundamentally ambiguous.
5. Legal/licensing constraint requires decision.
6. The agent encounters an external blocker.

"Function difficult to understand" is NOT itself a reason to stop.

The agent should continue gathering evidence.

---

# 52. NO-HALLUCINATION RULE

Forbidden:

    "This looks like Player_Update, therefore I'll call it Player_Update."

Required:

    Candidate semantic name: Player_Update
    
    Supporting evidence:
        4 Player_ strings
        called by verified player task
        writes known Player structure
        cross-build similarity 0.92
        matching PDB symbol exists
    
    semantic confidence = 0.94

Until threshold:

    FUN_004A1230

is preferable.

---

# 53. NO ADDRESS GUESSING

Never extrapolate addresses.

Forbidden:

    Old function was 0x0049F700
    binary shifted by 0x1000
    therefore new function = 0x004A0700

Address deltas can be used only as weak candidate-generation hints.

Final identity requires actual code evidence.

---

# 54. NO SIGNATURE INVENTION

Forbidden:

    void Mesh_SkinBones(Mesh*, Skeleton*)

simply because parameter names seem logical.

Instead:

    void FUN_x(void*, void*)

until:

    parameter types are evidenced.

Semantic aliases may be separately recorded as hypotheses.

---

# 55. DETERMINISTIC ANALYSIS FIRST

Before invoking an LLM:

    harvest strings
    extract xrefs
    generate CFG
    extract callgraph
    calculate similarities
    classify imports
    detect tables
    identify PDB symbols

Then ask the LLM only what cannot be determined mechanically.

This is essential for:

    accuracy
    repeatability
    lower cost
    lower hallucination
    autonomous scaling

---

# 56. PARALLELISM

Independent candidates may be researched concurrently.

Possible workers:

    Worker A → Mesh subsystem
    Worker B → ComputerMap subsystem
    Worker C → AI subsystem
    Worker D → Weapon subsystem

Workers share:

    knowledge graph
    accepted natives
    structure evidence
    global evidence

Workers MUST NOT independently overwrite canonical conclusions.

All updates go through the evidence/acceptance gate.

---

# 57. CONFLICT RESOLUTION

Example:

    Ghidra:
        __cdecl
    
    r2:
        probable __stdcall

Agent response:

    DO NOT CHOOSE RANDOMLY.

Instead:

    inspect 5+ callers
    inspect ret instruction
    inspect ESP adjustments
    inspect ECX object usage
    inspect thunk wrappers

Then update confidence.

If unresolved:

    calling_convention = UNKNOWN

and do not generate unsafe wrapper.

---

# 58. RESEARCH DEPTH LIMITS

To prevent infinite traversal:

Each queue item tracks:

    depth
    attempt count
    last evidence gain
    relevance score

If repeated attempts yield no new evidence:

    status = DEFERRED

The candidate may be revisited when related knowledge improves.

---

# 59. EVIDENCE GAIN METRIC

Each research iteration should estimate whether it learned something.

Example:

    before:
        identity = 0.62
    
    after:
        identity = 0.83

EvidenceGain:

    +0.21

Low evidence gain after several attempts means deprioritize.

---

# 60. AUTONOMOUS STOP CONDITIONS

The system may stop when:

1. Research queue empty.
2. Requested feature dependencies all VERIFIED.
3. Remaining candidates below relevance threshold.
4. Remaining candidates are all DEFERRED.
5. Toolchain unavailable.
6. Explicit budget cap reached.

At completion produce:

    verified count
    validated-static count
    probable count
    uncertain count
    rejected count
    runtime-tested count
    new structures
    new globals
    discovered subsystems
    unresolved blockers

---

# 61. CHECKPOINTING

Persist after every meaningful action.

Example:

    research_queue.json
    knowledge_graph.json
    functions.json
    evidence/<address>.json

Never rely exclusively on LLM conversation context.

The project itself is the memory.

---

# 62. REPRODUCIBILITY

Every discovery report should record:

    binary hash
    Ghidra version
    radare2 version
    script version
    model
    analysis timestamp
    evidence inputs
    confidence calculation version

This lets future runs reproduce or challenge conclusions.

---

# 63. MODEL-INDEPENDENT DESIGN

The system MUST NOT depend on one AI provider.

Interface concept:

    class ReasoningProvider:
        analyze_candidate(...)
        rank_hypotheses(...)
        resolve_conflict(...)
        plan_research(...)

Possible implementations:

    OpenAIProvider
    AnthropicProvider
    LocalModelProvider

This lets Codex/Claude/models be replaced without rebuilding the RE engine.

---

# 64. MODEL ROUTING

Example:

    Tier 0:
        deterministic tools
    
    Tier 1:
        inexpensive reasoning model
    
    Tier 2:
        stronger engineering model
    
    Tier 3:
        strongest model for very ambiguous cases

Routing condition might consider:

    importance
    ambiguity
    evidence conflict
    retry count
    potential crash risk

---

# 65. BUDGET CONTROL

Configuration:

    {
      "daily_api_budget_usd": 5.00,
      "max_candidate_cost_usd": 0.25,
      "expensive_model_threshold": 0.80
    }

A candidate must not consume unlimited model budget.

Cache repetitive context:

    binary metadata
    subsystem summaries
    validated structures
    known native catalogue

---

# 66. TEST GENERATION

For accepted engine behavior, automatically generate tests where practical.

Examples:

    coordinate transforms
    world-to-screen
    map projection
    animation math
    file-format parsing
    structure serializers
    enum mappings

Tests serve as additional evidence.

---

# 67. GENERATED REPORT

For each verified native produce a report:

    Name:
        Mesh_SkinBones
    
    Address:
        0x0049F700
    
    Build:
        ...
    
    PDB Evidence:
        ...
    
    Ghidra Evidence:
        ...
    
    r2 Evidence:
        ...
    
    Callers:
        ...
    
    Callees:
        ...
    
    Prototype:
        ...
    
    Calling Convention:
        ...
    
    Structure Access:
        ...
    
    Runtime Test:
        ...
    
    Confidence:
        ...
    
    Status:
        VERIFIED

---

# 68. FINAL ACCEPTANCE CHECKLIST

Before adding a native to production:

- [ ] Binary build identified.
- [ ] Function boundary validated.
- [ ] Function identity >= 0.85.
- [ ] Address confidence sufficient.
- [ ] Ghidra analysis stored.
- [ ] radare2 validation stored.
- [ ] Callers inspected.
- [ ] Callees inspected.
- [ ] Calling convention >= required threshold.
- [ ] Prototype >= required threshold.
- [ ] Referenced structure offsets supported.
- [ ] No conflicting unresolved evidence.
- [ ] Provenance stored.
- [ ] `IGINatives.json` updated.
- [ ] `Natives.hpp` generation safe.
- [ ] Native project builds.
- [ ] Relevant OpenIGI tests pass.
- [ ] Runtime verification performed when required.
- [ ] Runtime failures absent or explained.

---

# 69. CORE AUTONOMOUS ALGORITHM

Pseudo-code:

    initialize_system()
    
    binary = identify_binary()
    pdb = locate_pdb()
    
    ghidra_project = analyze_with_ghidra(binary)
    
    if pdb:
        import_pdb(ghidra_project, pdb)
    
    run_accuracy_prepass()
    
    functions = enumerate_functions()
    strings = harvest_strings()
    tables = harvest_tables()
    globals = harvest_globals()
    vtables = discover_vtables()
    
    fingerprints = generate_fingerprints(functions)
    
    graph = build_knowledge_graph(
        functions,
        strings,
        tables,
        globals,
        vtables
    )
    
    seed_research_queue(
        pdb_symbols,
        known_natives,
        feature_goals
    )
    
    while queue_has_items():
    
        candidate = queue_pop_highest_priority()
    
        evidence = gather_static_evidence(candidate)
    
        evidence += gather_r2_evidence(candidate)
    
        matches = find_cross_version_matches(candidate)
    
        hypotheses = reason_about_candidate(
            candidate,
            evidence,
            matches
        )
    
        for hypothesis in hypotheses:
    
            missing = determine_missing_evidence(hypothesis)
    
            if missing:
                evidence += collect_missing_evidence(missing)
    
            scores = calculate_confidence(
                hypothesis,
                evidence
            )
    
            if passes_acceptance_gate(scores):
    
                accept_native(
                    candidate,
                    hypothesis,
                    scores,
                    evidence
                )
    
                expand_research_frontier(candidate)
    
                break
    
        else:
    
            if further_research_possible(candidate):
                requeue(candidate)
            else:
                reject_or_defer(candidate)
    
        save_checkpoint()
    
    generate_iginatives_json()
    generate_natives_hpp()
    generate_openigi_ports()
    
    build_native_project()
    run_openigi_tests()
    
    runtime_candidates = select_runtime_verification_candidates()
    
    for candidate in runtime_candidates:
    
        result = runtime_verify(candidate)
    
        update_candidate_with_runtime_evidence(
            candidate,
            result
        )
    
    regenerate_outputs()
    
    generate_final_report()

---

# 70. DESIRED END STATE

The final system should operate conceptually like:

    "Research IGI computer-map internals."
    
                         ↓
    
                    AI Planner
    
                         ↓
    
       automatically finds known map anchors
    
                         ↓
    
      crawls callers/callees/xrefs/tables/globals
    
                         ↓
    
          discovers unknown related functions
    
                         ↓
    
          compares with PDB/symbolized build
    
                         ↓
    
       independently validates using radare2
    
                         ↓
    
         reconstructs signatures/layouts
    
                         ↓
    
           rejects uncertain findings
    
                         ↓
    
           runtime-validates safe targets
    
                         ↓
    
              updates native database
    
                         ↓
    
              generates C++ wrappers
    
                         ↓
    
                 runs builds/tests
    
                         ↓
    
              produces evidence report
    
                         ↓
    
                        DONE

No human needs to manually ask:

    "decompile 0x004A1230"

then:

    "show callers"

then:

    "show callees"

then:

    "compare with Mesh function"

The autonomous agent performs that investigative loop itself.

---

# 71. ARCHITECTURAL SUMMARY

The complete system is:

    ┌──────────────────────────────────────────────────────┐
    │                AUTONOMOUS AI RE AGENT               │
    │                  Codex / Claude                     │
    └───────────────────────┬──────────────────────────────┘
                            │
                            ▼
    ┌──────────────────────────────────────────────────────┐
    │                  RE ORCHESTRATOR                    │
    │                                                      │
    │ research queue                                       │
    │ state machine                                        │
    │ evidence collection                                  │
    │ hypothesis generation                                │
    │ confidence gates                                     │
    │ checkpointing                                        │
    └──────────┬──────────────────┬────────────────┬────────┘
               │                  │                │
               ▼                  ▼                ▼
        ┌────────────┐     ┌─────────────┐   ┌────────────┐
        │ Ghidra     │     │ Ghidra MCP  │   │ r2 / r2mcp │
        │ Headless   │     │             │   │            │
        └─────┬──────┘     └──────┬──────┘   └─────┬──────┘
              │                   │                │
              └───────────────────┼────────────────┘
                                  │
                                  ▼
                       ┌────────────────────┐
                       │ EVIDENCE DATABASE  │
                       └─────────┬──────────┘
                                 │
                                 ▼
                       ┌────────────────────┐
                       │ KNOWLEDGE GRAPH    │
                       └─────────┬──────────┘
                                 │
                                 ▼
                       ┌────────────────────┐
                       │ CONFIDENCE ENGINE  │
                       └─────────┬──────────┘
                                 │
                   ┌─────────────┴──────────────┐
                   │                            │
                   ▼                            ▼
                ACCEPT                        REJECT
                   │                            │
                   ▼                            ▼
         ┌────────────────────┐        rejected_natives.log
         │ IGINatives.json    │
         └─────────┬──────────┘
                   │
          ┌────────┴─────────┐
          ▼                  ▼
     Natives.hpp        OpenIGI ports
          │                  │
          └────────┬─────────┘
                   ▼
             Build + Tests
                   │
                   ▼
          Runtime Verification
                   │
                   ▼
            Evidence Feedback
                   │
                   └────────────► Knowledge Graph

---

# 72. NON-NEGOTIABLE RULES

1. Never invent a native.

2. Never invent an address.

3. Never invent a function signature.

4. Never infer a calling convention solely from a name.

5. Never assume PDB symbols map directly to another binary.

6. Never accept cross-version identity below 0.85.

7. Never generate an unsafe callable wrapper if prototype or calling
   convention confidence is insufficient.

8. Never call a failed/incomplete test run successful.

9. Never discard contradictory evidence.

10. Preserve provenance for every conclusion.

11. Prefer UNKNOWN over WRONG.

12. Prefer deterministic analysis over LLM reasoning whenever possible.

13. Use the LLM as the autonomous researcher/orchestrator, not as the
    disassembler.

14. Use Ghidra as the primary semantic/static-analysis engine.

15. Use radare2/r2mcp as an independent validation source.

16. Use the PDB as high-value ground truth where applicable.

17. Use runtime verification to convert strong static hypotheses into the
    highest-confidence engine knowledge.

18. Store project knowledge outside the model context.

19. Make every analysis resumable.

20. The final product is not merely a collection of addresses.
    
    The final product is:
    
        an evidence-backed,
        continuously expanding,
        autonomous model
        of the Project IGI engine.

---

# 73. FINAL PIPELINE

    igi.exe
       +
    igi2.pdb
       │
       ▼
    Ghidra Headless Analysis
       │
       ▼
    PDB Universal Analyzer
       │
       ▼
    Accuracy Pre-Pass
       │
       ▼
    Function / String / Global / Table / VTable Harvest
       │
       ▼
    Function Fingerprints
       │
       ▼
    Knowledge Graph
       │
       ▼
    Seed Known Natives
       │
       ▼
    Autonomous Research Queue
       │
       ▼
    AI Hypothesis + Planning
       │
       ├──── Ghidra MCP
       │
       ├──── Ghidra Decompiler
       │
       ├──── xrefs
       │
       ├──── callers/callees
       │
       ├──── strings/globals
       │
       └──── structure analysis
       │
       ▼
    radare2 / r2mcp Independent Validation
       │
       ▼
    Cross-Version Matching
       │
       ▼
    Multi-Dimensional Confidence
       │
       ├──── ID >= 0.85
       ├──── Convention >= 0.90
       ├──── Prototype >= 0.90
       └──── Critical offsets >= 0.95
       │
       ▼
    ACCEPT / DEFER / REJECT
       │
       ▼
    IGINatives.json
       │
       ├──────────────► Natives.hpp
       │
       └──────────────► OpenIGI ports
                            │
                            ▼
                       Build + Tests
                            │
                            ▼
                    Runtime Verification
                            │
                            ▼
                     Evidence Feedback
                            │
                            ▼
                     Knowledge Graph
                            │
                            ▼
                      NEXT DISCOVERY

# END OF RE.md
