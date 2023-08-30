#include<bits/stdc++.h>
using namespace std;

void lulu(){
    int arr[4];
    for(int i=0; i<4; i++) cin>>arr[i];

    int max1=-1, pos1=-1, max2=-1, pos2=-1;
    
    for(int i=0; i<4; i++)
        if(max1<arr[i]){
            max1 = arr[i];
            pos1 = i;
        }

    arr[pos1] = 0;

    for(int i=0; i<4; i++)
        if(max2<arr[i]){
            max2 = arr[i];
            pos2 = i;
        }

    if((pos1==1 or pos1==0) and (pos2==3 or pos2==2)) cout<<"YES" <<endl;
    else if((pos1==3 or pos1==2) and (pos2==0 or pos2==1)) cout<<"YES" <<endl;
    else cout<<"NO" <<endl;

    
}

int main(){
    int n;
    cin>>n;
    while(n--){
        lulu();
    }
}