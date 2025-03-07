#include <includes.h>
void dfs(int v, vector<vector<int>> &a, vector<bool> &used) {
    used[v] = 1;
    for(auto &u : a[v]) {
        if(!used[u]) {
            dfs(u, a, used);
        }
    }
}

void bfs(vector<vector<int>> &v, vector<bool> &vis, int start) {
    queue<int> q;
    q.push(start);
    vis[start] = 1;
    int level = 0;
    int sz;
    while(!q.empty()) {
        sz = q.size();
        while(sz--) {
            int node = q.front();
            q.pop();
            for(auto& i : v[node]) {
                if(!vis[i]) {
                    q.push(i);
                    vis[i] = 1;
                }
            }
        }
        ++level;
    }
}

void dijkstra(int start, vector<vector<pair<int, int>>> &adj, vector<int> &dist, vector<bool> &vis, priority_queue<pair<int, int>> &pq) {
    dist[start] = 0;
    pq.push({-dist[start], start});

    while(!pq.empty()) {
        int u = pq.top().second;
        int d = -pq.top().first;
        pq.pop();
        if(vis[u]) continue;
        vis[u] = true;
        for(int i = 0; i < adj[u].size(); ++i) {
            int v = adj[u][i].first;
            int c = adj[u][i].second;
            if(d + c < dist[v]) {
                dist[v] = d + c;
                pq.push({-dist[v], v});
            }
        }
    }
}