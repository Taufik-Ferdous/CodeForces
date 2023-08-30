#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        long long int a, ans=0;
        cin>>a;
        ans=a;
        while(a!=0){
            ans += a/2;
            a=a/2;
        }
        cout<<ans <<endl;
    }
}