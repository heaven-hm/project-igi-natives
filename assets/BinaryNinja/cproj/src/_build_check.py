import pathlib,subprocess,collections,json,re
SRC=pathlib.Path(".");BLD=pathlib.Path("../build");BLD.mkdir(exist_ok=True)
files=sorted(SRC.glob("*.c"));ok=0;cats=collections.Counter();errs=[]
for f in files:
    r=subprocess.run(["clang","-std=c11","-O2","-w","-I",".","-c","-o",str(BLD/(f.stem+".o")),str(f)],capture_output=True,text=True,timeout=120)
    if r.returncode==0: ok+=1
    else:
        e=[l for l in r.stderr.strip().split("\n") if l.strip()]
        e=e[0] if e else "unknown"
        cats[re.sub(r"^[^:]*:\d+:\d+: ","",e)[:60]]+=1;errs.append((f.name,e[:130]))
print("COMPILED OK:",ok,"/",len(files),"=",round(ok/max(len(files),1)*100,1),"%")
for k,v in cats.most_common(10): print("  ",v,k)
json.dump({"sources":len(files),"compiled_ok":ok,"coverage_pct":round(ok/max(len(files),1)*100,1),
"error_categories":dict(cats.most_common(15)),"samples":errs[:10]},open("../CPROJ_BUILD_REPORT.json","w"),indent=1)
