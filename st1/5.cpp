#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[]={3,1,2,5,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=2;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            n=n-1;
            for(int j=i;j<n;j++){
                arr[j]=arr[j+1];
            }
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}