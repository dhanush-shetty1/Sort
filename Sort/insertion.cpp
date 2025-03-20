#include <iostream>
using namespace std;

void insertion(int arr[], int n){
    int num;
    for(int i=1;i<n;i++){
        num=arr[i];
        for(int j=i-1;j>=0;j--){
            if(num<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            arr[j]=num;
        }
    }
    cout<<"Sorted Array:";
    for(int i =0;i<n;i++){
       cout <<arr[i]<<" ";
    }
    
}
int main() {
   int n;
   cout<<"Enter n:";
   cin>>n;
   int arr[n];
   for(int i =0;i<n;i++){
       cout<<"Enter Element:";
       cin>>arr[i];
   }
   cout<<"Array Before Sorting:";
   for(int i =0;i<n;i++){
       cout <<arr[i]<<" ";
   }
   cout<<endl;
   
   insertion(arr, n);
   
   
}