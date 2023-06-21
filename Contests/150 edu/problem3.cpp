#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        int ans=0;
        for(int i=0; i<s.size(); i++){
            int num=0;
            for(int j=0; j<s.size(); j++){
                if(i==j){
                    num+=(s[j]-'A'+1);
                }
                else if(j>i && s[j]>i){
                    num-=(s[j]-'A'+1);
                }
                else num+=(s[j]-'A'+1);
            }
            ans=max(ans, num);
        }
        cout<<ans<<endl;
    }
}