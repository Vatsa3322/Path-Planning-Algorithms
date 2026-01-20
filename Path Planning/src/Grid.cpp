// Grid logic prototype (grid header file)


#include "Grid.h"
#include <iostream>

Grid::Grid(int r, int c) {
    rows = r;
    cols = c;
    matrix.resize(rows, std::vector<int>(cols, 0));
}

void Grid::setObstacle(int x, int y) {
    matrix[x][y] = -1;
}

void Grid::setStart(int x, int y) {
    start = {x, y};
    matrix[x][y] = 2;
}

void Grid::setGoal(int x, int y) {
    goal = {x, y};
    matrix[x][y] = 3;
}

bool Grid::isValid(int x, int y) const {
    return (x >= 0 && x < rows && y >= 0 && y < cols && matrix[x][y] != -1);
}

void Grid::display() const {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int Grid::getRows() const { return rows; }
int Grid::getCols() const { return cols; }
