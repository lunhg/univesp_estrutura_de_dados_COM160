clean:
	@rm -rf build
	@rm -rf lib

all: lib build test

build:
	@mkdir -p build && cd build && cmake .. && cmake --build . && cd ..

lib: 
	@for recipe in build \
		integer_operations \
		integer_comparison \
		vetor_dinamico \
		integers_lesser_than_five \
		integers_sum_serie \
		integers_average; do \
			$(MAKE) lib.$$recipe; \
	done

lib.build:
	@mkdir -p lib

lib.integer_operations: 
	@for i in {0..1}; do echo $$((1 + RANDOM % 15)) >> lib/integer_operations.txt; done

lib.integer_comparison:
	@for i in {0..1}; do echo $$((1 + RANDOM % 15)) >> lib/integer_comparison.txt; done

lib.vetor_dinamico:
	@echo $$((1 + RANDOM % 15)) >> lib/vetor_dinamico.txt

lib.integers_lesser_than_five:
	@for i in {0..4}; do echo $$((1 + RANDOM % 15)) >> lib/integers_lesser_than_five.txt; done

lib.integers_sum_serie:
	@echo $$((1 + RANDOM %  10)) >> lib/integers_sum_serie.txt
	@echo $$((10 + RANDOM %  100)) >> lib/integers_sum_serie.txt
	@echo $$((1 + RANDOM % 5)) >> lib/integers_sum_serie.txt

lib.integers_average:
	@for i in {0..9}; do echo $$((1 + RANDOM % 100)) >> lib/integers_average.txt; done
	@echo EOF >> lib/integers_average.txt

test: 
	$(MAKE) test.exemplos
	$(MAKE) test.aulas
	$(MAKE) test.livro

test.exemplos:
	@for i in {0..4}; do \
		$(MAKE) test.exemplos.$$i && echo "" && echo "--------------------" && echo ""; \
	done

test.aulas:
	@for i in {4..5}; do \
		$(MAKE) test.aulas.$$i && echo "" && echo "--------------------" && echo ""; \
	done

test.livro:	
	@for i in gradebook; do \
		$(MAKE) test.livro.$$i && echo "" && echo "--------------------" && echo ""; \
	done

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

test.exemplos.3: 
	@$(BUILD_DIR)/exemplos/3/integers_lesser_than_five < lib/integers_lesser_than_five.txt
	@echo ""
	@$(BUILD_DIR)/exemplos/3/ponteiros_como_parametros

test.exemplos.4: 
	@$(BUILD_DIR)/exemplos/4/integers_sum_serie < lib/integers_sum_serie.txt
	@echo ""
	@$(BUILD_DIR)/exemplos/4/vetores_como_parametros

test.aulas.4:
	@$(BUILD_DIR)/aulas/4/tempo
	@echo ""

test.aulas.5:
	@$(BUILD_DIR)/aulas/5/integers_average < lib/integers_average.txt
	@echo ""

test.livro.gradebook:
	@$(BUILD_DIR)/livro/gradebook
	@echo ""
