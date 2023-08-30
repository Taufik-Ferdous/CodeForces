#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

#define ll long long
#define fo(i,n) for(ll i=0; i<n; i++)
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl "\n"

typedef vector<int>      vi;
typedef vector<ll>       vll;

void solve(){
    ll n;
    cin>>n;
    ll count=1;
    ll l, h;
    fo(i,n){
        cin>>h;
        if(i>0) if(h!=l) count++;
        l=h;
    }
    cout<<count <<endl;
}

int main(){
    ll t=1;
    //cin>>t;
    while(t--)
        solve();
}