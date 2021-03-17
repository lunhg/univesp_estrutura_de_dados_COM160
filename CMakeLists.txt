cmake_minimum_required(VERSION 3.9.2)
project(UNIVESP_COM_160 VERSION 0.1)

set(THE_PROJECT_H include/${PROJECT_NAME}.h.in ${PROJECT_NAME}.h)

# Variáveis de compilator
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Pastas principais
set(EX_CXX_SRC    src/exemplos)
set(AULAS_CXX_SRC src/aulas)
set(LIVRO_CXX_SRC src/livro)
set(AULAS_H_IN    include/aulas)
set(LIVRO_H_IN    include/livro)

#header principal com versao do projeto
configure_file(${THE_PROJECT_H})

# Define funcoes gerais para build
function(configure_simple DIRNAME FILENAME)
    message("---- Configuring ${FILENAME}:")
    message("     ${DIRNAME}/${FILENAME}.cpp")
    message("     --> build/${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${FILENAME}")
    add_executable(${FILENAME} ${DIRNAME}/${FILENAME}.cpp)
    target_include_directories(${FILENAME} PUBLIC ${PROJECT_BINARY_DIR})
endfunction()


function(configure_class_main DIRNAME DIRNAME_H FILENAME)
    message("---- Configuring ${FILENAME}: ")
    message("     ${DIRNAME_H}/${FILENAME}.h.in")
    message("     ${DIRNAME}/${FILENAME}.cpp")
    message("     ${DIRNAME}/${FILENAME}_main.cpp")
    message("     --> build/${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${FILENAME}")
    configure_file(${DIRNAME_H}/${FILENAME}.h.in ${FILENAME}.h)
    add_executable(${FILENAME} ${DIRNAME}/${FILENAME}.cpp ${DIRNAME}/${FILENAME}_main.cpp)
    target_include_directories(${FILENAME} PUBLIC ${PROJECT_BINARY_DIR})
endfunction()

##########
# EXEMPLOS
##########

# Define diretorios de exemplos
set(EX_DIRS_LIST 0 1 2 3 4 5)
foreach(N IN LISTS EX_DIRS_LIST)
    set(EX_${N}_DIR ${EX_CXX_SRC}/${N})
endforeach()

# Exemplos 0
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY exemplos/0)
configure_simple(${EX_0_DIR} hello_world)
configure_simple(${EX_0_DIR} vetor_inteiros)

# Exemplos 1
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY exemplos/1)
configure_simple(${EX_1_DIR} integer_operations)
configure_simple(${EX_1_DIR} vetor_com_constante)

# EXEMPLO 2
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY exemplos/2)
configure_simple(${EX_2_DIR} integer_comparison)
configure_simple(${EX_2_DIR} vetor_dinamico)

# EXEMPLO 3
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY exemplos/3)
configure_simple(${EX_3_DIR} integers_lesser_than_five)
configure_simple(${EX_3_DIR} ponteiros_como_parametros)

# EXEMPLO 4
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY exemplos/4)
configure_simple(${EX_4_DIR} integers_sum_serie)
configure_simple(${EX_4_DIR} vetores_como_parametros)

#######
# AULAS
#######

set(EX_AULA_LIST 0 1 2 3 4 5)
foreach(N IN LISTS EX_AULA_LIST)
    set(AULA_${N}_DIR ${AULAS_CXX_SRC}/${N})
    set(AULA_${N}_H ${AULAS_H_IN}/${N})
endforeach()

# AULA 4
#set(TIME_NAME     tempo)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY aulas/4)
configure_class_main(${AULA_4_DIR} ${AULA_4_H} tempo)
