#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,2,2,3,4,4,5,5,5,6,7,8},mid;
    int n=sizeof(a)/sizeof(a[0]);
    int beg=0;
    int end=n-1;
    int item;
    cin>>item;
    while (beg<=end){
        mid=(beg+end)/2;

        if(a[mid]==item){
            cout<<a[mid];
            
        }
        else{
            if(item<a[mid]){
                end=mid-1;
            }
            if(item>a[mid]){
                beg=mid+1;
            }
        }
    }
}