#!/usr/bin/env python3
"""Regenerate synchronized IGI native assets from the root JSON catalog.

The root IGI-Natives.json is authoritative. This generator updates the export
JSON/MAP/CSV/IDC/Ghidra importer, merges new evidence, emits a CodeView PDB
using clang/lld on non-Windows hosts, and writes one readable Markdown record
per native and per recovered structure.
"""

from __future__ import annotations

import argparse
import csv
import json
import re
import shutil
import subprocess
import tempfile
from collections import Counter
from pathlib import Path


IMAGE_BASE = 0x00400000
TEXT_RVA = 0x1000
KNOWN_TEXT_LENGTH = 0x131510


def dump_json(path: Path, value: object) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")


def md_cell(value: object) -> str:
    return str(value).replace("|", "\\|").replace("\n", " ")


def load_inputs(root: Path) -> tuple[dict, dict, dict, dict]:
    catalog = json.loads((root / "IGI-Natives.json").read_text(encoding="utf-8"))
    evidence_path = root / "IGI1_Native_Exports" / "IGI1-Native-Name-Evidence.json"
    evidence = json.loads(evidence_path.read_text(encoding="utf-8"))
    cfg_path = root / "verification" / "natives_discovery_2026-08-26.json"
    cfg = json.loads(cfg_path.read_text(encoding="utf-8")) if cfg_path.exists() else {"accepted": []}
    structures = json.loads((root / "verification" / "structure_catalog.json").read_text(encoding="utf-8"))
    return catalog, evidence, cfg, structures


def merge_evidence(root: Path, catalog: dict, evidence: dict, cfg: dict) -> dict:
    by_hash = {item["hash"].upper(): item for item in evidence.get("Natives", [])}
    cfg_by_hash = {item["address"].replace("0x", "").upper(): item for item in cfg.get("accepted", [])}
    for wrapper in catalog["Natives"]:
        native = wrapper["Native"]
        key = native["hash"].upper()
        if key not in by_hash and key in cfg_by_hash:
            item = cfg_by_hash[key]
            by_hash[key] = {
                "hash": key,
                "address": native["address"],
                "catalogName": native["name"],
                "canonicalName": native["name"],
                "source": "parameter-context-inference",
                "retailName": None,
                "retailEvidence": [],
                "analysisEvidence": [
                    "Ghidra function boundary and CFG",
                    "r2 function boundary, cdecl signature, and CFG",
                    "Independent semantic/decompiler review of the retail IGI.EXE body"
                ],
                "cfg": item,
                "note": native["note"]
            }
    evidence["Natives"] = [by_hash[native["Native"]["hash"].upper()] for native in catalog["Natives"]]
    evidence["counts"] = dict(sorted(Counter(item.get("source", "unknown") for item in evidence["Natives"]).items()))
    suffix = "New behavior-derived entries require independent Ghidra and r2 CFG agreement."
    policy = evidence.get("policy", "").rstrip()
    if suffix not in policy:
        policy = f"{policy} {suffix}".strip()
    evidence["policy"] = policy
    dump_json(root / "IGI1_Native_Exports" / "IGI1-Native-Name-Evidence.json", evidence)
    return evidence


def write_csv(root: Path, entries: list[dict]) -> None:
    path = root / "exports" / "igi1_natives.csv"
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", encoding="utf-8", newline="") as handle:
        writer = csv.writer(handle, quoting=csv.QUOTE_ALL, lineterminator="\n")
        writer.writerow(["hash", "name", "signature", "note"])
        for entry in entries:
            writer.writerow([entry["hash"], entry["name"], entry["signature"], entry["note"]])


def write_map(root: Path, entries: list[dict]) -> None:
    sorted_entries = sorted(entries, key=lambda item: (item["address"], item["name"]))
    max_address = max(entry["address"] for entry in sorted_entries)
    text_length = max(KNOWN_TEXT_LENGTH, max_address - IMAGE_BASE + 0x100)
    lines = [
        " IGI1 Native Symbols - Project I.G.I (igi.exe) verified native addresses",
        f" Generated from IGI-Natives.json ({len(entries)} catalog entries; duplicate-address aliases retained)",
        " Preferred load address is 00400000",
        "",
        " Start         Length     Name                   Class",
        f" 0001:00000000 {text_length:08X}H .text                   CODE",
        "",
        " Exports by module 'igi1natives'",
        "",
    ]
    for entry in sorted_entries:
        offset = entry["address"] - IMAGE_BASE - TEXT_RVA
        if offset < 0:
            raise ValueError(f"native below linked .text RVA: {entry['hash']}")
        lines.append(f" 0001:{offset:08X}  _{entry['name']:<40} {entry['address']:08X} f   igi1natives.obj")
    text = "\n".join(lines) + "\n"
    for path in (root / "IGI1_Native_Exports" / "IGI1-Natives.map", root / "exports" / "igi1_natives.map"):
        path.write_text(text, encoding="ascii")


