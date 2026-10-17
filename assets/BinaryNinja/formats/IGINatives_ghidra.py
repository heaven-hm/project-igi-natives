#@category IGI1
# Ghidra Headless/Script Importer: 5735 verified IGI1 natives (100% of binary view)
# Usage in Ghidra Script Manager:
#   Run script 'IGINatives_ghidra.py' on IGI.EXE

import json
from ghidra.program.model.symbol import SourceType

SYMBOLS_PATH = '/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/formats/IGINatives_symbols.json'
with open(SYMBOLS_PATH, 'r') as f:
    symbols = json.load(f)

fm = currentProgram.getFunctionManager()
st = currentProgram.getSymbolTable()
af = currentProgram.getAddressFactory().getDefaultAddressSpace()

count = 0
for item in symbols:
    try:
        addr = af.getAddress(hex(item['addr']))
        fn = fm.getFunctionAt(addr)
        if fn is None:
            fn = fm.createFunction(None, addr, addr.add(16), SourceType.USER_DEFINED)
        st.createLabel(addr, item['name'], None, SourceType.USER_DEFINED)
        count += 1
    except Exception as e:
        pass

print(f'Ghidra Symbol Importer: Successfully defined and renamed {count} / {len(symbols)} native functions!')
