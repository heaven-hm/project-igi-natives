#@category IGI1
# Ghidra headless import of 5732 validated natives (100% coverage)
import json
from ghidra.program.model.symbol import SourceType
P = '/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/formats/IGINatives_symbols.json'
with open(P) as f:
    symbols = json.load(f)
fm = currentProgram.getFunctionManager()
st = currentProgram.getSymbolTable()
af = currentProgram.getAddressFactory().getDefaultAddressSpace()
c = 0
for s in symbols:
    try:
        a = af.getAddress(hex(s['addr']))
        fn = fm.getFunctionAt(a)
        if fn is None:
            fn = fm.createFunction(None, a, a.add(16), SourceType.USER_DEFINED)
        st.createLabel(a, s['name'], None, SourceType.USER_DEFINED)
        c += 1
    except Exception as e: pass
print('IGINatives ghidra import done:', c)
