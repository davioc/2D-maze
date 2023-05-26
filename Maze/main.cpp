#include <vector>
#include "src/maze.h"

int main() {
    // Example maze configuration
    std::vector<std::vector<char>> mazeData = {
        { '#', '#', '#', '#', '#' },
        { '#', 'S', ' ', ' ', '#' },
        { '#', ' ', '#', ' ', '#' },
        { '#', ' ', ' ', 'G', '#' },
        { '#', '#', '#', '#', '#' }
    };

    // Create a Maze object
    Maze maze(mazeData);

    // Print the maze
    maze.printMaze();

    return 0;
}