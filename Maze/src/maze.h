#ifndef MAZE_H
#define MAZE_H

#include <vector>

class Maze {
private:
    std::vector<std::vector<char>> maze_;

public:
    Maze(const std::vector<std::vector<char>>& maze);

    void printMaze() const;
};

#endif // MAZE_H