def write_idc(root: Path, entries: list[dict]) -> None:
    lines = [
        "// Auto-generated from IGI-Natives.json by tools/generate_native_assets.py",
        "#include <idc.idc>",
        "static main() {",
        "  SetBatch(1);",
    ]
    for entry in entries:
        address = f"0x{entry['address']:08X}"
        lines.append(f"  MakeNameEx({address}, {json.dumps(entry['name'])}, SN_NOWARN);")
        lines.append(f"  SetFunctionCmt({address}, {json.dumps(entry['note'])}, 1);")
    lines += ["  SetBatch(0);", "}", ""]
    (root / "exports" / "igi1_natives.idc").write_text("\n".join(lines), encoding="utf-8")


def write_ghidra_importer(root: Path, entries: list[dict]) -> None:
    lines = [
        "# Auto-generated from IGI-Natives.json by tools/generate_native_assets.py",
        "from ghidra.program.model.symbol import SourceType",
        "",
        "NATIVES = [",
    ]
    for entry in entries:
        lines.append(f"    (0x{entry['address']:08X}, {entry['name']!r}, {entry['note']!r}),")
    lines += ["]", "", "def run():", "    for address, name, note in NATIVES:", "        addr = toAddr(address)", "        createLabel(addr, name, SourceType.USER_DEFINED)", "        function = getFunctionAt(addr)", "        if function is not None:", "            function.setComment(note)", "    print('Applied %d IGI native labels' % len(NATIVES))", "", "run()", ""]
    (root / "exports" / "ghidra_apply_igi1_natives.py").write_text("\n".join(lines), encoding="utf-8")


def coff_name(name: str, address: int, used: set[str]) -> str:
    safe = re.sub(r"[^A-Za-z0-9_]", "_", name)
    if safe in used:
        safe = f"{safe}_{address:08X}"
    used.add(safe)
    return safe


def write_pdb(root: Path, entries: list[dict]) -> str:
    clang = shutil.which("clang")
    lld = shutil.which("lld-link") or shutil.which("ld.lld")
    pdbutil = shutil.which("llvm-pdbutil")
    if not pdbutil:
        for candidate in ("/opt/homebrew/opt/llvm/bin/llvm-pdbutil", "/opt/homebrew/Cellar/llvm/22.1.8/bin/llvm-pdbutil"):
            if Path(candidate).exists():
                pdbutil = candidate
                break
    ordered = sorted(entries, key=lambda item: (item["address"], item["name"]))
    output = root / "IGI1_Native_Exports" / "igi.pdb"
    if clang and lld:
        used: set[str] = set()
        symbols = [(entry["address"] - IMAGE_BASE - TEXT_RVA, coff_name(entry["name"], entry["address"], used)) for entry in ordered]
        max_offset = max(offset for offset, _ in symbols)
        target_length = max(KNOWN_TEXT_LENGTH - TEXT_RVA, max_offset + 1)
        assembly = [".text", ".globl _start", "_start:", "  .byte 0xC3"]
        cursor = 1
        for offset, symbol in symbols:
            if offset < cursor:
                assembly.append(f".globl _{symbol}")
                assembly.append(f"_{symbol}:")
                continue
            assembly.append(f".space {offset - cursor}, 0")
            assembly.append(f".globl _{symbol}")
            assembly.append(f"_{symbol}:")
            assembly.append("  .byte 0xC3")
            cursor = offset + 1
        if target_length > cursor:
            assembly.append(f".space {target_length - cursor}, 0")
        with tempfile.TemporaryDirectory(prefix="igi1-native-pdb-") as temp:
            temp_path = Path(temp)
            asm = temp_path / "igi1_natives.s"
            obj = temp_path / "igi1_natives.obj"
            exe = temp_path / "igi1_natives.exe"
            asm.write_text("\n".join(assembly) + "\n", encoding="ascii")
            subprocess.run([clang, "-target", "i686-pc-windows-msvc", "-c", "-x", "assembler", str(asm), "-o", str(obj)], check=True)
            subprocess.run([lld, "/nologo", "/machine:x86", "/subsystem:console", "/entry:_start", "/base:0x400000", "/fixed", "/debug", f"/pdb:{output}", f"/out:{exe}", str(obj)], check=True)
        return "clang + lld-link"
    if not pdbutil or not output.exists():
        raise RuntimeError("PDB generation requires clang/lld-link or an existing PDB plus llvm-pdbutil")
    result = subprocess.run([pdbutil, "pdb2yaml", "--pdb-stream", "--section-headers", "--publics-stream", str(output)], check=True, text=True, stdout=subprocess.PIPE)
    prefix = result.stdout.split("PublicsStream:\n", 1)[0]
    records = ["PublicsStream:", "  Records:"]
    for entry in ordered:
        records += [
            "    - Kind:            S_PUB32",
            "      PublicSym32:",
            "        Flags:           [  ]",
            f"        Offset:          {entry['address'] - IMAGE_BASE - TEXT_RVA}",
            "        Segment:         1",
            f"        Name:            {entry['name']}",
        ]
    with tempfile.TemporaryDirectory(prefix="igi1-native-pdb-yaml-") as temp:
        yaml_path = Path(temp) / "igi1_natives.yaml"
        yaml_path.write_text(prefix + "\n".join(records) + "\n...\n", encoding="utf-8")
        subprocess.run([pdbutil, "yaml2pdb", str(yaml_path), f"-pdb={output}"], check=True)
    return "llvm-pdbutil yaml2pdb (CodeView publics)"


