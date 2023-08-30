#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int a=0, b=0, c=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==1) a++;
        else if(arr[i]==2) b++;
        else if(arr[i]==3) c++;
    }

    int team = min(a, (min(b,c)));
    cout<<team <<endl;

    for(int i=0; i<team; i++){
        int pos1=-1, pos2=-1, pos3=-1;
        for(int j=0; j<n; j++){
            if(arr[j]==1 && pos1==-1){
                pos1=j+1;
                arr[j]=0;
            }
            else if(arr[j]==2 && pos2==-1){
                pos2=j+1;
                arr[j]=0;
            }
            else if(arr[j]==3 && pos3==-1){
                pos3=j+1;
                arr[j]=0;
            }
        }
        cout<<pos1 <<' ' <<pos2 <<' ' <<pos3 <<endl;
    }
}