#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long arr[n];
        long long maxs=0;
        for(int i=0; i<n;i++){
            cin>>arr[i];
            maxs+=abs(arr[i]);
        }
        int minimum=0;
        for(int i=0; i<n; i++){
            bool flag=true;
            if((arr[i]<0)&&flag){
                minimum++;
                while(flag){
                    i++;
                    if(arr[i]>0) flag=false;
                }
            }
        }
        cout<<maxs<<" "<<minimum<<endl;
    }
}