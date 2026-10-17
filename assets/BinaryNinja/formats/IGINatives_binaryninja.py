# Binary Ninja Python Console Importer: 5735 verified IGI1 natives (100% of binary view)
# Usage:
#   Open igi.exe or igi.exe.bndb in Binary Ninja.
#   Open the Python Console (Ctrl+` or View -> Python Console).
#   Paste this script or run:
#     exec(open('/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/formats/IGINatives_binaryninja.py').read())

import json
from binaryninja import Symbol, SymbolType

SYMBOLS_PATH = '/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/formats/IGINatives_symbols.json'
with open(SYMBOLS_PATH, 'r') as f:
    symbols = json.load(f)

count = 0
bv.begin_undo_actions()
try:
    for item in symbols:
        addr = item['addr']
        name = item['name']
        try:
            bv.define_user_symbol(Symbol(SymbolType.FunctionSymbol, addr, name))
            count += 1
        except Exception as e:
            pass
finally:
    bv.commit_undo_actions()

bv.update_analysis_and_wait()
print(f'Successfully imported and renamed {count} / {len(symbols)} native functions in Binary Ninja!')
