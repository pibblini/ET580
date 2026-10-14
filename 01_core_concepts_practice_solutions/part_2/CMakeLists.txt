# Instructions on how to run this program.
# 1. type cmake -B build to create Build folder
# 2. type cmake --build build to compile the program
# 3. type ./build/program to run the program
# 4. to start over: rm -rf build

# 1. Set the minimum required CMake version
cmake_minimum_required(VERSION 3.25)

# 2. Define the project name and programming language
project(program LANGUAGES CXX)

# 3. Specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 4. Define the executable target and all of its source files
add_executable(program 
    main.cpp
    Car.cpp
    Manufacturer.cpp
)