def write_native_docs(root: Path, entries: list[dict], evidence: dict, cfg: dict) -> None:
    evidence_by_hash = {item["hash"].upper(): item for item in evidence["Natives"]}
    cfg_by_hash = {item["address"].replace("0x", "").upper(): item for item in cfg.get("accepted", [])}
    native_dir = root / "assets" / "natives"
    rows = [
        "# IGI native catalog",
        "",
        f"This directory contains one readable record for each of the {len(entries)} catalog entries. The root `IGI-Natives.json` is authoritative; these Markdown files are generated views.",
        "",
        "## Provenance",
        "",
        "The branch records 80 discoveries as human reverse-engineering work by Heaven. The remaining catalog work is AI-assisted and is classified per symbol in `IGI1_Native_Exports/IGI1-Native-Name-Evidence.json`. Retail string/context names are preferred; behavior-derived names require the Ghidra/r2 evidence gate.",
        "",
        "| Address | Name | Signature | Source |",
        "|---|---|---|---|",
    ]
    for entry in entries:
        ev_item = evidence_by_hash.get(entry["hash"].upper(), {})
        rows.append(f"| `0x{entry['address']:08X}` | [`{entry['name']}`]({entry['hash'].upper()}-{entry['name']}.md) | `{md_cell(entry['signature'])}` | `{ev_item.get('source', 'catalog-only')}` |")
        cfg_item = cfg_by_hash.get(entry["hash"].upper())
        lines = [
            f"# {entry['name']}",
            "",
            "| Field | Value |",
            "|---|---|",
            f"| Address/hash | `0x{entry['address']:08X}` |",
            f"| Signature | `{md_cell(entry['signature'])}` |",
            f"| Catalog source | `{ev_item.get('source', 'catalog-only')}` |",
            "| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |",
            "",
            "## Recovered behavior",
            "",
            entry["note"],
            "",
            "## How it was found",
            "",
        ]
        if ev_item.get("retailEvidence"):
            lines.append("Retail evidence: " + "; ".join(str(value) for value in ev_item["retailEvidence"]) + ".")
        else:
            lines.append("This record uses the branch evidence classification and the address-specific note in the canonical catalog.")
        if cfg_item:
            lines += [
                "",
                f"Ghidra CFG: `{cfg_item['ghidra']['basic_blocks']}` basic blocks, `{cfg_item['ghidra']['edges']}` edges, end `{cfg_item['ghidra']['end']}`.",
                f"r2 CFG: `{cfg_item['r2']['basic_blocks']}` basic blocks, `{cfg_item['r2']['edges']}` edges, end `{cfg_item['r2']['end']}`, calling convention `{cfg_item['r2'].get('calltype', 'cdecl')}`.",
                "The entry passed the static CFG gate. This does not claim runtime verification.",
            ]
        else:
            lines.append("See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.")
        lines += ["", "## Usage boundary", "", "Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.", ""]
        (native_dir / f"{entry['hash'].upper()}-{entry['name']}.md").write_text("\n".join(lines), encoding="utf-8")
    (native_dir / "README.md").write_text("\n".join(rows) + "\n", encoding="utf-8")


