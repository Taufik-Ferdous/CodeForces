#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a;
    cin>>a;
    if(a%2==0){
        long long int n = a/2;
        cout<<n <<endl;
        cout<<2;
        for(int i=1; i<n; i++) cout<<' ' <<2; 
    }
    else{
        long long int n = (a/2) - 1;
        cout<<n+1 <<endl;
        for(int i=0; i<n; i++) cout<<2 <<' '; 
        cout<<3;
    }
}