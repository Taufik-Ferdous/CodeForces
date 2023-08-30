#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int max = 0, pas = 0;

    while(n--){
        int a, b;

        cin>>a >>b;
        
        pas -= a;
        pas += b;

        if(pas>max)
            max = pas;
    }
    cout<<max;
    return 0;
}