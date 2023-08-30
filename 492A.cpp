#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    
    long long count=0;
    long long inc=0;

    for(int i=1; ; i++){
        inc+=i;
        if(inc<=n){
            count++;
            n -= inc;
        }
        else break;
    }
    cout<<count;
}