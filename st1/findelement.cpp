#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i,num,poc=0,flag=0;
    cin >>n;
    int a[n];
    cout<<"Enter The Array Elements : ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter a Element which we want to Search : ";
    cin>>num;
    for(i=0;i<n;i++){
        if(a[i]==num){
            flag=1;
            poc=i+1;
        }
    }
    
    if(flag==0)
    cout<<"Element not found";
    else
    cout<<num<<" is found at index "<<poc;
}