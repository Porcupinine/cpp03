cmake_minimum_required(VERSION 3.26)
project(cpp03)

set(CMAKE_CXX_STANDARD 11)

add_executable(ex00
		ex00/ClapTrap.cpp
		ex00/ClapTrap.h
		ex00/main.cpp)

add_executable(ex01
		ex01/src/ClapTrap.cpp
		ex01/src/main.cpp
		ex01/src/ScavTrap.cpp)

add_executable(ex02
		ex02/src/main.cpp
		ex02/src/ClapTrap.cpp
		ex02/src/FragTrap.cpp)

add_executable(ex03
		ex03/src/ClapTrap.cpp
		ex03/src/FragTrap.cpp
		ex03/src/main.cpp
		ex03/src/ScavTrap.cpp
		ex03/src/DiamondTrap.cpp
		ex03/includes/DiamondTrap.h)