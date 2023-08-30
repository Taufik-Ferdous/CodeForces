#include<bits/stdc++.h>
#define endl "\n"

using namespace std;
struct node{
    int dam;
    int bon;
};

int main(){
    long long int pow, drg;
    cin>>pow >>drg;
    struct node arr[drg];

    for(long long int i=0; i<drg; i++){
        cin>>arr[i].dam;
        cin>>arr[i].bon;
    }
    int chk=0;
    for(int i=0; i<drg; i++){
        long long int min=-1, pos=-1;
        for(int j=0; j<drg; j++){
            if((arr[j].dam<min) && (arr[j].dam!=-1) || min==-1){
                min = arr[j].dam;
                pos = j;
            }
        }
        if(pow>min){
            pow+=arr[pos].bon;
            arr[pos].dam=-1;
        }
        else chk=1;
    }
    if(chk==0) cout<<"YES" <<endl;
    else cout<<"NO" <<endl;
}