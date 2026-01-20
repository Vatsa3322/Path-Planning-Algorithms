//Function prototype for DFS algo

#ifndef DFS_H
#define DFS_H

#include "PathPlanner.h"

class DFS : public PathPlanner {

public:
    std::vector<std::pair<int,int>> findPath(Grid &grid) override;

    std::string getName() override {
        return "Depth First Search";
    }
};

#endif
