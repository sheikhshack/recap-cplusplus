cmake_minimum_required(VERSION 3.16)
project(learningcplusplus)

set(CMAKE_CXX_STANDARD 14)

add_executable(learningcplusplus main.cpp functionPlaying.cpp filehandling.cpp refPointers.cpp basicClass.cpp virtualClasses.cpp scopes.cpp prototypesSimple.cpp HeaderClasses/SimpleClass.cpp HeaderClasses/SimpleClass.h HeaderClasses/SimpleClassTwo.cpp HeaderClasses/SimpleClassTwo.h friendship.cpp templateMethods.cpp templateClasses.cpp)