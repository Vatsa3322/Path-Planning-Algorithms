// Function prototype of Dijktras algo

#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include "PathPlanner.h"

class Dijkstra : public PathPlanner {

public:
    std::vector<std::pair<int,int>> findPath(Grid &grid) override;

    std::string getName() override {
        return "Dijkstra Algorithm";
    }
};

#endif
