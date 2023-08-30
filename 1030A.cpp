#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n, c=0;
    cin>>n;
    
    while(n--){
        int a;
        cin>>a;
        if(a==1) c=1;
    }
    if(c==1) cout<<"HARD" <<endl;
    else cout<<"EASY" <<endl;
}