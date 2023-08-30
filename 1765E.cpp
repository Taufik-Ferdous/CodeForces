#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        long long int gun, g_s, s_g;
        cin>>gun >>g_s >>s_g;
        if(g_s>s_g) cout<<1 <<endl;
        else{
            if(gun%g_s == 0) cout<<(gun/g_s) <<endl;
            else cout<<(gun/g_s)+1 <<endl;
        }
    }
}