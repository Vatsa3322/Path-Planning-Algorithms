//Core logic of DFS algo

#include "DFS.h"
#include <stack>
#include <map>
#include <algorithm>

std::vector<std::pair<int,int>> DFS::findPath(Grid &grid) {

    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};

    std::stack<std::pair<int,int>> s;
    std::map<std::pair<int,int>, std::pair<int,int>> parent;

    s.push(grid.start);
    parent[grid.start] = {-1, -1};

    bool pathFound = false;

    while(!s.empty()) {

        auto current = s.top();
        s.pop();

        if(current == grid.goal) {
            pathFound = true;
            break;
        }

        for(int i = 0; i < 4; i++) {

            int nx = current.first + dx[i];
            int ny = current.second + dy[i];

            std::pair<int,int> next = {nx, ny};

            if(grid.isValid(nx, ny) && parent.find(next) == parent.end()) {
                s.push(next);
                parent[next] = current;
            }
        }
    }

    std::vector<std::pair<int,int>> path;

    if(!pathFound) {
        return path;      // return empty path if no route exists
    }

    auto cur = grid.goal;

    while(cur.first != -1) {
        path.push_back(cur);
        cur = parent[cur];
    }

    std::reverse(path.begin(), path.end());

    return path;
}

