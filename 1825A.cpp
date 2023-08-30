#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

bool lulu(string a){
    for(int i=1; i<a.length(); i++)
        if(a[0] != a[i]) return false;
    return true;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        string in;
        cin>>in;
        if(lulu(in)) cout<<-1 <<endl;
        else cout<<in.length()-1 <<endl;
    }
}