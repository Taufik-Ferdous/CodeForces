/**
 *    Author: lulu
 *    Created:  08-August-2023  19:47:05
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
    char a;
    string s;
    cin>>a >>s;
    if(a=='R'){
        fo(i,s.size()){
            if(s[i]=='w') cout<<'q';
            else if(s[i]=='e') cout<<'w';
            else if(s[i]=='r') cout<<'e';
            else if(s[i]=='t') cout<<'r';
            else if(s[i]=='y') cout<<'t';
            else if(s[i]=='u') cout<<'y';
            else if(s[i]=='i') cout<<'u';
            else if(s[i]=='o') cout<<'i';
            else if(s[i]=='p') cout<<'o';

            else if(s[i]=='s') cout<<'a';
            else if(s[i]=='d') cout<<'s';
            else if(s[i]=='f') cout<<'d';
            else if(s[i]=='g') cout<<'f';
            else if(s[i]=='h') cout<<'g';
            else if(s[i]=='j') cout<<'h';
            else if(s[i]=='k') cout<<'j';
            else if(s[i]=='l') cout<<'k';
            else if(s[i]==';') cout<<'l';
            
            else if(s[i]=='x') cout<<'z';
            else if(s[i]=='c') cout<<'x';
            else if(s[i]=='v') cout<<'c';
            else if(s[i]=='b') cout<<'v';
            else if(s[i]=='n') cout<<'b';
            else if(s[i]=='m') cout<<'n';
            else if(s[i]==',') cout<<'m';
            else if(s[i]=='.') cout<<',';
            else if(s[i]=='/') cout<<'.';
        }
    }
    else{
        fo(i,s.size()){
            if(s[i]=='q') cout<<'w';
            else if(s[i]=='w') cout<<'e';
            else if(s[i]=='e') cout<<'r';
            else if(s[i]=='r') cout<<'t';
            else if(s[i]=='t') cout<<'y';
            else if(s[i]=='y') cout<<'u';
            else if(s[i]=='u') cout<<'i';
            else if(s[i]=='i') cout<<'o';
            else if(s[i]=='o') cout<<'p';

            else if(s[i]=='a') cout<<'s';
            else if(s[i]=='s') cout<<'d';
            else if(s[i]=='d') cout<<'f';
            else if(s[i]=='f') cout<<'g';
            else if(s[i]=='g') cout<<'h';
            else if(s[i]=='h') cout<<'j';
            else if(s[i]=='j') cout<<'k';
            else if(s[i]=='k') cout<<'l';
            else if(s[i]=='l') cout<<';';
            
            else if(s[i]=='z') cout<<'x';
            else if(s[i]=='x') cout<<'c';
            else if(s[i]=='c') cout<<'v';
            else if(s[i]=='v') cout<<'b';
            else if(s[i]=='b') cout<<'n';
            else if(s[i]=='n') cout<<'m';
            else if(s[i]=='m') cout<<',';
            else if(s[i]==',') cout<<'.';
            else if(s[i]=='.') cout<<'/';
        }
    }
    cout<<endl;
}


int main(){
    optimize();

    ll t=1;
    //cin>>t;
    while(t--)
        lulu();
}