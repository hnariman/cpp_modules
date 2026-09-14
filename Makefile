.PHONY: build clean run

CXX := clang++
ARGS = -DCMAKE_CXX_COMPILER=$(CXX) -DCMAKE_EXPORT_COMPILE_COMMANDS=ON

build: clean
	@cmake -B build -G Ninja -S . $(ARGS)
	@cmake --build build --clean-first

clean:
	@$(RM) -rf build

run:
	@./build/st
