#include<bits/stdc++.h>
using namespace std;

void blnk(int s[], int size){
    int ch=0, c=0, max=0;
    for(int i=0; i<size; i++){
        if(s[i] == 0 && ch==0) ch=1;
        if(s[i] == 0 && ch==1) ++c;
        if(s[i] == 1 || size == 1 || (i+1 == size && s[i] == 0)){
            if(max<c) max = c;
            ch=0;
            c=0;
        }
    }
    cout<<max <<endl;
}
void inp(int s[], int size){
    for(int i=0; i<size; i++) cin>>s[i];
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int sz;
        cin>>sz;
        int arr[sz];
        inp(arr, sz);
        blnk(arr, sz);
    }
}