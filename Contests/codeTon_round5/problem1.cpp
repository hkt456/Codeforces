#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        long long sum1=0, sum2=0;
        for(int i=0; i<n; i++){
            long long num;
            cin>>num;
            sum1+=num;
        }
        for(int i=0; i<m; i++){
            long long num;
            cin>>num;
            sum2+=num;
        }
        if(sum1<sum2) cout<<"Tenzing"<<endl;
        else if(sum1==sum2) cout<<"Draw"<<endl;
        else cout<<"Tsondu"<<endl;
    }
    return 0;
}