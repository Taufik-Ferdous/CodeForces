#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        int t, even=0, odd=0;
        cin>>t;
        t*=2;
        while(t--){
        int x;
        cin>>x;
        if(x%2==0) even++;
        else odd++;
        }
        if(even == odd) cout<<"YES" <<endl;
        else cout<<"NO" <<endl;
    }
}