cmake_minimum_required(VERSION 3.27)
project(OS_LAB)

set(CMAKE_CXX_STANDARD 14)

add_executable(OS_LAB
        sequential.cpp
        indexed.cpp
        dining_philosopher.cpp
        fit1_first.cpp
        best_fit.cpp
        worstfit.cpp
        fcfs.cpp
        sjf.cpp
        rr.cpp
        priority.cpp
        page_fcfs.cpp
        pages_lru.cpp
        bankers_algorithm.cpp
        page_lfu.cpp
        phil_test.c
)
