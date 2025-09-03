#include <bits/stdc++.h>
using namespace std;

// Function to compute the minimum edge reversals for each node
vector<int> countReverseEdges(int n, vector<int> g_from, vector<int> g_to) {
    vector<vector<pair<int, int>>> adj(n + 1); // adjacency list: (neighbor, isReversed)

    // Construct graph
    for (int i = 0; i < g_from.size(); ++i) {
        adj[g_from[i]].emplace_back(g_to[i], 0); // original direction, no reversal
        adj[g_to[i]].emplace_back(g_from[i], 1); // reversed direction, one reversal
    }

    vector<int> res(n, 0);

    // For each node, run 0-1 BFS to calculate minimum reversals
    for (int start = 1; start <= n; ++start) {
        vector<int> dist(n + 1, INT_MAX);
        deque<int> dq;
        dq.push_front(start);
        dist[start] = 0;
        while (!dq.empty()) {
            int u = dq.front();
            dq.pop_front();
            for (auto &[v, rev] : adj[u]) {
                if (dist[v] > dist[u] + rev) {
                    dist[v] = dist[u] + rev;
                    if (rev == 0)
                        dq.push_front(v); // zero cost edge
                    else
                        dq.push_back(v); // reversed edge
                }
            }
        }
        // Sum the minimum reversals needed to reach every other node
        int totalReversals = 0;
        for (int i = 1; i <= n; ++i) {
            if (i != start)
                totalReversals += dist[i];
        }
        res[start - 1] = totalReversals;
    }
    return res;
}

int main() {
    int n = 4;
    vector<int> g_from = {1, 2, 3};
    vector<int> g_to = {2, 3, 4};

    vector<int> result = countReverseEdges(n, g_from, g_to);

    cout << "Minimum edge reversals for each node:\n";
    for (int i = 0; i < result.size(); ++i) {
        cout << "Node " << (i + 1) << ": " << result[i] << endl;
    }
    return 0;
}