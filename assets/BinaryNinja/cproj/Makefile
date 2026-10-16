CC = clang
CFLAGS ?= -std=c11 -O2 -w -Wno-everything -fno-common -I src
COMMON_HEADERS := src/gi_platform.h src/gi_stubs.h src/gi_memory.h src/gi_common.h src/gi_human_candidates.h

# clean_sources.json is the measured allowlist of native sources that compile
# with the current macOS shim. Keep the generated/decompiler output out of the
# target until it has been normalized and independently added to that list.
NATIVE_SRCS := $(shell python3 -c 'import json; print(" ".join("src/" + p for p in json.load(open("clean_sources.json"))["ok"] if p not in ("main_runner.c", "gi_stubs.c")))')
NATIVE_SRCS += src/004B0C60-Mem_Alloc.c
OBJS := build/gi_stubs.o build/gi_memory.o $(patsubst src/%.c,build/%.o,$(NATIVE_SRCS))

all: libiginatives.dylib igi_natives_runner

build/gi_stubs.o: src/gi_stubs.c $(COMMON_HEADERS)
	@mkdir -p build
	$(CC) $(CFLAGS) -c -o $@ $<

build/gi_memory.o: src/gi_memory.c src/gi_memory.h
	@mkdir -p build
	$(CC) $(CFLAGS) -c -o $@ $<

build/%.o: src/%.c src/%.h $(COMMON_HEADERS)
	@mkdir -p build
	$(CC) $(CFLAGS) -c -o $@ $<

libiginatives.dylib: $(OBJS)
	$(CC) -dynamiclib -Wl,-undefined,dynamic_lookup -install_name @rpath/libiginatives.dylib -o $@ $(OBJS)

igi_natives_runner: src/main_runner.c libiginatives.dylib
	$(CC) $(CFLAGS) -o $@ src/main_runner.c -L. -liginatives -Wl,-rpath,@loader_path/.

test: igi_natives_runner
	./igi_natives_runner

clean:
	rm -rf build libiginatives.dylib igi_natives_runner cmake_build
