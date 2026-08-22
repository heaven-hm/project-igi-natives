import json, re

pairs = json.load(open('pass1_input_pairs.json'))
raw = open('pass1_raw.txt', errors='replace').read()

# split into per-address blocks
blocks = {}
cur = None
buf = []
for line in raw.splitlines():
    m = re.match(r'@@BEGIN:(0x[0-9A-Fa-f]{8})', line)
    if m:
        if cur: blocks[cur] = '\n'.join(buf)
        cur = m.group(1).upper().replace('0X','0x'); buf=[]
        continue
    m2 = re.match(r'@@END:', line)
    if m2:
        if cur: blocks[cur] = '\n'.join(buf)
        cur=None; buf=[]; continue
    if cur is not None: buf.append(line)
if cur: blocks[cur]='\n'.join(buf)

results = []
for p in pairs:
    A = p['address']
    blk = blocks.get(A, '')
    fi = {}
    # afi fields
    for key in ['size','num-instrs','nbbs','minaddr','maxaddr','in-degree','out-degree','args','stackframe']:
        mm = re.search(rf'^{key}:\s*(\S+)', blk, re.M)
        if mm: fi[key]=mm.group(1)
    pdf_start = blk.find('┌')
    disas = blk[pdf_start:] if pdf_start>=0 else ''
    lines=[l.strip() for l in disas.splitlines() if l.strip() and not l.startswith('┌') and not l.startswith('/')]
    prologue = lines[0] if lines else ''
    # ret ending: find last instruction line
    last = ''
    for l in reversed(lines):
        mm=re.match(r'[^\s;]+\s+([a-z]+)', l.replace('\u2502',' ').replace('│',' '))
        if mm:
            mnem=mm.group(1)
            if mnem in ('ret','retn','retf','leave','pop','jmp'):  # allow epilogue tail window
                last=mnem
                if mnem in ('ret','retn','retf'): break
            else:
                break
    ends_ret = last in ('ret','retn','retf')
    calls = len(re.findall(r'\bcall\b', disas))
    strrefs = len(re.findall(r';\s*"', disas))
    size = int(fi.get('size','0') or 0)
    function_start = bool(fi.get('minaddr','').lower() == A.lower()) and size>0
    verdict='FAIL'; note=''
    if not blk.strip():
        verdict='FAIL'; note='no analysis output'
    elif not function_start:
        # check containment via afl.json later; mark suspect
        verdict='SUSPECT'; note='afi minaddr mismatch or zero size'
    elif not ends_ret:
        verdict='SUSPECT'; note=f'does not end in ret (tail={last!r})'
    elif size<16:
        verdict='SUSPECT'; note=f'very small ({size}B)'
    elif size>4000:
        verdict='SUSPECT'; note=f'very large ({size}B)'
    else:
        verdict='PASS'
    results.append(dict(name=p['name'], address=A, function_start=function_start,
        size=size, prologue=prologue[:60], ends_ret=ends_ret, calls=calls,
        string_refs=strrefs, num_instructions=int(fi.get('num-instrs','0') or 0),
        verdict=verdict, note=note))

json.dump(results, open('pass1_r2_results.json','w'), indent=1)
from collections import Counter
c=Counter(r['verdict'] for r in results)
print(c)
for r in results:
    if r['verdict']!='PASS': print(r['verdict'], r['name'], r['address'], r['note'])
