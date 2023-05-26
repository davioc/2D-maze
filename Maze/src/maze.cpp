#include "maze.h"
#include <iostream>

Maze::Maze(const std::vector<std::vector<char>>& maze) : maze_(maze) {}
// Set the maze layout
void Maze::printMaze() const {
    for (const auto& row : maze_) {
        for (char cell : row) {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }
}