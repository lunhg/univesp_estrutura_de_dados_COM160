clean:
	@rm -rf build
	@rm -rf lib

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
	make run.simple 
	make run.io

run.simple: 
	make run.simple.hello_world 
	make run.simple.vetor_inteiros 

run.io: 
	make run.io.integer_comparison.integers

run.simple.%:
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


run.io.%:
	@echo "--Running $$(echo $@ | cut -d. -f3) < lib/$$(echo $@ | cut -d. -f4).txt"
	@echo ""
	@if [ $$(uname) == "Linux" ]; then ./build/$$(echo $@ | cut -d. -f3) < lib/$$(echo $@ | cut -d. -f4).txt; fi
	@if [ $$(uname) == "Darwin" ]; then	./build/$$(echo $@ | cut -d. -f3) < lib/$$(echo $@ | cut -d. -f4).txt; fi
	@if [ $$(uname) == "Windows" ]; then ./Debug/build/$$(echo $@ | cut -d. -f3) < lib/$$(echo $@ | cut -d. -f4).txt; fi
	@echo ""
