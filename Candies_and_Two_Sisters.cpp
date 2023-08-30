#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        cout<<(a-1)/2 <<endl;
    }
}


/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a, temp, count=0;
        cin>>a;
        temp=a-1;
        if(a<3) cout<<0 <<endl;
        else{
            while(temp>a/2){
                count++;
                temp--;
            }
            cout<<count <<endl;
        }
    }
}
*/

