#!/usr/bin/env python3
"""Add the report-backed provenance header to each exported native C file."""

from __future__ import annotations

import argparse
import re
from pathlib import Path


NATIVE_ROOT = Path("assets/BinaryNinja/natives")
CATALOG_PATH = "assets/BinaryNinja/IGINatives_VERIFIED.json"
ANNOTATION_PREFIX = "// IGI native provenance:"
OLD_ANNOTATIONS = (
    "// Original IGI.EXE function:",
    "// Retail IGI.EXE native:",
)


def report_fields(report_path: Path) -> tuple[str, str, str, str, str] | None:
    report_text = report_path.read_text(encoding="utf-8", errors="replace")
    name_match = re.search(r"^#\s+(.+)$", report_text, re.MULTILINE)
    address_match = re.search(r"^- Address:\s*`?(?:0x)?([0-9A-Fa-f]{8})`?\s*$", report_text, re.MULTILINE)
    gate_match = re.search(r"^- CFG gate:\s*(PASS|FAIL)\s*\(score\s+([0-9.]+)\)", report_text, re.MULTILINE)
    source_match = re.search(r"^- Source:\s*(.+)$", report_text, re.MULTILINE)
    if not (name_match and address_match):
        return None

    source = source_match.group(1).strip() if source_match else "unknown"
    if source == "confirmed-rea":
        tool_reference = "REA/Ghidra static record"
    elif source in {"discovered-bn-r2-full", "discovered-bn-r2"}:
        tool_reference = "Binary Ninja/Radare2 CFG record"
    elif source == "ghidra-r2-verified":
        tool_reference = "Ghidra/Radare2 static record"
    elif source == "bn-discovered":
        tool_reference = "Binary Ninja discovery record"
    else:
        tool_reference = "catalog provenance record"

    gate = gate_match.group(1) if gate_match else "CANDIDATE"
    score = gate_match.group(2) if gate_match else ""
    if not score:
        block_match = re.search(r"^- Radare2 CFG:\s*(\d+) blocks", report_text, re.MULTILINE)
        if block_match:
            score = f"{block_match.group(1)} blocks"

    return (
        name_match.group(1).strip(),
        address_match.group(1).upper(),
        gate,
        score,
        tool_reference,
    )


def native_annotation(fields: tuple[str, str, str, str, str], report_path: Path) -> tuple[str, str]:
    native_name, address, gate, score, tool_reference = fields
    report_reference = report_path.name
    if score.endswith(" blocks"):
        evidence_summary = f"Radare2 CFG {score} (candidate; no CFG score recorded)"
    elif score:
        evidence_summary = f"CFG score {float(score) * 100.0:.1f}% ({gate}; structural only)"
    else:
        evidence_summary = "static confidence not recorded (candidate)"
    return (
        f"{ANNOTATION_PREFIX} {native_name} - 0x{address} - {evidence_summary}; runtime behavior not verified.",
        f"// Evidence: {report_reference}; {tool_reference}; catalog: {CATALOG_PATH}.",
    )


def update_source(source_path: Path, annotation: tuple[str, str], apply_changes: bool) -> bool:
    original_bytes = source_path.read_bytes()
    source_text = original_bytes.decode("utf-8", errors="replace")
    line_ending = "\r\n" if "\r\n" in source_text else "\n"
    lines = source_text.splitlines(keepends=True)

    insertion_index = 0
    while insertion_index < len(lines) and lines[insertion_index].startswith("//"):
        insertion_index += 1

    existing_annotation_index = next(
        (index for index, line in enumerate(lines) if line.startswith(ANNOTATION_PREFIX)),
        None,
    )
    if existing_annotation_index is not None:
        if (lines[existing_annotation_index].rstrip("\r\n") == annotation[0]
                and existing_annotation_index + 1 < len(lines)
                and lines[existing_annotation_index + 1].rstrip("\r\n") == annotation[1]):
            return False
        lines[existing_annotation_index] = annotation[0] + line_ending
        if existing_annotation_index + 1 < len(lines) and lines[existing_annotation_index + 1].startswith("// Evidence:"):
            lines[existing_annotation_index + 1] = annotation[1] + line_ending
        else:
            lines.insert(existing_annotation_index + 1, annotation[1] + line_ending)
    else:
        old_annotation_index = next(
            (index for index, line in enumerate(lines[:insertion_index])
             if line.startswith(OLD_ANNOTATIONS)),
            None,
        )
        if old_annotation_index is not None:
            lines[old_annotation_index] = annotation[0] + line_ending
            lines.insert(old_annotation_index + 1, annotation[1] + line_ending)
        else:
            lines[0:0] = [item + line_ending for item in annotation]

    if apply_changes:
        source_path.write_bytes("".join(lines).encode("utf-8"))
    return True


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--apply", action="store_true", help="write updated C source files")
    arguments = parser.parse_args()

    changed_count = 0
    missing_report_count = 0
    invalid_report_count = 0
    for source_path in sorted(NATIVE_ROOT.rglob("*.c")):
        if "CLEAN" in source_path.relative_to(NATIVE_ROOT).parts:
            continue
        report_path = source_path.with_suffix(".md")
        if not report_path.is_file():
            missing_report_count += 1
            continue
        fields = report_fields(report_path)
        if fields is None:
            invalid_report_count += 1
            continue
        if update_source(source_path, native_annotation(fields, report_path), arguments.apply):
            changed_count += 1

    action = "updated" if arguments.apply else "would update"
    print(
        f"{action} {changed_count} native source annotations; "
        f"missing reports: {missing_report_count}; invalid reports: {invalid_report_count}."
    )
    if not arguments.apply:
        print("Run with --apply to write the annotations.")
    return 0 if missing_report_count == 0 and invalid_report_count == 0 else 1


if __name__ == "__main__":
    raise SystemExit(main())
