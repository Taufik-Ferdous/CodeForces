/**
 *    Author: lulu
 *    Created:  09-August-2023  23:10:23
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
    ll a; cin>>a;
    vl v(a);
    ll j=0;
    fo(i,a){
        ll dum;
        cin>>dum;
        v[i]=j+dum;
        j+=dum;
    }
    ll b; cin>>b;
    ll ans=0;
    fo(i,b){
        ll dum;
        cin>>dum;
        ll l=0, h=a-1;
        while(l<=h){
            ll mid=(l+h)/2;
            if(dum<=v[mid]){
                h=mid-1;
                ans=mid+1;
            }
            else if(dum>v[mid]) l=mid+1;
        }
        cout<<ans <<endl;
    }
}


int main(){
    optimize();

    ll t=1;
    //cin>>t;
    while(t--)
        lulu();
}