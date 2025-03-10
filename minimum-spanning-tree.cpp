// tree is graph has n nodes and (n-1) edges
#include "includes.h"
struct Edge {
    int from, to, cost;
    Edge() {};
    Edge(int from, int to, int cost) :
        from(from), to(to), cost(cost) {}

    bool operator < (const Edge e) {
        return cost < e.cost;
    }
};

int find(int x, int* ds) {
    if(ds[x] == x)
        return x;
    return ds[x] = find(ds[x], ds);
}

vector<Edge> minimum_spanning_tree(vector<Edge> edges, int* ds, int n) {
    vector<Edge> takenEdges;
    int taken = 0;
    sort(edges.begin(), edges.end());
    for(auto& i : edges) {
        if(taken == n-1) break;
        int root_from = find(i.from, ds);
        int root_to = find(i.to, ds);
        if(root_from != root_to) {
            ds[root_from] = root_to;
            takenEdges.push_back(i);
            ++taken;
        }
    }
    return takenEdges;
}

