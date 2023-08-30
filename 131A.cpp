/**
 *    Author: lulu
 *    Created:  06-August-2023  11:05:42
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
    string a;
    cin>>a;
    bool f=0, l=1;
    fo(i,a.size()){
        if(a[0]>='a' && a[0]<='z' && f==0){
            f=1;
            continue;
        }
        if(!(a[i]>='A' && a[i]<='Z')){
            l=0;
            break;
        }
    }
    if(l==0) cout<<a <<endl;
    else if(f==0){
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        cout<<a <<endl;
    }
    else{
        fo(i,a.size()){
            if(i==0){
                char dum=a[i]-32;
                cout<<dum;
            }
            else{
                char dum=a[i]+32;
                cout<<dum;
            }
        }
        cout<<endl;
    }
}


int main(){
    optimize();

    ll t=1;
    //cin>>t;
    //deb(t);
    while(t--)
        lulu();
}