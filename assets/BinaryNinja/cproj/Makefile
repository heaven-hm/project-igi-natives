BUILD_DIR ?= cmake_build
BUILD_JOBS ?= 4
CMAKE ?= cmake

.PHONY: all configure test clean

all: configure
	$(CMAKE) --build $(BUILD_DIR) --parallel $(BUILD_JOBS)

configure:
	$(CMAKE) -S . -B $(BUILD_DIR)

test: all
	ctest --test-dir $(BUILD_DIR) --output-on-failure

clean:
	$(CMAKE) --build $(BUILD_DIR) --target clean
