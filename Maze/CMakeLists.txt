cmake_minimum_required(VERSION 3.5)

project(MazeSolver)

# Add the source files
set(SOURCES
    main.cpp
    src/maze.cpp
)

# Add the header files
set(HEADERS
    src/maze.h
)

# Add the executable target
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
