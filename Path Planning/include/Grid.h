// grid prototype

#ifndef GRID_H
#define GRID_H

#include <vector>
#include <utility>

class Grid {

private:
    int rows;
    int cols;
    std::vector<std::vector<int>> matrix;

public:
    Grid(int r, int c);

    void setObstacle(int x, int y);
    void setStart(int x, int y);
    void setGoal(int x, int y);

    bool isValid(int x, int y) const;
    void display() const;

    int getRows() const;
    int getCols() const;

    std::pair<int,int> start;
    std::pair<int,int> goal;
};

#endif
