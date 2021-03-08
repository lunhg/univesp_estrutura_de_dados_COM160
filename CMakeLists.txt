cmake_minimum_required(VERSION 3.19.6)
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

# Arquivo de versão
configure_file(include/${PROJECT_NAME}.h.in ${PROJECT_NAME}.h)
#configure_file(include/time.h.in time.h)

# Executables
add_executable(ex0_hello_world         ${EX0_HELLO_WORLD_SRC})
add_executable(ex0_vetor_inteiros      ${EX0_VECTOR_INT_SRC})
add_executable(ex1_integer_operations  ${EX1_INT_OP_SRC})
add_executable(ex1_vetor_com_constante ${EX1_VEC_W_CONST_SRC})
add_executable(ex2_integer_comparision ${EX2_INT_COMP_SRC})
add_executable(ex2_vetor_dinamico      ${EX2_VET_DIN_SRC})

# includes
target_include_directories(ex0_hello_world          PUBLIC ${PROJECT_BINARY_DIR})
target_include_directories(ex0_vetor_inteiros       PUBLIC ${PROJECT_BINARY_DIR})
target_include_directories(ex1_integer_operations   PUBLIC ${PROJECT_BINARY_DIR})
target_include_directories(ex1_vetor_com_constante  PUBLIC ${PROJECT_BINARY_DIR})
target_include_directories(ex2_integer_comparision  PUBLIC ${PROJECT_BINARY_DIR})
target_include_directories(ex2_vetor_dinamico       PUBLIC ${PROJECT_BINARY_DIR})
