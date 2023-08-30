#include<bits/stdc++.h>
using namespace std;

void winr(string s, int range){
    int a=0, d=0;
    for(int i=0; i<range; i++){
        if(s[i]=='A') a++;
        else d++;
    }
    if(a>d) cout<<"Anton" <<endl;
    else if(a<d) cout<<"Danik" <<endl;
    else cout<<"Friendship" <<endl;
}

int main(){
    int range;
    cin>>range;
    string in;
    cin>>in;
    winr(in, range);
}