# Experimental gameplay status

Updated 2026-10-16. Actual source tree: `/Users/haseeb-mir/Documents/Code/project-igi-natives`, branch `feature/native-gameplay-mvp`. The other active agent uses a separate repository/worktree; see [AGENT_COORDINATION.md](AGENT_COORDINATION.md).

## Acceptance status

Original gameplay equivalence is **NOT VERIFIED**. Sound, menus, exact text drawing, and cutscenes are deferred by the owner. Other gameplay requirements remain active. Functional regressions passing does not establish matching original behavior.

## Implemented and checked

- Original converter parsers: 52 files copied unchanged, with the existing SHA manifest and notices. No proprietary assets are committed or embedded.
- Native macOS C++20 loop, original mission selection, config.qvm input profiles, timestamped logs, replay, state trace, screenshot, and bounded execution.
- Original terrain/models/textures, original movement parameters/root tracks, capsule world collision, jump/crouch, several original weapons, shared ammunition, pickups, simplified projectiles/health/combat.
- Original navigation graphs and authored patrol commands; basic perception and combat. AI scheduling and combat policy remain provisional.
- Recursive visual MEF ATTA transforms, a 32-level/cycle guard, invisible death-zone suppression, and firing-only GUNFLAME classification from original magicobj.qvm.
- Original body and first-person hand rigs, hierarchical skinning and quaternion/tangent sampling, script-selected idle/move/fire/reload view clips, bone attachments. Exact animation transitions, aiming, hit/death sequences and weapon-part motion remain incomplete.
- Cinematic branches are suppressed during gameplay-only startup. Level 2 Jones actor 333 is inactive. This suppression is not a complete original conditional interpreter or intro/outro lifecycle.

## Latest bug corrections

1. Building openings: preserve TAMC portal metadata and skip non-solid portals for capsule movement and generic sight/projectile casts. The movement adapter now uses original collision mesh level 1, keeping sight/projectile geometry separate at level 0. A stronger integration replay walks through an original Level 2 opening in both directions for 15 simulation ticks and stays grounded; it uses the full translated collision scene with combat isolated. A bare capsule-plane crossing was insufficient and has been replaced. This does not verify every building, dynamic doors, the full native query dispatch, ladders, or elevators.
2. Muzzle effects: gun-flame attachments are hidden while idle, shown during a shot, then hidden again. They contribute no solid collision. Synthetic rendered checks and original AK47 attachment classification pass.
3. Enemy firing: shots and damage already occurred, but only idle/walk poses were displayed. Firing events now have counters, debug logs, muzzle visibility and soldier firing pose 56 from the original state table. Clear-sight combat holds position rather than applying the previous chase movement above 35 metres. Full original tactical/burst behavior remains unverified.
4. Graphics controls: accept both `--graphics high` and `--gfx high` after macOS `open --args`. Log actual terrain detail, triangle count and viewport. High/low original terrain density differs in regression tests. Retail lightmaps, material blending, sky, shadows and lighting remain incomplete; this setting does not fix all visual differences.

## Measured original Level 2

| Item | Measurement |
| --- | ---: |
| Soldier declarations / active gameplay guards | 25 / 22 |
| Navigation graphs / nodes / patrol paths | 14 / 465 / 22 |
| Initial supported weapons | 3 |
| Body rig bones / clips | 33 / 95 |
| First-person hand rig bones / clips | 56 / 78 |
| Visual recursive ATTA instances / maximum depth | 98 / 2 |
| High-detail terrain triangles | 351,509 |
| Total static render triangles in current probe | 375,034 |
| Non-solid portal faces / grounded traversal directions checked | 148 / 2 |
| Guards moving more than 0.5 metres in 300 ticks | 6 |
| Enemy shots in that 300-tick scenario | 21 |
| Ending player health in that scenario | 2.85 / 3 |

The count and health results describe this deterministic prototype scenario, not an original-game trace. No passive damage occurs in a 600-tick enemy-free regression. Actual enemy fire can still reduce health.

## Current verification

- Clean committed-source archive and working-tree Release functional suite: **16/16 passed** after portal, muzzle, firing-presentation and graphics-option changes.
- AddressSanitizer + UndefinedBehaviorSanitizer: **10/10 MVP probes passed**, including original Levels 1 and 2. Leak detection disabled; this is not a leak audit.
- Clang static analyzer: **13 authored translation units checked**, no diagnostics reported.
- Focused doorway, idle/fire/flame expiry and clear-line guard tests failed before their fixes and passed afterward.
- Original executable runtime capture: eight IGIProbe hooks armed with no SKIP records; 63 animation-state and 46 first-call movement/ground observations recorded. A separate controlled-input attempt armed nine hooks and logged ten accepted input edges, but yielded only one player-update and one player-integrator snapshot. No controlled trajectory, combat event, phase alignment, or matching port trace was established. Details and limitations are in [VERIFICATION.md](VERIFICATION.md).
- Required retail CTest gate: **FAILED**, because original/port matching capture evidence is missing. Full CTest is not green; functional-only `-LE retail` deliberately excludes this gate.
- Strict signature verification passed for the clean installed bundle and the isolated latest candidate. The corrected candidate completed a 300-tick headless run and a 60-frame direct-executable GUI run (90 simulation ticks) cleanly. LaunchServices startup of the newly signed candidate stalled in an OS file-open request; it was sampled and cleaned up, not counted as a passing launch. macOS TCC logged an access request for that candidate. The direct launch succeeded without changing OS permissions.

Earlier Level 1 documentation used actor **3031** as a target in a 21-shot kill. That actor is cinematic. The earlier result is invalid as evidence of an ordinary gameplay encounter; the current integration test requires 3031 to remain disabled and selects only active gameplay guards.

## Delivery and remaining work

At the owner's request, source revision `3b64826` was rebuilt without source changes and installed at `/Users/haseeb-mir/Downloads/IGI/igi.app`. Staging directory: `/tmp/igi-current-delivery/igi.app`. The installed executable SHA-256 is `030e921990c3b65bf43822831fae290e5e10c4c17407ac54382a5bccd79d03c4`; strict bundle signature verification passed. The previous app was preserved as `igi-backup-20261016-163748-935908.app` beside it. This is a working experimental gameplay checkpoint; exact retail parity and stable-release acceptance remain open.

Highest-priority gaps: original runtime/memory capture; full collision/query semantics and building/door coverage; correct AI task/state/burst execution; weapon recoil/spread/ballistics; full skeletal transitions and hit/death animation; general QVM execution and mission objectives; original lighting/materials and rendering. Windows/Linux remain untested targets. See [MVP_PLAN.md](MVP_PLAN.md) and [FIDELITY_REQUIREMENTS.md](FIDELITY_REQUIREMENTS.md).
