#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int s;
        string a;
        cin>>s >>a;
        int c=0;
        if(a[0] == '1') c=1;

        for(int i=1; i<a.length(); i++){
            if(a[i] == '0') cout<<'+';
            else{
                if(a[i]=='1' and c==1){
                    cout<<'-';
                    c=0;
                }
                else{
                    cout<<'+';
                    c=1;
                }
            }
        }
        cout<<endl;
    }
}