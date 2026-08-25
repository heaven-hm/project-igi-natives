# Discover candidate native methods from retail IGI.exe string references.
# This is read-only; pass existing catalog entries as address|name arguments.
import re

fm = currentProgram.getFunctionManager()
listing = currentProgram.getListing()
refman = currentProgram.getReferenceManager()
space = currentProgram.getAddressFactory().getDefaultAddressSpace()
known = set()
for argument in getScriptArgs():
    if "|" in argument:
        known.add(argument.split("|", 1)[0].upper())

method_pattern = re.compile(r"^[A-Za-z][A-Za-z0-9]*_[A-Za-z0-9_]+$")
camel_pattern = re.compile(r"^[A-Z][A-Za-z0-9]{2,}$")
seen = set()

for data in listing.getDefinedData(True):
    if not data.hasStringValue():
        continue
    value = data.getValue()
    if value is None:
        continue
    value = str(value)
    if len(value) > 80 or not (method_pattern.match(value) or camel_pattern.match(value)):
        continue
    for reference in refman.getReferencesTo(data.getAddress()):
        source = reference.getFromAddress()
        function = fm.getFunctionContaining(source)
        if function is None:
            continue
        entry = "%08X" % function.getEntryPoint().getOffset()
        if entry in known:
            continue
        params = len(function.getParameters())
        key = (entry, value, "%08X" % source.getOffset())
        if key in seen:
            continue
        seen.add(key)
        print("%s\t%s\t%s\t%d\t%s\t%s" % (
            entry,
            "%08X" % data.getAddress().getOffset(),
            value,
            params,
            function.getName(),
            "%08X" % source.getOffset(),
        ))
