/**
 *    Author: lulu
 *    Created:  20-August-2023  20:05:33
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
    ll aa; cin>>aa;
    vector<pair<ll, ll>> neg;
    vector<pair<ll, ll>> pos;
    fo(i,aa){
        ll p, a;
        cin>>a >>p;
        if(a>0) pos.pb({a,p});
        else neg.pb({a*-1,p});
    }
    sort(all(pos));
    sort(all(neg));
    ll p=pos.size(), n=neg.size();

    ll ans=0;

    if(p>n) fo(i,n+1){
        if(i!=n){
            ans+=pos[i].S;
            ans+=neg[i].S;
        }
        else ans+=pos[i].S;
    }

    else if(n>p) fo(i,p+1){
        if(i!=p){
            ans+=pos[i].S;
            ans+=neg[i].S;
        }
        else ans+=neg[i].S;
    }

    else fo(i,p){
        ans+=pos[i].S;
        ans+=neg[i].S;
    }
    
    cout<<ans <<endl;
}


int main(){
    optimize();

    ll t=1;
    //cin>>t;
    while(t--)
        lulu();
}