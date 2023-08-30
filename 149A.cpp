/**
 *    Author: lulu
 *    Created:  08-August-2023  23:57:57
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
    ll a;
    cin>>a;
    vl v(12);
    fo(i,12) cin>>v[i];
    sort(v.rbegin(), v.rend());
    ll tl=0;
    ll count=0;
    ll i=0;
    while(tl<a && i<12){
        ++count;
        tl+=v[i];
        ++i;
    }
    if(tl<a) cout<<-1 <<endl;
    else cout<<count <<endl;
}


int main(){
    optimize();

    ll t=1;
    //cin>>t;
    while(t--)
        lulu();
}