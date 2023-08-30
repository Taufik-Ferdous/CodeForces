/**
 *    Author: lulu (Tasmir_)
 *    Created:  24-August-2023  16:53:30
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
    ll ar[55][55];
    fo(i,55) fo(j,55) ar[i][j]=0;
    
    ll n, srl; cin>>n >>srl;
    fo(i,n){
        ll a, b; cin>>a >>b;
        ar[a][b]++;
    }
    ll ans=0;
    for(ll i=50; i>=0; --i)
        for(ll j=0; j<=50; ++j){
            if(ar[i][j]) ans+=ar[i][j];
            if(ans>=srl){
                cout<<ar[i][j] <<endl;
                return;
            }
        }
}


int main(){
    optimize();

    ll t=1;
    //cin>>t;
    while(t--)
        solve();
}