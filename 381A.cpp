#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    long long int a=0, b=0;
    int c=0;
    for(int i=0, j=n-1; i <= j;){
        if((c==0) and arr[i] >= arr[j]){
            a+= arr[i];
            i++;
            c=1;
        }
        else if((c==0) and arr[i] < arr[j]){
            a+= arr[j];
            j--;
            c=1;
        }

        else if((c==1) and arr[i] >= arr[j]){
            b+= arr[i];
            i++;
            c=0;
        }
        else if((c==1) and arr[i] < arr[j]){
            b+= arr[j];
            j--;
            c=0;
        }
        
    }

    cout<<a <<' ' <<b;
}