def write_structure_docs(root: Path, structures: dict) -> None:
    directory = root / "assets" / "structures"
    rows = ["# Recovered IGI structures", "", structures["policy"], "", "| Structure | Kind | Size | Root | Evidence |", "|---|---|---|---|---|"]
    for item in structures["structures"]:
        filename = f"{item['name']}.md"
        rows.append(f"| [{item['name']}]({filename}) | `{item['kind']}` | `{item['size']}` | `{item['root']}` | {', '.join('`' + value + '`' for value in item['evidence'])} |")
        lines = [f"# {item['name']}", "", f"**Kind:** `{item['kind']}`  ", f"**Size:** `{item['size']}`  ", f"**Root:** `{item['root']}`", "", "## What is proven", "", item["summary"], "", "## Evidence", "", "- " + "\n- ".join(f"Retail IGI.EXE address `{value}`" for value in item["evidence"]), "", "The C++ declaration is intentionally partial where the binary did not prove field semantics. Unknown regions remain opaque or reserved.", ""]
        (directory / filename).write_text("\n".join(lines), encoding="utf-8")
    (directory / "README.md").write_text("\n".join(rows) + "\n", encoding="utf-8")


def write_assets_readme(root: Path, count: int, pdb_toolchain: str) -> None:
    text = f"""# IGI reverse-engineering assets

The root `IGI-Natives.json` is the authoritative native catalog. This folder contains generated, human-readable views rather than a second source of truth.

| Folder/file | Purpose |
|---|---|
| `natives/` | One Markdown record and one index table for every catalog native. |
| `structures/` | One Markdown record and an index for each recovered structure or opaque record view. |
| `../verification/` | Ghidra/r2 CFG evidence, structure evidence, provenance manifests, and generation metadata. |

Current catalog size: **{count}** entries.

The PDB is generated as an address-compatible CodeView symbol database with `{pdb_toolchain}` in this worktree. It is not a vendor PDB: retail `IGI.EXE` has no embedded CodeView/RSDS identity to match.
"""
    (root / "assets" / "README.md").write_text(text, encoding="utf-8")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    args = parser.parse_args()
    root = args.root.resolve()
    catalog, evidence, cfg, structures = load_inputs(root)
    entries = [wrapper["Native"] for wrapper in catalog["Natives"]]
    evidence = merge_evidence(root, catalog, evidence, cfg)
    dump_json(root / "IGI1_Native_Exports" / "IGI1-Natives.json", catalog)
    write_csv(root, entries)
    write_map(root, entries)
    write_idc(root, entries)
    write_ghidra_importer(root, entries)
    pdb_toolchain = write_pdb(root, entries)
    write_native_docs(root, entries, evidence, cfg)
    write_structure_docs(root, structures)
    write_assets_readme(root, len(entries), pdb_toolchain)
    dump_json(root / "verification" / "native_asset_generation.json", {
        "catalog": "IGI-Natives.json",
        "entry_count": len(entries),
        "image_base": "0x00400000",
        "pdb_toolchain": pdb_toolchain,
        "outputs": [
            "IGI1_Native_Exports/IGI1-Natives.json",
            "IGI1_Native_Exports/IGI1-Natives.map",
            "IGI1_Native_Exports/igi.pdb",
            "IGI1_Native_Exports/IGI1-Native-Name-Evidence.json",
            "exports/igi1_natives.csv",
            "exports/igi1_natives.map",
            "exports/igi1_natives.idc",
            "exports/ghidra_apply_igi1_natives.py",
            "assets/natives/",
            "assets/structures/"
        ]
    })
    print(f"Generated {len(entries)} natives, synchronized export assets, PDB, and Markdown documentation.")


if __name__ == "__main__":
    main()
