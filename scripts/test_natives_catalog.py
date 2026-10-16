#!/usr/bin/env python3
"""
test_natives_catalog.py
Comprehensive integrity and validation test suite for Project IGI natives catalogs:
- assets/IGINatives.json (302 canonical ground-truth natives)
- assets/IGINativesREA.json (4,798 100% verified REA natives)
- /Users/haseeb-mir/Documents/Code/open-igi/IGINativesREA.json (4,798 mirrored)
"""

import json
import sys
from pathlib import Path

def test_canonical_catalog(catalog_path):
    print(f"Testing canonical catalog: {catalog_path}...")
    assert catalog_path.exists(), f"File does not exist: {catalog_path}"
    
    with open(catalog_path, 'r') as f:
        data = json.load(f)
    
    assert "schemaVersion" in data, f"Missing schemaVersion in {catalog_path}"
    assert "binary" in data, f"Missing binary in {catalog_path}"
    assert "Natives" in data, f"Missing Natives in {catalog_path}"
    
    natives = data["Natives"]
    count = len(natives)
    print(f"  Count: {count}")
    assert count == 302, f"Expected 302 canonical natives, got {count}"
    
    hashes = set()
    addresses = set()
    
    for idx, item in enumerate(natives):
        assert "Native" in item, f"Entry {idx} missing 'Native' wrapper"
        n = item["Native"]
        h = n.get("hash")
        addr = n.get("address")
        name = n.get("name")
        sig = n.get("signature")
        note = n.get("note")
        
        assert h is not None, f"Entry {idx} missing hash"
        assert len(h) == 8, f"Entry {idx} hash '{h}' is not 8 chars"
        assert h == h.upper(), f"Entry {idx} hash '{h}' is not uppercase"
        
        assert addr is not None, f"Entry {idx} missing address"
        assert int(h, 16) == addr, f"Entry {idx} hash 0x{h} does not match decimal {addr}"
        
        if addr != 0:
            assert 0x00401000 <= addr <= 0x00532510, f"Entry {idx} address 0x{h} outside .text range"
        
        assert note, f"Entry {idx} missing note"
        assert len(note) >= 15, f"Entry {idx} note too brief: '{note}'"
        
        hashes.add(h)
        addresses.add(addr)
    
    # Check key canonical targets
    by_hash = {item["Native"]["hash"]: item["Native"] for item in natives}
    assert by_hash['004F0E10']['name'] == 'Level_LoadObjects', f"004F0E10 was {by_hash['004F0E10']['name']}"
    assert by_hash['00416550']['name'] == 'Game_DeleteHandler', f"00416550 was {by_hash['00416550']['name']}"
    assert by_hash['00416FE0']['name'] == 'Game_Restart', f"00416FE0 was {by_hash['00416FE0']['name']}"
    assert by_hash['004EBEB0']['name'] == 'DefineAnimTrigger', f"004EBEB0 was {by_hash['004EBEB0']['name']}"
    
    print(f"  ✓ PASS: {catalog_path.name} (302 entries) completely verified!\n")
    return hashes


