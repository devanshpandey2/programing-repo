#include<bits/stdc++.h>
using namespace std;
int getmax(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
void countingsort(int arr[],int size,int place){
    const int max=10;
    int output[size];
    int count[max];
    for(int i=0;i<max;++i){
        count[i]=0;
    }
    for(int i=0;i<size;i++){
        count[(arr[i]/place)%10]++;
    }
    for(int i=size-1;i>0;i--){
        output[count[arr[i]/place]];
    }
}