cmake_minimum_required(VERSION 3.20.3)

project(Brumskii-Art VERSION 1.1 DESCRIPTION "A project that displays your name using ASCII characters.")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

message(STATUS "==========Thanks for testing my work!==========")

message(STATUS "==========Made by David Tamaratare Oghenebrume==========")

if(ANDROID)
   message(STATUS "==========Building for Android platform==========")
elseif(WIN32)
   message(STATUS "=========Building for Windows platform==========")
elseif(UNIX)
   if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
      message(STATUS "==========Building for Linux==========")
   elseif(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
      message(STATUS "==========Building for MacOS==========")
   else()
      message(STATUS "==========Building for Unknown UNIX platform==========") 
    endif()
else()
     message(STATUS "==========Building for unknown platform==========")
endif()

if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    message(STATUS "==========Configuring for Clang==========")
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    message(STATUS "==========Configuring for GNU==========")
else()
    message(STATUS "Configuring for unknown compiler.")
endif()

add_executable(Brumskii-Art 
               src/main.cpp 
               src/A.cpp
               src/B.cpp
               src/boolean_functions.cpp
               src/C.cpp
               src/D.cpp
               src/E.cpp
               src/F.cpp
               src/G.cpp
               src/H.cpp
               src/I.cpp
               src/J.cpp
               src/K.cpp
               src/L.cpp
               src/M.cpp
               src/N.cpp
               src/O.cpp
               src/P.cpp
               src/Q.cpp
               src/R.cpp
               src/S.cpp
               src/SPACE.cpp
               src/T.cpp
               src/U.cpp
               src/V.cpp
               src/W.cpp
               src/X.cpp
               src/Y.cpp
               src/Z.cpp
               )                            

target_include_directories(Brumskii-Art PRIVATE include)
