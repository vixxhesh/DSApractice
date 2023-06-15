#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    int adj[m+1][n+1];
    for(int i = 0;i<n;i++){
        int u,v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    return 0;
}

//It uses O(N^2) space complexity
//therefore we use adjacency list instead of matrix