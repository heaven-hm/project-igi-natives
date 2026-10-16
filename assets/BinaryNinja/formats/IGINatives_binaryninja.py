# Binary Ninja console import: 5732 validated natives (100% of binary view)
import json
from binaryninja import Symbol, SymbolType
P='/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/formats/IGINatives_symbols.json'
d=json.load(open(P))
c=0
for n in d:
  try:
    bv.define_user_symbol(Symbol(SymbolType.FunctionSymbol,int(n['addr']),n['name'])); c+=1
  except Exception as e: pass
print('IGINatives BN import',c)
bv.update_analysis_and_wait()
