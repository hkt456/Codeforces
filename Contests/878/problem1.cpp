#include <bits/stdc++.h>
using namespace std;
void cleanup(deque<char> q){
    while(!q.empty()){
        cout<<q.front();
        q.pop_front();
    }
    cout<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        deque<char> q;
        char current = s[0];
        q.push_back(current);
        for(int i=1; i<n; i++){
            if(s[i]==q.back()){
                i++;
                if(i<n) q.push_back(s[i]);
            }
        }
        cleanup(q);
    }
}