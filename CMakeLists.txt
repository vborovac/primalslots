cmake_minimum_required(VERSION 3.10)
project("PrimaSlots" LANGUAGES CXX)
add_executable(main src/main.cpp
                    src/matrica.cpp
                    src/player.cpp)
target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)