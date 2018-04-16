cmake_minimum_required(VERSION 3.9)
project(Simple_miner)

set(CMAKE_CXX_STANDARD 11)

add_executable(Simple_miner
        blake2.h
        blake2b-ref.c
        blake2-impl.h
        main.c)
