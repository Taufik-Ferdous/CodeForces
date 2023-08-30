#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string c="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
        string in;
        cin>>in;
        int chk = c.find(in);
        if(chk == -1) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
}