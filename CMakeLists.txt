cmake_minimum_required(VERSION 3.27)
project(Film_Database)

set(CMAKE_CXX_STANDARD 17)

add_executable(test main.cpp
        classes/Achievements.cpp
        classes/Cartoon.cpp
        classes/Film.cpp
        classes/MediaProduction.cpp
        classes/Rights.cpp
        classes/User.cpp)
