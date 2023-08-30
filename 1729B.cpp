#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int sz;
        string in;
        cin>>sz >>in;
        for(int i=0; i<sz; i++){
            if(in[i]=='1' || in[i]=='2'){
                if(in[i+2]=='0' && (in[i+3]!='0' || i+3>=sz)){
                    string ch;
                    ch.push_back(in[i]);
                    ch.push_back(in[i+1]);
                    int cng = stoi(ch);
                    char ans = 96+cng;
                    cout<<ans;
                    i+=2;
                }
                else{
                    char ans = '0'+in[i];
                    cout<<ans;
                }
            }
            else{
                char ans = '0'+in[i];
                cout<<ans;
            }
        }
        cout<<endl;
    }
}