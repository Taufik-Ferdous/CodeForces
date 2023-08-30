#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        long long int sz;
        string in;
        cin>>sz >>in;
        
        int chk=0, ans=0;

        for(int i=0; i<sz-3; i++){
            for(int j=i+2; j<sz-1; j++){
                if(in[i]==in[j] && in[i+1]==in[j+1]){
                    chk=1;
                    break;
                }
            }
            if(chk==1) break;
        }
        if(chk==1) cout<<"Yes" <<endl;
        else cout<<"No" <<endl;
    }
}