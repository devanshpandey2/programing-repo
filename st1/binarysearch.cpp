#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,i,c=0,item;
    cout<<"Enter tota no of element in array : ";
    cin>>n;
    cout<<"Enter the element of array : ";
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int beg=0;
    int end=n-1;
    cout<<"Enter the element you want to search : ";
    cin>>item;
    int mid=(beg+end)/2;
    while(beg<=end){
        if(a[mid]==item){
            cout<<"Element found at index : "<<mid;
            c++;
            break;
        }
        else{
            if(a[mid]<item){
                
                beg=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        mid=(beg+end)/2;
    }
    
    
    if(c==0)
    cout<<"element is not present.";
    return 0;
    


}
