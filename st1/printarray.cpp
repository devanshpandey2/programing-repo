#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cin >>n;
    int a[n];
    cout<<"Enter The Array Elements : ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The Element of Array is : ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}