#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    string s; cin>>s;
    vector<ll> chk(2);
    for(ll i=0; i<s.size(); ++i){
        if(s[i]=='0') chk[0]++;
        else if(s[i]=='1') chk[1]++;
    }
    if(chk[0]==0 || chk[1]==0) cout<<s <<endl;
    else{
        for(ll i=0; i<s.size(); ++i){
            if(s[i]==s[i+1] && s[i]=='0') cout<< s[i] <<1;
            else if(s[i]==s[i+1] && s[i]=='1') cout<<s[i] <<0;
            else cout<<s[i];
        }
        cout<<endl;
    }
}

int main(){
    ll t=1;
    cin>>t;
    while(t--)
        solve();
}