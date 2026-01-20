// path planner prototype 

#ifndef PATHPLANNER_H
#define PATHPLANNER_H

#include "Grid.h"
#include <vector>
#include <string>

class PathPlanner {

public:
    virtual std::vector<std::pair<int,int>> findPath(Grid &grid) = 0;

    virtual std::string getName() = 0;

    virtual ~PathPlanner() {}
};

#endif
