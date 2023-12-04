cmake_minimum_required(VERSION 3.26)
project(cpp03)

set(CMAKE_CXX_STANDARD 11)

add_executable(ex00
		ex00/ClapTrap.cpp
		ex00/ClapTrap.h
		ex00/main.cpp)

add_executable(ex01
		ex01/ClapTrap.cpp
		ex01/main.cpp
		ex01/ScavTrap.cpp)

add_executable(ex02
		ex02/main.cpp
		ex02/ClapTrap.cpp
		ex02/FragTrap.cpp)