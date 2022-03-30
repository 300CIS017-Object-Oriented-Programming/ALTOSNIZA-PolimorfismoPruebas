set(BINARY ${CMAKE_PROJECT_NAME})  # El nombre va a a estar en el CMake principal

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true Model/*.h Model/*.cpp View/*.h View/*.cpp )

# Definicion variable sources


# Instrucción que define el ejecutable a partir de las fuentes definidas + el archivo main.cpp para poder ejecutar el programa
# cuando no se tiene en pruebas unitarias
add_executable(${BINARY}_run ${SOURCES} main.cpp)  # Primer parametro nombre del ejecutable segundo parametro lista de todos los archivos a compilar

 # STATIC libraries are archives of object files for use when linking other targets
#add_library(${CMAKE_PROJECT_NAME}_lib Calculator.h Calculator.cpp)  #construye una libraria que tiene los test que vamos a ejecutar

add_library(${CMAKE_PROJECT_NAME}_lib ${SOURCES})

target_link_libraries(${CMAKE_PROJECT_NAME}_lib)