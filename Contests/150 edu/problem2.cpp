#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int query;
        deque<int> a;
        string ans;
        cin>>query;
        vector<int> nums(query);
        for(int i=0; i<query; i++) cin>>nums[i];
        int minimum=0;
        for(int it:nums){
            if(a.empty()||it>=a.back()){
                a.push_back(it);
                ans.push_back('1');
            }
            else if(it>=minimum){
                a.push_front(it);
                ans.push_back('1');
            }
            else ans.push_back('0');
            minimum=min(a.front(), a.back());
        }
        cout<<ans<<endl;
    }
}