#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int a[n];
    for (i=0;i<n;i++){
        cin>>a[i];
    }
    int pos,t;
    for(i=0;i<n-1;i++){
        int min=a[i];
        pos=i;
        for(j=i+1;i<n;j++){
            if(a[j]<min){
                min=a[j];
                pos=j;

            }
        }
        t=a[i];
        a[i]=a[pos];
        a[pos]=t;
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;

}