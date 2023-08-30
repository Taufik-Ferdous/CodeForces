#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

void lulu(long long int a, long long int b, long long int c, long long int d){
    long long int count=0;
    if(b>d) cout<<-1;
    else{
        count = d-b;
        a += count;
        if(a<c) cout<<-1;
        else cout<<(count + (a-c));
    }
    cout<<endl;
}

int main(){
    long long int n;
    cin>>n;
    while(n--){
        long long int a, b, c, d;
        cin>>a >>b >>c >>d;
        lulu(a, b, c, d);
    }
}