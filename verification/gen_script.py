import json
pairs = json.load(open('pass1_input_pairs.json'))
cmds = []
for p in pairs:
    A = p['address']
    cmds.append(f'?e @@BEGIN:{A}')
    cmds.append(f'af @ {A}')
    cmds.append(f'afi @ {A}')
    cmds.append(f'pD $f @ {A} ~?')   # count instructions in function? (fallback)
    cmds.append(f'?e @@END:{A}')
open('pass1_script.r2','w').write(';\n'.join(cmds))
print('script cmds:', len(cmds))
