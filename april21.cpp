#include <bits/stdc++.h>
using namespace std;

 bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if (n == 1) return true;
        vector<bool> visited(n, false);
        visited[source] = true;
        bool flag = true;
        while (flag) {
            flag = false;
            for (const auto& edge : edges) {
                if (visited[edge[0]] != visited[edge[1]]) {
                    visited[edge[0]] = true;
                    visited[edge[1]] = true;
                    flag = true;
                }
                if (visited[destination]) return true;
            }
        }
        return false;
    }

int main(){
    int n;
    cin>>n;

    vector<vector<int>> edges(n,vector<int>(2));

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        edges[i][0]=a;
        edges[i][1]=b;
    }
    int source,destination;
    cin>>source>>destination;

    bool ans=validPath(n,edges,source,destination);

    cout<<ans<<endl;


}