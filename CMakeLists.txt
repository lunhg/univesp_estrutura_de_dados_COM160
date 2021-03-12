cmake_minimum_required(VERSION 3.9.2)
project(UNIVESP_COM_160 VERSION 0.1)

# Variáveis
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(EX0_HELLO_WORLD_SRC src/ex0_hello_world.cpp)
set(EX0_VECTOR_INT_SRC  src/ex0_vetor_inteiros.cpp)
set(EX1_INT_OP_SRC      src/ex1_integer_operations.cpp)
set(EX1_VEC_W_CONST_SRC src/ex1_vetor_com_constante.cpp)
set(EX2_INT_COMP_SRC    src/ex2_integer_comparison.cpp)
set(EX2_VET_DIN_SRC     src/ex2_vetor_dinamico.cpp)
set(EX3_INT_LES_T_F     src/ex3_integers_lesser_than_five.cpp)
set(EX3_PONT_AS_PARAM   src/ex3_ponteiros_como_parametros.cpp)

#set(TIME_SRC            src/time.cpp src/time_main.cpp)
set(LIVRO_SRC_PATH      src/livro)
set(LIVRO_INC_PATH      include/livro)
set(GRADEBOOK_NAME      gradebook)
set(ANALYSIS_NAME       analysis)
set(ANALYSIS_INC        ${LIVRO_INC_PATH}/${ANALYSIS_NAME}.h.in  ${ANALYSIS_NAME}.h)
set(GRADEBOOK_INC       ${LIVRO_INC_PATH}/${GRADEBOOK_NAME}.h.in ${GRADEBOOK_NAME}.h)
set(GRADEBOOK_SRC       ${LIVRO_SRC_PATH}/${GRADEBOOK_NAME}.cpp  ${LIVRO_SRC_PATH}/${GRADEBOOK_NAME}_main.cpp)
set(ANALYSIS_SRC        ${LIVRO_SRC_PATH}/${ANALYSIS_NAME}.cpp   ${LIVRO_SRC_PATH}/${ANALYSIS_NAME}_main.cpp)

# headers before MAKE build
configure_file(include/${PROJECT_NAME}.h.in ${PROJECT_NAME}.h)
#configure_file(include/time.h.in            time.h)

# Configure headers
configure_file(${GRADEBOOK_INC})
configure_file(${ANALYSIS_INC})

# Executables
add_executable(ex0_hello_world               ${EX0_HELLO_WORLD_SRC})
add_executable(ex0_vetor_inteiros            ${EX0_VECTOR_INT_SRC})
add_executable(ex1_integer_operations        ${EX1_INT_OP_SRC})
add_executable(ex1_vetor_com_constante       ${EX1_VEC_W_CONST_SRC})
add_executable(ex2_integer_comparision       ${EX2_INT_COMP_SRC})
add_executable(ex2_vetor_dinamico            ${EX2_VET_DIN_SRC})
add_executable(ex3_integers_lesser_than_five ${EX3_INT_LES_T_F})
add_executable(ex3_ponteiros_como_parametros ${EX3_PONT_AS_PARAM})
add_executable(${GRADEBOOK_NAME}             ${GRADEBOOK_SRC})
add_executable(${ANALYSIS_NAME}              ${ANALYSIS_SRC})


# includes after MAKE build
target_include_directories(ex0_hello_world               PUBLIC ${PROJECT_BINARY_DIR})
target_include_directories(ex0_vetor_inteiros            PUBLIC ${PROJECT_BINARY_DIR})
target_include_directories(ex1_integer_operations        PUBLIC ${PROJECT_BINARY_DIR})
target_include_directories(ex1_vetor_com_constante       PUBLIC ${PROJECT_BINARY_DIR})
target_include_directories(ex2_integer_comparision       PUBLIC ${PROJECT_BINARY_DIR})
target_include_directories(ex2_vetor_dinamico            PUBLIC ${PROJECT_BINARY_DIR})
target_include_directories(ex3_integers_lesser_than_five PUBLIC ${PROJECT_BINARY_DIR})
target_include_directories(ex3_ponteiros_como_parametros PUBLIC ${PROJECT_BINARY_DIR})
target_include_directories(${GRADEBOOK_NAME}             PUBLIC ${PROJECT_BINARY_DIR})
target_include_directories(${ANALYSIS_NAME}              PUBLIC ${PROJECT_BINARY_DIR})
