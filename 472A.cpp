#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    long long int n;
    cin>>n;
    if(n%2==0) cout<<4 <<' ' <<n-4 <<endl;
    else{
        if(9>(n-9)) cout<<n-9 <<' ' <<9 <<endl;
        else cout<<9 <<' ' <<n-9 <<endl;
    }
}