// Function prototype of BFS algo

#ifndef BFS_H
#define BFS_H

#include "PathPlanner.h"

class BFS : public PathPlanner {

public:
    std::vector<std::pair<int,int>> findPath(Grid &grid) override;

    std::string getName() override {
        return "Breadth First Search";
    }
};

#endif
