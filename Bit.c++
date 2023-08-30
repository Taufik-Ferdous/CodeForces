#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x=0;

    while(n--){
        string in;

        cin>>in;

        if(in=="++X" || in=="X++")
            x++;
        
        else if(in=="--X" || in=="X--")
            x--;
    }
    cout<<x;
    return 0;
}