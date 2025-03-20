#include <bits/stdc++.h>
using namespace std;

void selection(int arr[],int n){
    int small, b;
    for(int i =0;i<n-1;i++){
        small=arr[i];
        b=i;
        for(int j=i+1;j<n;j++){
            if(small>arr[j]){
                small=arr[j];
                b=j;
            }
        }
        arr[b]=arr[i];
        arr[i]=small;
    }

}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter Element:";
        cin>>arr[i];
    }
    cout<<"Recieved Array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    selection(arr,n);

    cout<<"Array after sorting is:";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
}