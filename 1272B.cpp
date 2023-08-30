/**
 *    Author: lulu
 *    Created:  21-August-2023  21:07:20
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
    string s; cin>>s;
    ll l=0,r=0,u=0,d=0;
    fo(i,s.size()){
        if(s[i]=='L') l++;
        else if(s[i]=='R') r++;
        else if(s[i]=='U') u++;
        else d++;
    }

    if(min(l,r)>1 && min(u,d)==0 || min(u,d)>1 && min(l,r)==0){
        cout<<2 <<endl;
        if(min(l,r)) cout<<"LR" <<endl;
        else if(min(u,d)) cout<<"UD" <<endl;
    }

    else if(min(l,r) || min(u,d)){
        cout<<(min(l,r)+min(u,d))*2 <<endl;
        fo(i,min(l,r)) cout<<'L';
        fo(i,min(u,d)) cout<<'U';
        fo(i,min(l,r)) cout<<'R';
        fo(i,min(u,d)) cout<<'D';
        cout<<endl;
    }
    else cout<<0 <<endl;
}


int main(){
    optimize();

    ll t=1;
    cin>>t;
    while(t--)
        lulu();
}