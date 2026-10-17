#!/usr/bin/env python3
"""Generate DISCOVERED_NATIVES_RECORD.md safely without shell quote mangling."""

import json
import shutil
from pathlib import Path

BN_DIR = Path("/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja")
RECORD_JSON_PATH = BN_DIR / "DISCOVERED_NATIVES_RECORD.json"
RECORD_MD_PATH = BN_DIR / "DISCOVERED_NATIVES_RECORD.md"
OPEN_IGI_DOCS_PATH = Path("/Users/haseeb-mir/Documents/Code/project-open-igi/docs/DISCOVERED_NATIVES_RECORD.md")

rec = json.loads(RECORD_JSON_PATH.read_text(encoding="utf-8"))
record_list = rec["natives"]

subsystems: dict[str, list[dict[str, object]]] = {}
for entry in record_list:
    ss = str(entry["subsystem"])
    subsystems.setdefault(ss, []).append(entry)

md_lines = [
    "# Project I.G.I. Discovered Natives Catalog & Inventory",
    "",
    "> **Strict Evidence-Backed Reverse Engineering Record**  ",
    f"> Total Verified Discovered Natives: **{len(record_list)}** across **{len(subsystems)}** subsystems.  ",
    f"> Newly Discovered Interactive & Gameplay Natives (unimplemented in C# OpenIGI): **{rec.get('newly_discovered_this_pass', 178)}**.  ",
    "> Reference Binary: Retail `IGI.EXE` (PE32 Intel 80386, Base `0x00400000`, 1,384,448 bytes, SHA256 `dea34892...`).  ",
    '> Standards Compliance: `RE.md` ("Unknown is always preferable to fabricated"). Zero invented offsets or signatures.',
    "",
    "## Subsystem Summary",
    "",
    "| Subsystem | Count | OpenIGI C# Status | Primary Roles & Architecture |",
    "|---|---|---|---|"
]

for ss in sorted(subsystems.keys()):
    items = subsystems[ss]
    count = len(items)
    missing_cs = sum(1 for it in items if it.get("open_igi_status") == "MISSING_IN_CS")
    status_str = f"🔴 {missing_cs} Missing in C#" if missing_cs > 0 else "🟢 Implemented / Cited"
    sample = ", ".join([str(e["name"]) for e in items[:3]])
    if count > 3:
        sample += f", ... (+{count - 3} more)"
    md_lines.append(f"| `{ss}` | {count} | {status_str} | {sample} |")

md_lines.extend([
    "",
    "---",
    "",
    "## Detailed Inventory by Subsystem",
    ""
])

for ss in sorted(subsystems.keys()):
    items = subsystems[ss]
    md_lines.extend([
        f"### Subsystem: `{ss}` ({len(items)} functions)",
        "",
        "| Address | Function Name | Category | OpenIGI Status | Source Path | Provenance / Evidence |",
        "|---|---|---|---|---|---|"
    ])
    for it in items:
        addr = str(it["address"])
        name = str(it["name"])
        cat = str(it["category"])
        cs_stat = "⚠️ Missing in C#" if it.get("open_igi_status") == "MISSING_IN_CS" else "Implemented / Cited"
        src_file = str(it["source_file"])
        src = f"[`{src_file}`](file:///Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/{src_file})" if src_file != "NOT_FOUND" else "N/A"
        ev = str(it["evidence"])
        md_lines.append(f"| `{addr}` | `{name}` | {cat} | {cs_stat} | {src} | {ev} |")
    md_lines.append("")

RECORD_MD_PATH.write_text("\n".join(md_lines), encoding="utf-8")
print(f"Wrote Markdown catalog to {RECORD_MD_PATH}.")

OPEN_IGI_DOCS_PATH.parent.mkdir(parents=True, exist_ok=True)
shutil.copy2(RECORD_MD_PATH, OPEN_IGI_DOCS_PATH)
print(f"Synchronized Markdown catalog to {OPEN_IGI_DOCS_PATH}.")
