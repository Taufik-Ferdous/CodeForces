#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        int a, b;
        cin>>a >>b;
        
        if(a==b) cout<<0 <<endl;
        else if(b>a){
            if((a%2==0 && b%2==0)||(a%2==1 && b%2==1)) cout<<2 <<endl;
            else if((a%2==1 && b%2==0)||(a%2==0 && b%2==1)) cout<<1 <<endl;
        }
        else{
            if((a%2==0 && b%2==0)||(a%2==1 && b%2==1)) cout<<1 <<endl;
            else if((a%2==1 && b%2==0)||(a%2==0 && b%2==1)) cout<<2 <<endl;
        }
    }
}