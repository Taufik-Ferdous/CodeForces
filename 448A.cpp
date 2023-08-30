/**
 *    Author: lulu
 *    Created:  08-August-2023  23:41:30
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
    ll m=0,c=0;
    fo(i,3){
        ll a;
        cin>>a;
        c+=a;
    }
    fo(i,3){
        ll a;
        cin>>a;
        m+=a;
    }
    ll n;
    cin>>n;

    ll ans=(c/5);
    ans+=(m/10);
    if(c%5) ++ans;
    if(m%10) ++ans;
    if(ans<=n) cout<<"YES" <<endl;
    else cout<<"NO" <<endl;
}


int main(){
    optimize();

    ll t=1;
    //cin>>t;
    while(t--)
        lulu();
}