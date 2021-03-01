clean.%:
	@rm ./bin/`echo $@ | cut -d. -f2`/*

build.%:
	@for name in $$(find `echo $@ | cut -d. -f2` -name '*.cpp' | cut -d. -f1 | cut -d/ -f 2); do \
		g++ `echo $@ | cut -d. -f2`/$$name.cpp -`echo $@ | cut -d. -f3` -Wall -o bin/`echo $@ | cut -d. -f2`/$$name; \
	done

clean: clean.aula1 clean.aula3 clean.apoio2

build: build.aula1.O2 build.aula3.O2 build.apoio2.O2
