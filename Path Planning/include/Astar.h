// Function prototype of Astar algo

#ifndef ASTAR_H
#define ASTAR_H

#include "PathPlanner.h"

class AStar : public PathPlanner {

public:
    std::vector<std::pair<int,int>> findPath(Grid &grid) override;

    std::string getName() override {
        return "A* Algorithm";
    }
};

#endif
