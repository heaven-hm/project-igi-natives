# Ghidra read-only evidence extractor for the IGI 1 native catalog.
# Arguments are address|catalog-name pairs, for example 004AF7B0|ErrorShow.

from ghidra.program.model.address import Address

fm = currentProgram.getFunctionManager()
listing = currentProgram.getListing()
refman = currentProgram.getReferenceManager()


def string_refs(function):
    values = set()
    if function is None:
        return values
    for instruction_address in function.getBody().getAddresses(True):
        for reference in refman.getReferencesFrom(instruction_address):
            data = listing.getDataAt(reference.getToAddress())
            if data is None or not data.hasStringValue():
                continue
            value = data.getValue()
            if value is None:
                continue
            text = str(value).replace("\r", " ").replace("\n", " ").replace("\t", " ")
            if 1 < len(text) <= 240:
                values.add(text)
    return values


def functions_for(address):
    result = []
    target = fm.getFunctionAt(address)
    if target is not None:
        result.append(target)
    for reference in refman.getReferencesTo(address):
        caller = fm.getFunctionContaining(reference.getFromAddress())
        if caller is None:
            continue
        if caller not in result:
            result.append(caller)
    return result


for argument in getScriptArgs():
    if "|" not in argument:
        continue
    hex_address, catalog_name = argument.split("|", 1)
    address = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(hex_address)
    target = fm.getFunctionAt(address)
    values = set()
    for function in functions_for(address):
        values.update(string_refs(function))
    ordered = sorted(values, key=lambda value: value.lower())
    target_name = target.getName() if target is not None else "<no-function>"
    print("%s\t%s\t%s\t%s" % (hex_address, catalog_name, target_name, "\t".join(ordered)))
