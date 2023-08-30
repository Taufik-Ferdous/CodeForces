#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

void lulu(int s){
    int ans=0;
    s = 10-s; 
    ans = (s*3-3)*s;
    cout<<ans <<endl;
}

int main(){
    int n;
    cin>>n;
    while (n--){
        int s;
        cin>>s;
        for(int i=0; i<s; i++){
            int x;
            cin>>x;
        }
        lulu(s);
    }
}