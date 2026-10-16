"""Binary Ninja import: IGINativesNinja 4645 verified. Run in BN console: exec(open(path).read())"""
import json
NATIVE_JSON = r'/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/IGINativesNinja.json'
d=json.load(open(NATIVE_JSON))
count=0
for n in d['natives']:
    try:
        addr=int(n['address'])
        name=n['rea_name']
        bv.define_user_symbol(Symbol(SymbolType.FunctionSymbol, addr, name))
        count+=1
    except Exception as e:
        print(hex(addr), name, 'ERR', e)
print(f'imported {count}')
bv.update_analysis_and_wait()
