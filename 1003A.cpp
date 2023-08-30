#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    ll a; cin>>a;
    vector<ll> v(200);
    for(ll i=0; i<a; ++i){
        ll dum; cin>>dum;
        v[dum]++;
    }
    ll ans=0;
    for(ll i=0; i<200; ++i) if(v[i]>ans) ans=v[i];
    cout<<ans <<endl;
}

int main(){
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}