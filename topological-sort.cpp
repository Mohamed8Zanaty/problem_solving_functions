#include "includes.h"

queue<int> topological(vector<vector<int>> adj, int* in, int n) {
    queue<int> q;
    for(int i = 0; i < n; i++) 
        if(!in[i])
            q.push(i);
    queue<int> ans;
    while(q.size()) {
        int front = q.front();
        ans.push(front);
        q.pop();
        for(int i = 0, child; i < adj[front].size(); i++) {
            child = adj[front][i];
            if(not --in[child]) 
                q.push(child);
        }
    }
    return ans;
}