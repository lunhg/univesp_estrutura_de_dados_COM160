clean:
	@rm -rf build
	@rm -rf lib

all: lib build test

build:
	@mkdir -p build && cd build && cmake .. && cmake --build . && cd ..

lib: lib.build lib.integer_operations lib.integer_comparison lib.vetor_dinamico

lib.build:
	@mkdir -p lib

lib.integer_operations: 
	@for i in {0..1}; do echo $$((1 + RANDOM % 15)) >> lib/integer_operations.txt; done

lib.integer_comparison:
	@for i in {0..1}; do echo $$((1 + RANDOM % 15)) >> lib/integer_comparison.txt; done

lib.vetor_dinamico:
	@echo $$((1 + RANDOM % 15)) >> lib/vetor_dinamico.txt

test: 
	$(MAKE) test.exemplos

test.exemplos:
	@for i in {0..2}; do $(MAKE) test.exemplos.$$i && echo "" && echo "--------------------" && echo ""; done

test.exemplos.0: 
	@$(BUILD_DIR)/exemplos/0/hello_world
	@echo ""
	@$(BUILD_DIR)/exemplos/0/vetor_inteiros

test.exemplos.1: 
	@$(BUILD_DIR)/exemplos/1/integer_operations	< lib/integer_operations.txt
	@echo ""
	@$(BUILD_DIR)/exemplos/1/vetor_com_constante 

test.exemplos.2: 
	@$(BUILD_DIR)/exemplos/2/integer_comparison < lib/integer_comparison.txt
	@echo ""
	@$(BUILD_DIR)/exemplos/2/vetor_dinamico < lib/vetor_dinamico.txt
