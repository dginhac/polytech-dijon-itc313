# CMakeList.txt for compiling all .cpp files from the current directory
# and link them to the executable into the build directory
# All intermediate files are generated into the build directory
# (c) 2024 by Dom Ginhac (dginhac@ube.fr)
#
# The CMakeLists.txt file must be in the root directory of the project where the source files are located
# Usage (in a terminal in the root directory of the project):
# mkdir build && cd build # create and go into the build dir
# cmake ..                # create the makefiles  
# make                    # compile the source files
# ./app                   # run the app executable    

# 1. Specify the minimum CMake version
cmake_minimum_required(VERSION 3.15)

# 2. Define the project name
project(app)

# 3. Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 4. Define the executable target (name + source files)
add_executable(app main.cpp arithmetic.cpp)

