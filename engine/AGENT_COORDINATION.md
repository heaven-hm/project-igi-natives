# Active agent coordination

Updated 2026-10-16. The owner explicitly requested coordination between existing agents. No new agent was spawned.

| Lane | Working tree | Branch | Ownership |
| --- | --- | --- | --- |
| Codex native gameplay | `/Users/haseeb-mir/Documents/Code/project-igi-natives` | `feature/native-gameplay-mvp` | Native engine attachment loading, portal collision, enemy firing presentation, hand/body animation, graphics setting diagnostics, associated probes and fidelity documentation |
| OpenCode original-behavior research | `/Users/haseeb-mir/Documents/Code/project-open-igi-parity` | `feature/gameplay-parity` | Its separate `project-open-igi` engine and tests; next task: original retail AI/task transitions and QVM door semantics with evidence |

OpenCode session: `ses_ebbf9d798ffeEGwxCaHS30sOqT`. Coordination request and explicit acknowledgment were exchanged through the installed OpenCode CLI. The other agent confirmed it will not edit/reset this tree or overwrite the shared Downloads app. This agent will not edit/reset the parity worktree. These are different repositories and engine architectures; their changes must not be blindly merged or cherry-picked.

## Delivery boundary

The last installed `/Users/haseeb-mir/Downloads/IGI/igi.app` came from this tree's `/tmp/igi-native-mvp-release` build. The other engine builds to `/Users/haseeb-mir/Documents/Code/project-open-igi-parity/build/engine/igi.app`. The owner subsequently explicitly requested rebuilding and installing this tree's current app, and then pushing this branch. That installation has completed. The parity agent must continue coordinating before replacing the shared app; this authorization does not merge the two repositories.

## Findings exchanged

- Original TAMC portal values other than `0xffff` mark non-solid openings. This tree preserves those flags and passes a real Level 2 capsule crossing test. Full dynamic door behavior remains separate work.
- `TASKTYPE_GUNFLAME` attachments must be visible only during firing. Their original magic-object definitions are retained as classification evidence.
- Enemy shot/damage logs existed even when only idle/walk animation was visible. Original soldier state-table entry 6 points to clip 56; the current animation adapter uses that clip for attacking guards. This is not a full retail combat-state translation.
- Both implementations load controls from the original config. Both agents agree hook-installation records, screenshots, and functional test counts are not original-versus-port behavioral verification.
- REA's failed CrossOver capture and the host Frida architecture limitation were disclosed; no valid original runtime capture was claimed.

The other agent reported 62 passing tests and local building-entry/navigation work. These are that agent's results, not independently reproduced or accepted as retail parity by this tree.

## Follow-up exchange

The original 63 animation and 46 first-call movement/ground observations were shared with the other agent. It acknowledged the limits and accepted the distinction between native simulation tests and retail-captured ticks. It agreed to leave portal/flame/firing/movement-collision work in this lane. Its focused next task is checking its patrol-opcode interpreter against original mission QVM; its files are `engine/src/ai_system.cpp` and its own evidence/test notes in the parity worktree. It reported 68 passing functional tests; those were not independently rerun here. The owner subsequently requested installation and publication of this tree’s current working checkpoint; the separate parity implementation remains isolated.
