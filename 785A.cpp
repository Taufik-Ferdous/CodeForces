/**
 *    Author: lulu
 *    Created:  08-August-2023  22:47:31
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
    ll ans=0;
    fo(i,a){
        string dum;
        cin>>dum;
        if(dum=="Tetrahedron") ans+=4;
        else if(dum=="Cube") ans+=6;
        else if(dum=="Octahedron") ans+=8;
        else if(dum=="Dodecahedron") ans+=12;
        else if(dum=="Icosahedron") ans+=20;
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