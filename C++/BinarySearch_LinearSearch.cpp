#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void binary_search(int a[],int n,int key){
    int l=0,h=n-1,mid ;
    bool f=0;
    while(l <= h){
         mid=(l+h)/2;
         if(a[mid] > key){
           h=mid-1;
         }
         else if (a[mid] < key){
            l=mid +1;
         }
         else {
              f=1;
          break;
         }
    }
    if(f==0){
        cout<<"not found\n";
    }
    else {
        cout<<"found\n";
    }
}

void linear_search(int a[],int n,int key){
    int i=0;
    for(i=0;i<n;i++){
      if(a[i]==key){
          cout<<"found\n";
          break;
      }
    }
    if(i==n){
      cout<<"not found\n";
    }
}

int main(){

    int n;
    cout<<"enter the size of array:\n";
    cin>>n;
    //array must be sorted
    int arr[n];
    cout<<"enter the values of array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter the key :\n";
    int key;
    cin>>key;

    binary_search(arr,n,key);//time complexity : O(log(n))
    linear_search(arr,n,key);//time complexity : O(n);

}