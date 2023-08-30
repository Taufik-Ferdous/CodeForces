#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

void lulu(int s, string a){
    string ans;
    ans.push_back(a[0]);
    char ck=a[0];
    for(int i=1; i<s; i++){
        if(a[i]!=ck) continue;
        else if(i+1<s){
            i++;
            ck=a[i];
            ans.push_back(a[i]);
        }
    }
    cout<<ans <<endl;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        int a;
        cin>>a >>s;
        lulu(a, s);
    }
}