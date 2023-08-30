#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    long long int n;
    cin>>n;
    while(n--){
        long long int a, b;
        cin>>a >>b;
        long long int sum1=0, sum2=0;
        for(long long int i=0; i<a; i++){
            long long int x;
            cin>>x;
            sum1 += x;
        }
        for(long long int i=0; i<b; i++){
            long long int x;
            cin>>x;
            sum2 += x;
        }
        if(sum1>sum2) cout<<"Tsondu" <<endl;
        else if(sum1<sum2) cout<<"Tenzing" <<endl;
        else cout<<"Draw" <<endl;
    }
}