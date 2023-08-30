/**
 *    Author: lulu
 *    Created:  10-August-2023  15:19:37
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

void lulu(){
    ll n; cin>>n;
    string a; cin>>a;

    map<char,ll> m;
    fo(i,a.size()) m[a[i]]++;
    ll c=0;

    for(auto i: m) if(i.S%n){cout<<-1 <<endl; return;}

    string dum;
    for(auto i: m) fo(j,(i.S/n)) dum.pb(i.F);

    fo(i,n) cout<<dum;
    cout<<endl;
}


int main(){
    optimize();

    ll t=1;
    //cin>>t;
    while(t--)
        lulu();
}