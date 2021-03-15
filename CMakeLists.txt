cmake_minimum_required(VERSION 3.9.2)
project(UNIVESP_COM_160 VERSION 0.1)

# Variáveis
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(EX_CXX_SRC    src/exemplos)
set(AULAS_CXX_SRC src/aulas)
set(LIVRO_CXX_SRC src/livro)
set(AULAS_H_IN    include/aulas)
set(LIVRO_H_IN    include/livro)

# EXEMPLO 0
set(HELLO_WORLD_NAME hello_world)
set(VETOR_INT_NAME   vetor_inteiros)
set(HELLO_WORLD_SRC  ${EX_CXX_SRC}/0/${HELLO_WORLD_NAME}.cpp)
set(VETOR_INT_SRC    ${EX_CXX_SRC}/0/${VETOR_INT_NAME}.cpp)

# EXEMPLO 1
set(INT_OP_NAME      integer_operations)
set(VETOR_CONST_NAME vetor_com_constante)
set(INT_OP_SRC       ${EX_CXX_SRC}/1/${INT_OP_NAME}.cpp)
set(VETOR_CONST_SRC  ${EX_CXX_SRC}/1/${VETOR_CONST_NAME}.cpp)

# EXEMPLO 2
set(INT_COMP_NAME    integer_comparison)
set(VETOR_DIN_NAME   vetor_dinamico)
set(INT_COMP_SRC     ${EX_CXX_SRC}/2/${INT_COMP_NAME}.cpp)
set(VETOR_DIN_SRC    ${EX_CXX_SRC}/2/${VETOR_DIN_NAME}.cpp)

# EXEMPLO 3
set(INT_LTF_NAME      integers_lesser_than_five)
set(PONT_C_PARAM_NAME ponteiros_como_parametros)
set(INT_LTF_SRC       ${EX_CXX_SRC}/3/${INT_LTF_NAME}.cpp)
set(PONT_C_PARAM_SRC  ${EX_CXX_SRC}/3/${PONT_C_PARAM_NAME}.cpp)

# EXEMPLO 4
set(INT_SUM_SERIE_NAME integers_sum_serie)
set(VETOR_C_PARAM_NAME vetores_como_parametros)
set(INT_SUM_SERIE_SRC  ${EX_CXX_SRC}/4/${INT_SUM_SERIE_NAME}.cpp)
set(VETOR_C_PARAM_SRC  ${EX_CXX_SRC}/4/${VETOR_C_PARAM_NAME}.cpp)

# LISTA EXEMPLOS
set(LISTA_EXEMPLOS
    HELLO_WORLD
    VETOR_INT
    INT_OP
    VETOR_CONST
    INT_COMP
    VETOR_DIN
    INT_LTF
    PONT_C_PARAM
    INT_SUM_SERIE
    VETOR_C_PARAM)

# AULA 4
set(TIME_NAME     tempo)
set(TIME_CXX_SRC  ${AULAS_CXX_SRC}/4)
set(TIME_H_SRC    ${AULAS_H_IN}/4)
set(TIME_H        ${TIME_H_SRC}/${TIME_NAME}.h.in ${TIME_NAME}.h)
set(TIME_SRC      ${TIME_CXX_SRC}/${TIME_NAME}.cpp ${TIME_CXX_SRC}/${TIME_NAME}_main.cpp)

set(LISTA_AULAS
    TIME)


# headers before MAKE build
configure_file(include/${PROJECT_NAME}.h.in ${PROJECT_NAME}.h)
configure_file(${TIME_H})

foreach(NAME IN LISTS LISTA_EXEMPLOS LISTA_AULAS)
    message("Generating ${${NAME}_NAME}:\t\t${${NAME}_SRC}")
    add_executable(${${NAME}_NAME} ${${NAME}_SRC})
    target_include_directories(${${NAME}_NAME} PUBLIC ${PROJECT_BINARY_DIR})
endforeach()
