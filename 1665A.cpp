#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

void lulu(long long int s){
    cout<<s-3 <<' ' <<1
        <<' ' <<1 <<' '
        <<1 <<endl;
}

int main(){
    int n;
    cin>>n;
    while (n--){
        long long int s;
        cin>>s;
        lulu(s);
    }
}