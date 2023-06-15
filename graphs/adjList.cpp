#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    //node, edges
    cin >> n >> m;
    vector <int> adj[n+1];

    for(int i = 0;i<m;i++){
        //u and v
        cin >> u >> v;

        //if undirected graph
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //Time complexity: O(N)
    //Space Complexity: O(E)
    return 0;
}