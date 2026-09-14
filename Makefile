.PHONY: build clean run test

CXX := clang++
ARGS = -DCMAKE_CXX_COMPILER=$(CXX) -DCMAKE_EXPORT_COMPILE_COMMANDS=ON

build: clean
	@cmake -B build -G Ninja -S . $(ARGS)
	@cmake --build build --clean-first

clean:
	@$(RM) -rf build

test: build
	@ctest --test-dir build --output-on-failure

run:
	@./build/st