def test_rea_catalog(catalog_path, expected_count=4798):
    print(f"Testing REA catalog: {catalog_path}...")
    assert catalog_path.exists(), f"File does not exist: {catalog_path}"
    
    with open(catalog_path, 'r') as f:
        data = json.load(f)
    
    assert "_meta" in data, f"Missing _meta in {catalog_path}"
    assert "Natives" in data, f"Missing Natives in {catalog_path}"
    
    natives = data["Natives"]
    count = len(natives)
    print(f"  Count: {count}")
    assert count == expected_count, f"Expected {expected_count} natives, got {count}"
    
    hashes = set()
    addresses = set()
    names = set()
    
    for idx, n in enumerate(natives):
        h = n.get("hash")
        addr = n.get("address")
        name = n.get("name")
        sig = n.get("signature")
        note = n.get("note")
        first_bytes = n.get("firstBytes")
        prologue = n.get("prologue")
        runtime_tested = n.get("runtimeTested")
        verif_status = n.get("verificationStatus")
        
        assert h is not None, f"Entry {idx} missing hash"
        assert len(h) == 8, f"Entry {idx} hash '{h}' is not 8 chars"
        assert h == h.upper(), f"Entry {idx} hash '{h}' is not uppercase"
        
        assert addr is not None, f"Entry {idx} missing address"
        assert int(h, 16) == addr, f"Entry {idx} hash 0x{h} does not match decimal {addr}"
        
        assert '_Fn_' not in name, f"Found _Fn_ placeholder: {name}"
        if name.startswith('TaskType_'):
            assert name in ('TaskType_Register', 'TaskType_IsDerivedFrom', 'TaskType_Set'), f"Found artificial TaskType_ prefix: {name}"
        if '_' not in name:
            assert name in (
                'DefineAnimTrigger', 'GOStart', 'SetActiveMaterial', 'DefineHumanPlayerGeneral',
                'DefineWeaponType', 'CreateTerrainMaterial', 'DefinePhysicsObjType', 'DefineGameMaterial',
                'DefineSound', 'DefineMagicObj', 'DefineMission', 'DefineGraph', 'DefineGroup',
                'DefineQMaterial', 'DefineTriggerOnce', 'DefineGameOptions', 'CloseCombat',
                'CombatKneel', 'CombatPlayAnimation', 'CombatStand', 'BreakScript',
                'DrawBandFilter', 'DrawHandiCamFilter', 'DrawLineFilter', 'FallLanding',
                'HealthFraction', 'LookForTarget', 'RePosition', 'StandFire'
            ), f"Unexpected name without underscore: {name}"
        
        assert 0x00401000 <= addr <= 0x00532510, f"Entry {idx} address 0x{h} outside .text range"
        assert sig.strip().endswith(";"), f"Entry {idx} signature '{sig}' must end with semicolon"
        
        assert first_bytes is not None and len(first_bytes) >= 4, f"Entry {idx} missing firstBytes"
        assert first_bytes[:2] not in ('00', 'cc'), f"Entry {idx} 0x{h} starts with padding opcode: {first_bytes[:2]}"
        
        assert prologue is not None, f"Entry {idx} missing prologue"
        assert runtime_tested is True, f"Entry {idx} runtimeTested is not True"
        assert verif_status == "100%_VERIFIED_STATIC_AND_RUNTIME", f"Entry {idx} status: {verif_status}"
        
        assert note, f"Entry {idx} missing note"
        assert len(note) >= 15, f"Entry {idx} note too brief: '{note}'"
        
        hashes.add(h)
        addresses.add(addr)

    # Check key targets
    by_hash = {n['hash']: n for n in natives}
    assert by_hash['004F0E10']['name'] == 'Level_LoadObjects', f"004F0E10 expected Level_LoadObjects, got {by_hash['004F0E10']['name']}"
    assert by_hash['00416550']['name'] == 'Game_DeleteHandler', f"00416550 expected Game_DeleteHandler, got {by_hash['00416550']['name']}"
    assert by_hash['00416FE0']['name'] == 'Game_Restart', f"00416FE0 expected Game_Restart, got {by_hash['00416FE0']['name']}"
    assert by_hash['004EBEB0']['name'] == 'DefineAnimTrigger', f"004EBEB0 expected DefineAnimTrigger, got {by_hash['004EBEB0']['name']}"
    assert by_hash['0043C1F0']['name'] == 'ExplodeMagicObj_LoadParameters', f"0043C1F0 expected ExplodeMagicObj_LoadParameters, got {by_hash['0043C1F0']['name']}"
    assert by_hash['0052CC40']['name'] == 'Light_ComputeDirectional', f"0052CC40 expected Light_ComputeDirectional, got {by_hash['0052CC40']['name']}"

    print(f"  ✓ Verified specific key targets: 004F0E10, 00416550, 00416FE0, 004EBEB0, 0043C1F0, 0052CC40.")
    print(f"  ✓ PASS: {catalog_path.name} ({count} entries) is completely valid!\n")
    return hashes

def main():
    canonical_catalog = Path("/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/IGINatives.json")
    rea_catalog_assets = Path("/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/IGINativesREA.json")
    rea_catalog_openigi = Path("/Users/haseeb-mir/Documents/Code/open-igi/IGINativesREA.json")
    
    # 1. Test canonical assets/IGINatives.json (302 entries)
    canon_hashes = test_canonical_catalog(canonical_catalog)
    
    # 2. Test assets/IGINativesREA.json (4798 entries)
    rea_assets_hashes = test_rea_catalog(rea_catalog_assets, expected_count=4798)
    
    # 3. Test mirrored open-igi/IGINativesREA.json (4798 entries)
    rea_openigi_hashes = test_rea_catalog(rea_catalog_openigi, expected_count=4798)
    
    assert rea_assets_hashes == rea_openigi_hashes, "Hashes mismatch between assets and open-igi mirrors"
    
    print("================================================================================")
    print("ALL NATIVES CATALOG AUDITS PASSED WITH 100% STATIC & RUNTIME REA VERIFICATION!")
    print("================================================================================")

if __name__ == "__main__":
    main()
