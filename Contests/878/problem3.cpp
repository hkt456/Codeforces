#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]>=k) arr[i]=1;
            else arr[i]=0;
        }
        int len=0, ans=0;
        for(int i=0; i<n; i++){
            if(arr[i]) len++;
            else{
                ans+=(len-k+1)*(len-k+2)/2;
                len=0;
            }
        }
        if(len>=k) ans+= (len-k+1)*(len-k+2)/2;
        cout<<ans<<endl;
    }
}