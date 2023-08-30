#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

void lulu(int a, int b, int c){
    if(a+b == c) cout<<'+';
    else cout<<'-';
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int a, b, c;
        cin>>a >>b >>c;
        lulu(a, b, c);
    }
}