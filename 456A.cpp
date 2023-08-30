/**
 *    Author: lulu
 *    Created:  23-August-2023  11:02:18
**/
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define ll long long 

#define fo(i,n) for(ll i=0; i<n; ++i)
#define Fo(i,k,n) for(ll i=k;k<n?i<n:i>=n;i<n?++i:--i)
#define deb(x) cout<<#x <<"=" <<x <<endl
#define deb2(x,y) cout<<#x <<"=" <<x <<" " <<#y <<"=" <<y <<endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define endl "\n"

typedef pair<ll,ll>      pl;
typedef vector<ll>       vl;

const int mod = 1e9+7;
const ll N = 1e7+10;
//====================================

void solve(){
    ll n; cin>>n;
    vector<pair<ll,ll>> l(n);
    fo(i,n){
        ll a, b; cin>>a >>b;
        l[i]={a,b};
    }
    sort(all(l));

    bool f=0;
    ll low=0;
    fo(i,n){
        if(l[low].F<l[i].F && l[low].S>l[i].S){
            cout<<"Happy Alex" <<endl;
            return;
        }
        else if(l[low].S<l[i].S) low=i;
    }
    cout<<"Poor Alex" <<endl;
}


int main(){
    optimize();

    ll t=1;
    //cin>>t;
    while(t--)
        solve();
}