/**
 *    Author: lulu
 *    Created:  10-August-2023  12:43:38
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
    ll a, b;
    cin>>a >>b;
    ll c, d, e;
    for(ll i=a; i<=b; ++i) for(ll j=i+1; j<=b; ++j) for(ll k=j+1; k<=b; ++k)
        if(__gcd(i,j)==1 && __gcd(j,k)==1 && __gcd(i,k)!=1){
            cout<<i <<' ' <<j <<' ' <<k;
            return;
        }
    cout<<-1 <<endl;
}


int main(){
    optimize();

    ll t=1;
    //cin>>t;
    while(t--)
        lulu();
}