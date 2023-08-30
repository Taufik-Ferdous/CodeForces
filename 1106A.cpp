/**
 *    Author: lulu
 *    Created:  10-August-2023  10:57:07
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
    char v[a][a];
    fo(i,a){
        string dum;
        cin>>dum;
        fo(j,a) v[i][j]=dum[j];
    }
    ll count=0;
    Fo(i,1,a-1) Fo(j,1,a-1){
        if(v[i][j]=='X'){
            if(v[i-1][j-1]=='X' && v[i-1][j+1]=='X' &&
               v[i+1][j-1]=='X' && v[i+1][j+1]=='X') count++;
        }
    }
    cout<<count <<endl;
}


int main(){
    optimize();

    ll t=1;
    //cin>>t;
    while(t--)
        lulu();
}