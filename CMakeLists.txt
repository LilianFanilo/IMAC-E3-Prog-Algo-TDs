cmake_minimum_required(VERSION 3.8)
project(TDS)

add_executable(td01_ex01 src/td01_ex01.cpp)
add_executable(td01_ex02 src/td01_ex02.cpp)

add_executable(td02_ex01 src/td02_ex01.cpp)
add_executable(td02_ex02 src/td02_ex02.cpp)
add_executable(td02_ex03 src/td02_ex03.cpp)
add_executable(td02_ex04 src/td02_ex04.cpp)
add_executable(td02_ex05 src/td02_ex05.cpp)
add_executable(td02_ex06 src/td02_ex06.cpp)
add_executable(td02_ex07 src/td02_ex07.cpp)

add_executable(td03_ex01 src/td03_ex01.cpp)
add_executable(td03_ex02 src/td03_ex02.cpp)
add_executable(td03_ex03 src/td03_ex03.cpp)
add_executable(td03_ex04 src/td03_ex04.cpp)
add_executable(td03_ex05 src/td03_ex05.cpp)
add_executable(td03_ex06 src/td03_ex06.cpp)
add_executable(td03_ex07 src/td03_ex07.cpp)
add_executable(td03_bonus src/td03_bonus.cpp)

add_executable(td04_ex01 src/td04_ex01.cpp)
add_executable(td04_ex02 src/td04_ex02.cpp)
add_executable(td04_ex03 src/td04_ex03.cpp)
add_executable(td04_ex04 src/td04_ex04.cpp)
add_executable(td04_ex05 src/td04_ex05.cpp)
add_executable(td04_bonus src/td04_bonus.cpp)

add_executable(td05_ex01 src/td05_ex01.cpp)
add_executable(td05_ex02 src/td05_ex02.cpp)
add_executable(td05_ex03 src/td05_ex02.cpp)

# Targets

target_compile_features(td01_ex01 PRIVATE cxx_std_17)
target_compile_features(td01_ex02 PRIVATE cxx_std_17)

target_compile_features(td02_ex01 PRIVATE cxx_std_17)
target_compile_features(td02_ex02 PRIVATE cxx_std_17)
target_compile_features(td02_ex03 PRIVATE cxx_std_17)
target_compile_features(td02_ex04 PRIVATE cxx_std_17)
target_compile_features(td02_ex05 PRIVATE cxx_std_17)
target_compile_features(td02_ex06 PRIVATE cxx_std_17)
target_compile_features(td02_ex07 PRIVATE cxx_std_17)

target_compile_features(td03_ex01 PRIVATE cxx_std_17)
target_compile_features(td03_ex02 PRIVATE cxx_std_17)
target_compile_features(td03_ex03 PRIVATE cxx_std_17)
target_compile_features(td03_ex04 PRIVATE cxx_std_17)
target_compile_features(td03_ex05 PRIVATE cxx_std_17)
target_compile_features(td03_ex06 PRIVATE cxx_std_17)
target_compile_features(td03_ex07 PRIVATE cxx_std_17)
target_compile_features(td03_bonus PRIVATE cxx_std_17)

target_compile_features(td04_ex01 PRIVATE cxx_std_17)
target_compile_features(td04_ex02 PRIVATE cxx_std_17)
target_compile_features(td04_ex03 PRIVATE cxx_std_17)
target_compile_features(td04_ex04 PRIVATE cxx_std_17)
target_compile_features(td04_ex05 PRIVATE cxx_std_17)
target_compile_features(td04_bonus PRIVATE cxx_std_17)

target_compile_features(td05_ex01 PRIVATE cxx_std_17)
target_compile_features(td05_ex02 PRIVATE cxx_std_17)
target_compile_features(td05_ex03 PRIVATE cxx_std_17)