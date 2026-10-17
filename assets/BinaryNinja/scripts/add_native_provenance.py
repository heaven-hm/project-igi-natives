#!/usr/bin/env python3
"""Add original IGI.EXE function provenance comments to modular C sources."""

from __future__ import annotations

import json
import re
import sys
from pathlib import Path


SCRIPT_PATH = Path(__file__).resolve()
BINARY_NINJA_DIRECTORY = SCRIPT_PATH.parents[1]
NATIVES_DIRECTORY = BINARY_NINJA_DIRECTORY / "natives"
CATALOG_PATH = BINARY_NINJA_DIRECTORY / "IGINatives_VERIFIED.json"
FILENAME_PATTERN = re.compile(r"^(?P<address>[0-9A-Fa-f]{8})-(?P<name>.+)\.c$")
PROVENANCE_PATTERN = re.compile(r"^// Original IGI\.EXE function:", re.MULTILINE)


def load_catalog() -> dict[int, dict[str, object]]:
    """Load and validate the address-indexed verified-function catalog."""
    try:
        with CATALOG_PATH.open("r", encoding="utf-8") as catalog_file:
            catalog_document = json.load(catalog_file)
    except (OSError, json.JSONDecodeError) as error:
        raise RuntimeError(f"Could not read native catalog {CATALOG_PATH}: {error}") from error

    native_entries = catalog_document.get("natives")
    if not isinstance(native_entries, list):
        raise RuntimeError(f"Catalog has no valid 'natives' array: {CATALOG_PATH}")

    entries_by_address: dict[int, dict[str, object]] = {}
    for native_entry in native_entries:
        try:
            native_address = int(str(native_entry["hash"]), 16)
            native_name = str(native_entry["name"])
        except (KeyError, TypeError, ValueError) as error:
            raise RuntimeError(f"Invalid native catalog entry: {native_entry!r}") from error

        if native_address in entries_by_address:
            raise RuntimeError(f"Duplicate native address in catalog: 0x{native_address:08X}")
        entries_by_address[native_address] = native_entry

    return entries_by_address


def provenance_comment(native_entry: dict[str, object], native_address: int) -> str:
    """Format a comment without claiming runtime verification."""
    native_name = str(native_entry["name"])
    gate_status = str(native_entry.get("gate", "UNKNOWN"))
    cfg_score = native_entry.get("score")
    score_description = f", CFG score {float(cfg_score):.3f}" if cfg_score is not None else ""
    return (
        f"// Original IGI.EXE function: {native_name} "
        f"(VA 0x{native_address:08X}; static CFG gate {gate_status}{score_description}).\n"
    )


def main() -> int:
    """Annotate each C file whose address exists in the verified catalog."""
    if not NATIVES_DIRECTORY.is_dir():
        print(f"Native source directory does not exist: {NATIVES_DIRECTORY}", file=sys.stderr)
        return 1

    entries_by_address = load_catalog()
    source_files = sorted(NATIVES_DIRECTORY.rglob("*.c"))
    updated_count = 0
    unchanged_count = 0

    for source_path in source_files:
        filename_match = FILENAME_PATTERN.match(source_path.name)
        if filename_match is None:
            raise RuntimeError(f"Native source filename has no address prefix: {source_path}")

        native_address = int(filename_match.group("address"), 16)
        native_entry = entries_by_address.get(native_address)
        if native_entry is None:
            raise RuntimeError(
                f"No verified catalog entry for {source_path} at 0x{native_address:08X}"
            )

        source_text = source_path.read_text(encoding="utf-8")
        if PROVENANCE_PATTERN.search(source_text):
            unchanged_count += 1
            continue

        comment = provenance_comment(native_entry, native_address)
        source_path.write_text(comment + source_text, encoding="utf-8")
        updated_count += 1

    print(
        f"Added original IGI.EXE provenance to {updated_count} C files; "
        f"{unchanged_count} already had provenance ({len(source_files)} total)."
    )
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except (OSError, RuntimeError) as error:
        print(f"Native provenance update failed: {error}", file=sys.stderr)
        raise SystemExit(1)
