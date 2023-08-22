cmake_minimum_required(VERSION 3.20)
project(NEURAL_NETWORKS_IN_C++)
set(CMAKE_BUILD_TYPE bug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

add_executable(mynetwork src/main.cpp
                src/Neuron.cpp
                src/Layer.cpp
                src/Matrix.cpp
)