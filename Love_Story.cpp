#include<bits/stdc++.h>
using namespace std;

void check(string s){
    int count = 0;
    string n = "codeforces";

    for(int i=0; i<11; i++)
        if(s[i] != n[i])
            count++;

    cout<<count <<endl;       
}

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        check(s);
    }
}