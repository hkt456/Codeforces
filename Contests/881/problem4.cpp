#include <bits/stdc++.h>
#include <vector>
using namespace std;
const int maxn = 1e5+5;

vector<vector<long long>> bridge(10000, vector<long long>(10000));
long long counter[maxn];
void dfs(long long x, long long flag=-1){
    if(bridge[x].size()==1&&x!=1) counter[x]=1;
    for(auto v:bridge[x]){
        if(v!=flag){
            dfs(v,x);
            counter[x]+=counter[v];
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, l, r, m;
        cin>>n;
        for(int i=1; i<=n; i++){
            bridge[i].clear();
            counter[i]=0;
        }
        for(int i=1; i<n; i++){
            cin>>l>>r;
            bridge[l].push_back(r);
            bridge[r].push_back(l);
        }
        dfs(1);
        cin>>m;
        while(m--){
            cin>>l>>r;
            cout<<counter[l]*counter[r]<<endl;
        }
    }
}