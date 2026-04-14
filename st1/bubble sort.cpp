#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,temp;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){

        for(j=0;j<n-1-i;j++){
            if (a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"sorted array is : "<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


}