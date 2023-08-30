#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int in;
        cin>>in;
        int arr[5]={0};
        int count=0;

        for(int i=1, j=0; in>0; i*=10){
            if(in%10 != 0){
                arr[j] = (i*(in%10));
                j++;
                count++;
            }
            in/=10;
        }

        cout<<count <<endl;
        for(int i=0; i<count; i++){
            if(arr[i] != 0){
                cout<<arr[i];
                if(i<count-1) cout<<' ';
            }
        }
        cout<<endl;
    }
}