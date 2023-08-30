#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    string n;
    cin>>n;
    int c=0;
    string a;
    for(int i=0; i<n.length(); i++){
        if(n[i]=='/' and c==0){
            a.push_back('/');
            c=1;
        }
        else if(n[i]!='/'){
            a.push_back(n[i]);
            c=0;
        }
    }
    if(a.length()>1)
        if(a[a.length()-1]=='/') a.pop_back();
        
    cout<<a;
}