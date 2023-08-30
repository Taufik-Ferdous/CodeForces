#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    ll n; cin>>n;
    vector<ll> odd;
    vector<ll> even;

    bool f = 0;

    for(ll i=0; i<n; ++i){
        ll a; cin>>a;
        if(a%2==0) even.push_back(a);
        else odd.push_back(a);
    }


    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    ll ans=0;

    if(odd.size()==0) ans=0;
    else if(odd.size()%2==0){
        for(ll i=1; i<odd.size(); ++i) ans+=odd[i];
        for(ll i=0; i<even.size(); ++i) ans+=even[i];
    }
    else{
        for(ll i=0; i<odd.size(); ++i) ans+=odd[i];
        for(ll i=0; i<even.size(); ++i) ans+=even[i];
    }

    cout<<ans <<endl;
}

int main(){
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}