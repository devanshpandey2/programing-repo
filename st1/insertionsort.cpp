#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,temp;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=1;i<n;i++){
        j=i;
        while(j>0 && a[j-1]>a[j]){
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
    cout<<"Sorted Array is:"<<endl;
    for(i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}