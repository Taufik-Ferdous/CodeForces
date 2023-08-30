#include<bits/stdc++.h>
using namespace std;

void nln(long long int a){
    int c=0;
    while(a!=0){
        if(a%10==4 || a%10==7) c++;
        a /= 10;
    }
    if(c==4 || c==7) cout<<"YES" <<endl;
    else cout<<"NO" <<endl;
}

int main(){
    long long int a;
    cin>>a;
    nln(a);
}