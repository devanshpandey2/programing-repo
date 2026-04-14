#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i;
    cin>>n;
    

    int arr[n]={10,20,30,40,50};
    int b=5;
    
    cout<<"Original array: ";
    for(i=0;i < b;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int element_to_add=5;
    for(i=b;i>0;i--){
        arr[i]=arr[i-1];

    }
    arr[0]=element_to_add;
    cout<<"Updated array : ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}