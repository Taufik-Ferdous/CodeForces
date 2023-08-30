#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()

void solve(){
    ll a, b;

    cin>>a;
    vector<ll> boy(a);
    for(ll i=0; i<a; ++i) cin>>boy[i];
    sort(all(boy));

    cin>>b;
    vector<ll> g(b);
    for(ll i=0; i<b; ++i) cin>>g[i];
    sort(all(g));

    ll count=0;

    for(ll i=0; i<a; ++i)
        for(ll j=0; j<b; ++j)
            if(abs(boy[i]-g[j])<=1 && g[j]!=0){
                count++;
                g[j]=0;
                break;
            }
    cout<<count <<endl;
}

int main(){
    ll t=1;
    // cin>>t;
    while(t--)
        solve();
}