#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> edges;

void dfs(int v, int p{
    if(edges[v].size()==1 && edges[v][0]==p) return 1;
    
})

int main(){
    int t;
    cin>>t;
    while(t--){
        edges.assign(n, vector<int>());
        int n, q;
        cin>>n>>q;
        for(int i=0; i<n; i++){
            int u,v;
            cin>>u>>v;
            u--, v--;
            edges[u].push_back(v);
            edges[v].push_back(u);
        }
        vector<long long> count(n,0);


    }
}