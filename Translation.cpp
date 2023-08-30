#include<bits/stdc++.h>
using namespace std;

bool chk(string s1, string s2){
    for(int i=0, j=(s1.size()-1); i<s1.size(); i++, j--)
        if(s1[i]!=s2[j]) return false;
    return true;
}

int main(){
    string a, b;
    cin>>a >>b;
    if(chk(a, b)) cout<<"YES" <<endl;
    else cout<<"NO" <<endl;
}