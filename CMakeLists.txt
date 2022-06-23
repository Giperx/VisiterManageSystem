cmake_minimum_required(VERSION 3.21)
project(VisiterManageSystem)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")
add_executable(VisiterManageSystem main.cpp People/Person.cpp People/Person.h People/Student.cpp People/Student.h People/Teacher.cpp People/Teacher.h Surface/Surface.cpp Surface/Surface.h People/Graduate.cpp People/Graduate.h People/GraduateTeacher.cpp People/GraduateTeacher.h Date/Date.cpp Date/Date.h)


