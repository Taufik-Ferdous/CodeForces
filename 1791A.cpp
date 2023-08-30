#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

void lulu(char a){
    if(a=='c' || a=='o' ||
       a=='d' || a=='e' ||
       a=='f' || a=='r' ||
       a=='s')
        cout<<"YES";

    else cout<<"NO";

    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        char c;
        cin>>c;
        lulu(c);
    }
}