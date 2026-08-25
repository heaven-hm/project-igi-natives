# Read-only verification for labels applied to the retail IGI.exe program.
from ghidra.program.model.symbol import SymbolUtilities

st = currentProgram.getSymbolTable()
space = currentProgram.getAddressFactory().getDefaultAddressSpace()

for argument in getScriptArgs():
    if "|" not in argument:
        continue
    hex_address, expected = argument.split("|", 1)
    address = space.getAddress(hex_address)
    names = sorted(set(symbol.getName() for symbol in st.getSymbols(address)))
    status = "OK" if expected in names else "MISSING"
    print("%s\t%s\t%s\t%s" % (hex_address, expected, status, ",".join(names)))
