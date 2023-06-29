#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long xA,yA,xB,yB,xC,yC;
        cin>>xA>>yA>>xB>>yB>>xC>>yC;
        int x=0,y=0;
        if((xB>xA && xC>xA)||(xB<xA && xC<xA)){
            if(xA>xB){
                x=xA-max(xB, xC);
            }
            else{
                x=min(xB,xC)-xA;
            }
        }
        if((yA>yB && yA>yC)||(yA<yB && yA<yC)){
            if(yA>yB){
                y=yA-max(yB,yC);
            }
            else{
                y=min(yB,yC)-yA;
            }
        }
        cout<<x+y+1<<endl;
    }
}