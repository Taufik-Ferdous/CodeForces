/**
 *    Author: lulu
 *    Created:  26-July-2023  14:33:50
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
    ll n;
    cin>>n;
    if( n%4==0 || n%7==0 || n%44==0 || n%47==0 ||n%74==0 || n%77==0 || n%444==0 ||
        n%447==0 ||n%474==0 || n%477==0 || n%744==0 || n%747==0 ||n%774==0 || n%777==0)
        cout<<"YES" <<endl;
    else cout<<"NO" <<endl;
}


int main(){
    optimize();

    ll t=1;
    //cin>>t;
    //deb(t);
    while(t--)
        solve();
}