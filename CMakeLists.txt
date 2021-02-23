cmake_minimum_required(VERSION 3.4.1)
project(IndexTSDB)
set(CMAKE_CXX_STANDARD 14)

add_executable(IndexTSDB
        gloabl.h
        primitive/primitive.h
        primitive/primitive.cpp
        Clustered/Skip_list.h
        Clustered/Skip_list.cpp
        test/test.cpp)