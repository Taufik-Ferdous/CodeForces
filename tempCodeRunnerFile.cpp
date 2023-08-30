#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

void lulu(int a, int b){
    int c = __gcd(2, b);
    if(a%c == 0) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int a, b;
        cin>>a >>b;
        lulu(a, b);
    }
}