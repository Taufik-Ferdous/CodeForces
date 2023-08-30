#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;

    int len = a.length();

    int o=0, z=0, ck=0;
    for(int i=0; i<len; i++){
        if(a[i]=='0'){
            z++;
            o=0;
            if(z>=7){
                cout<<"YES";
                ck=1;
                break;
            }
        }
        else if(a[i]=='1'){
            o++;
            z=0;
            if(o>=7){
                cout<<"YES";
                ck=1;
                break;
            }
        }
    }
    
    if(ck==0){
        cout<<"NO";
    }
    return 0;
}