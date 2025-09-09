#include<iostream>
using namespace std;
int main(){
    int A[10],n=10;
    int low = 0,high = 9,key,mid;
    cout<<"Enter the numbers:";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter the key:";
    cin>>key;

    while(low<=high){

        int mid = (low + high)/2;
        if(key == A[mid]){
            cout<<key<<" found at index:"<<mid;
            return 0;
        }
        else if(key>A[mid]){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    cout<<"Not found.";

    return 0;
}