#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int level;
    cin>>level;
    int arr[level+1]={0};

    int jodu;
    cin>>jodu;
    for(int i=0; i<jodu; i++){
        int in;
        cin>>in;
        arr[in]++;
    }

    int kodu;
    cin>>kodu;
    for(int i=0; i<kodu; i++){
        int in;
        cin>>in;
        arr[in]++;
    }

    int chk=0;
    for(int i=1; i<=level; i++){
        if(arr[i]==0){
            cout<<"Oh, my keyboard!" <<endl;
            chk=1;
            break;
        }
    }
    if(chk==0) cout<<"I become the guy." <<endl;
}