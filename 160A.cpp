/**
 *    Author: lulu
 *    Created:  25-July-2023  12:06:58
**/
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define ll long long 
#define ull unsigned long long
#define ld long double

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
    ll n;
    cin>>n;
    vl c(n);
    fo(i,n)cin>>c[i];
    sort(c.rbegin(), c.rend());
    ll total=0;
    fo(i,n) total+=c[i];
    ll ans=0, count=0;
    fo(i,n){
        ans+=c[i];
        count++;
        if(ans>(total/2)) break;
    }
    cout<<count <<endl;
}

int main(){
    optimize();

    ll t=1;
    //cin>>t;
    //deb(t);
    while(t--)
        solve();
}