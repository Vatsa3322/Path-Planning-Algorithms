//main function to run different algo

#include <iostream>

#include "Grid.h"
#include "BFS.h"
#include "DFS.h"
#include "Dijkstra.h"
#include "AStar.h"

int main() {

    Grid grid(6,6);

    grid.setStart(0,0);
    grid.setGoal(5,5);

    grid.setObstacle(1,1);
    grid.setObstacle(2,2);
    grid.setObstacle(3,3);

    grid.display();

    PathPlanner* planner;

    planner = new DFS();// define other algorithms here

    auto path = planner->findPath(grid);

    std::cout << "\nAlgorithm Used: " << planner->getName() << "\n";

    std::cout << "Path:\n";

    for(auto p : path) {
        std::cout << "(" << p.first << "," << p.second << ") -> ";
    }

    std::cout << "GOAL\n";

    delete planner;


    return 0;
}
