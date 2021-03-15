clean:
	@rm -rf build
	@rm -rf lib

all: lib build test

build:
	@mkdir -p build && cd build && cmake .. && cmake --build . && cd ..

lib: lib.build lib.integers lib.vetor lib.gradebook lib.analysis

lib.build:
	@mkdir -p lib

lib.integers: 
	@for i in {0..1}; do echo $$((1 + RANDOM % 15)) >> lib/integers.txt; done

lib.vetor:
	@echo $$((1 + RANDOM % 15)) >> lib/integers.txt

lib.gradebook:
	@for i in {0..2}; do echo $$((1 + RANDOM % 10)) >> lib/gradebook.txt; \
	done

lib.analysis:
	@echo $$((1 + RANDOM % 15)) >> lib/integers.txt

test: 
	@$(MAKE) test.simple 
	@$(MAKE) test.io

test.simple: 
	@$(MAKE) test.simple.hello_world 
	@$(MAKE) test.simple.vetor_inteiros 

test.io: 
	$(MAKE) test.io.integer_comparison.integers

test.simple.%:
	@echo "--Running $$(echo $@ | cut -d. -f3)"
	@echo ""
	@if [ $$(uname) == "Linux" ]; then \
		./build/$$(echo $@ | cut -d. -f3); \
	fi
	@if [ $$(uname) == "Darwin" ]; then \
		./build/$$(echo $@ | cut -d. -f3); \
	fi
	@if [ $$(uname) == "Windows" ]; then \
		./Debug/build/$$(echo $@ | cut -d. -f3); \
	fi
	@echo ""


test.io.%:
	@echo "--Running $$(echo $@ | cut -d. -f3) < lib/$$(echo $@ | cut -d. -f4).txt"
	@echo ""
	@if [ $$(uname) == "Linux" ]; then ./build/$$(echo $@ | cut -d. -f3) < lib/$$(echo $@ | cut -d. -f4).txt; fi
	@if [ $$(uname) == "Darwin" ]; then	./build/$$(echo $@ | cut -d. -f3) < lib/$$(echo $@ | cut -d. -f4).txt; fi
	@if [ $$(uname) == "Windows" ]; then ./Debug/build/$$(echo $@ | cut -d. -f3) < lib/$$(echo $@ | cut -d. -f4).txt; fi
	@echo ""
