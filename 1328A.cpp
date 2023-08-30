/**
 *    Author: lulu
 *    Created:  24-July-2023  23:14:39
**/
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define ll long long 
#define ull unsigned long long
#define ld long double

#define fo(i,n) for(ll i=0; i<n; ++i)
#define Fo(i,k,n) for(ll i=k;k<n?i<n:i>n;i<n?++i:--i)
#define deb(x) cout<<#x <<"=" <<x <<endl
#define deb2(x,y) cout<<#x <<"=" <<x <<" " <<#y <<"=" <<y <<endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define endl "\n"

typedef pair<int,int>    pii;
typedef pair<ll,ll>      pl;
typedef vector<int>      vi;
typedef vector<ll>       vl;
typedef vector<pii>      vpii;
typedef vector<pl>       vpl;
typedef vector<vi>       vvi;
typedef vector<vl>       vvl;

const int mod = 1e9+7;
const ll N = 1e7+10;
//====================================

void solve(){
    ll a, b;
    cin>>a >>b;
    if(a%b==0) cout<<0 <<endl;
    else cout<<b-(a%b) <<endl;
}


int main(){
    optimize();

    ll t=1;
    cin>>t;
    //deb(t);
    while(t--)
        solve();
}