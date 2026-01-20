// Core Logic of BFS algo

#include "BFS.h"
#include <queue>
#include <map>
#include <algorithm>

std::vector<std::pair<int,int>> BFS::findPath(Grid &grid) {

    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};

    std::queue<std::pair<int,int>> q;
    std::map<std::pair<int,int>, std::pair<int,int>> parent;

    q.push(grid.start);
    parent[grid.start] = {-1, -1};

    while(!q.empty()) {

        auto current = q.front();
        q.pop();

        if(current == grid.goal)
            break;

        for(int i = 0; i < 4; i++) {

            int nx = current.first + dx[i];
            int ny = current.second + dy[i];

            std::pair<int,int> next = {nx, ny};

            if(grid.isValid(nx, ny) && parent.find(next) == parent.end()) {
                q.push(next);
                parent[next] = current;
            }
        }
    }

    std::vector<std::pair<int,int>> path;

    auto cur = grid.goal;

    while(cur.first != -1) {
        path.push_back(cur);
        cur = parent[cur];
    }

    std::reverse(path.begin(), path.end());

    return path;
}
