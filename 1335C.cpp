#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; ++i){
        ll a; cin>>a;
        v[a-1]++;
    }

    ll count=0, max=0, sum=0;
    for(ll i=0; i<n; ++i){
        if(v[i]) count++;
        if(max<v[i]) max=v[i];
    }

    ll dum=count-1;

    if(max<dum) cout<<max <<endl;
    else if(dum<max && max-dum >= 2) cout<<dum+1 <<endl;
    else cout<<dum <<endl;
}

int main(){
    ll t=1;
    cin>>t;
    while(t--)
        solve();
}